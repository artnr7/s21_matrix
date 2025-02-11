def std_inlcude(file_name):
    file_name.write(
        """#include <check.h>
#include "../include/s21_matrix.h"       
#include "../include/s21_utils.h"
                    
"""
    )


# s21_create_matrix
def test_create_suite_n_main(file_name, cntr):
    file_name.write(
        """Suite  *s21_create_matrix_test(void) {
    Suite *s;
    TCase *tc_create;                
    s = suite_create("s21_create_matrix_suite");
    tc_create = tcase_create("s21_create_matrix_case");
                        """
    )
    cntr_1 = 1
    for i in range(cntr):
        file_name.write(f"tcase_add_test(tc_create, create_{cntr_1});\n\t")
        cntr_1 += 1
    file_name.write(
        """
    suite_add_tcase(s, tc_create);
    return s;
    }                
    int main() {{
    int success = 0;
    Suite *s;
    SRunner *runner;
    s = s21_create_matrix_test();
    runner = srunner_create(s);
    srunner_run_all(runner, CK_NORMAL);
    success = srunner_ntests_failed(runner);
    srunner_free(runner);
    return (success == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
    }}

    """
    )


def s21_create_matrix_test_fun(test_coll):
    s21_create_matrix_test_file = open("test/s21_create_matrix_test.c", "w")
    std_inlcude(s21_create_matrix_test_file)
    cntr = 1
    for i in test_coll[0][0]:
        for j in test_coll[0][1]:
            s21_create_matrix_test_file.write(
f"""START_TEST(create_{cntr}) {{
  matrix_t *mtrx = {{0}};
  mtrx->matrix = NULL;
  mtrx->rows = {i};
  mtrx->columns = {j};
  if ({i} < 1 || {j} < 1) {{
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    }} else if ({i} >= 1 && {j} >= 1) {{
    ck_assert_int_eq(0, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
    }}
}}
END_TEST
        """
            )

            cntr += 1
    cntr -= 1
    test_create_suite_n_main(s21_create_matrix_test_file, cntr)
    s21_create_matrix_test_file.close()


# размеры
rows = [-5, 0, 1, 4, 100]
cols = [-5, 0, 1, 4, 100]

test_sizes = [[-5, 0, 1, 4, 100], [-5, 0, 1, 4, 100]]

# выделение памяти
test_memory = ["NULL"]

test_coll = [[[-5, 0, 1, 4, 100], [-5, 0, 1, 4, 100]], ["NULL"]]

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
