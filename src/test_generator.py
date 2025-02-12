def std_inlcude(file_name):
    file_name.write(
        """#include <check.h>

#include "../include/s21_matrix.h"
#include "../include/s21_utils.h"
                    
"""
    )


def s21_test_c(suites):
    s21_test_c_file = open("test/s21_test.c", "w")
    std_inlcude(s21_test_c_file)
    s21_test_c_file.write(
        f"""
#include "s21_test.h" 
   
int main() {{
  int success = 0;
  SRunner *runner;
                    
  runner = srunner_create(NULL);"""
    )
    for i in suites:
        s21_test_c_file.write(f"srunner_add_suite(runner, {i});\n  ")
    s21_test_c_file.write(
         """

    srunner_run_all(runner, CK_NORMAL);
    success = srunner_ntests_failed(runner);
    srunner_free(runner);
    return (success == 0) ? EXIT_SUCCESS : EXIT_FAILURE;}"""
    )
    s21_test_c_file.close


def s21_test_h(suites):
    s21_test_h_file = open("test/s21_test.h", "w")
    std_inlcude(s21_test_h_file)
    for i in suites:
        s21_test_h_file.write(f"Suite *{i}(void);\n")
    s21_test_h_file.close()




# def suite_fun(suites, fun_test_files, test_cntr):
#     gi = 0
#     for i in range(len(suites)):
#         s21_test_file = open(f"test/{fun_test_files[i]}")
#         fun_test_files[i].write(f"""Suite *{suites[i]}
#     Suite *s;
#     TCase *tc_create;
#     s = suite_create("{suites[i]}_suite");
#     tc_create = tcase_create({suites[i]}_case");
# """)
#     cntr = 1
#     for i in range(test_cntr):

        
#     s21_test_file.close()



# s21_create_matrix
def suite_fun(suites, index,  file_name, test_cntr):
    file_name.write(f"""Suite *{suites[index]}(void) {{
    Suite *s;
    TCase *tc_create;                
    s = suite_create("{suites[index]}_suite");
    tc_create = tcase_create({suites[index]}_case");
                        """
    )

    cntr = 1
    for i in range(test_cntr):
        file_name.write(f"tcase_add_test(tc_create, create_{cntr});\n  ")
        cntr += 1
    file_name.write(
        """
    suite_add_tcase(s, tc_create);
    return s;
    }                

    }}

    """
    )


def s21_create_matrix_test_fun(test_coll, suites):
    index = 0
    s21_create_matrix_test_file = open("test/s21_create_matrix_test.c", "w")
    std_inlcude(s21_create_matrix_test_file)

    cntr = 1
    for i in test_coll[0][0]:
        for j in test_coll[0][1]:
            s21_create_matrix_test_file.write(
                f"""START_TEST(create_{cntr}) {{
  int rows = {i}, cols = {j};
  matrix_t mtrx = {{0}};
  if ({i} < 1 || {j} < 1) {{
    ck_assert_int_eq(1,
        s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  }} else if ({i} >= 1 && {j} >= 1) {{
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq({i}, mtrx.rows);
    ck_assert_int_eq({j}, mtrx.columns);
    s21_remove_matrix(&mtrx);
    }}
}}
END_TEST
        """
            )

            cntr += 1
    cntr -= 1

    suite_fun(suites, index, s21_create_matrix_test_file, cntr)
    s21_create_matrix_test_file.close()


suites = [
    "s21_create_matrix_test",
    "s21_eq_matrix_test",
    "s21_sum_matrix_test",
    "s21_sub_matrix_test",
    "s21_sub_matrix_test",
    "s21_mult_number_test",
    "s21_mult_matrix_test",
    "s21_transpose_test",
    "s21_calc_complements_test",
    "s21_determinant_test",
    "s21_inverse_matrix_test",
]

fun_test_files = []
for i in suites:
    fun_test_files.append(i+".c")

# размеры
rows = [-5, 0, 1, 4, 100]
cols = [-5, 0, 1, 4, 100]

test_sizes = [[-5, 0, 1, 4, 100], [-5, 0, 1, 4, 100]]

# выделение памяти
test_memory = ["NULL"]

test_coll = [[[-5, 0, 1, 4, 100], [-5, 0, 1, 4, 100]], ["NULL"]]

# test.h
s21_test_h(suites)
#test.c
s21_test_c(suites)

#test_files
suite_fun(suites)


# s21_create_matrix
s21_create_matrix_test_fun(test_coll)


# Что можно проверить в функциях?
#  s21_create_matrix ► корректность размеров
#  s21_remove_matrix ► НИЧЕГО
#  s21_eq_matrix ► корректность размеров, выделение памяти
#  s21_sum_matrix s21_sub_matrix ► корректность размеров, выделение памяти, размеры равны
#  s21_mulnum_matrix s21_sub_matrix ► корректность размера, выделение памяти
#  s21_mult_matrix ► корректность размеров, выделение памяти, размеры подходят
#  s21_transpose ► корректность размеров, выделение памяти
#  s21_transpose ► корректность размеров, выделение памяти
#  s21_calc_complements ► корректность размеров, выделение памяти, матрица квадратна
#  s21_determinant ► корректность размеров, выделение памяти, матрица квадратна
