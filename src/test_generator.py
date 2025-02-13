import itertools
from itertools import groupby

def std_inlcude(file_name):
    file_name.write(
        """#include <check.h>

#include "../include/s21_matrix.h"
#include "../include/s21_utils.h"
                    
"""
    )


def s21_test_c(suites):
    s21_test_c_file = open("test/s21_test.c", "w")
    s21_test_c_file.write(f"""
#include "s21_test.h" 
   
int main() {{
  int success = 0;
  SRunner *runner;
                    
  runner = srunner_create(NULL);"""
    )
    for i in suites:
        s21_test_c_file.write(f"\n  srunner_add_suite(runner, {i}());")
    s21_test_c_file.write(
         """
  srunner_run_all(runner, CK_NORMAL);
  success = srunner_ntests_failed(runner);
  srunner_free(runner);
  return (success == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}""")
    s21_test_c_file.close


def s21_test_h(suites):
    s21_test_h_file = open("test/s21_test.h", "w")
    s21_test_h_file.write(
"""#ifndef TEST_H
#define TEST_H
""")
    std_inlcude(s21_test_h_file)
    for i in suites:
        s21_test_h_file.write(f"Suite *{i}(void);\n\n")
    s21_test_h_file.write(
"""#endif
""")
    s21_test_h_file.close()


def suite_fun(suites, index, file_name, test_cntr):
    file_name.write(f"""Suite *{suites[index]}(void) {{
    Suite *s;
    TCase *tc_create;                
    s = suite_create("{suites[index]}_suite");
    tc_create = tcase_create("{suites[index]}_case");
                        """
    )

    cntr = 1
    for i in range(test_cntr):
        file_name.write(f"tcase_add_test(tc_create, create_{cntr});\n  ")
        cntr += 1
    file_name.write("""suite_add_tcase(s, tc_create);
    return s;
}""")

# s21_create_matrix
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
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  }} else if ({i} >= 1 && {j} >= 1) {{
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq({i}, mtrx.rows);
    ck_assert_int_eq({j}, mtrx.columns);
    s21_remove_matrix(&mtrx);
    }}
}}
END_TEST\n\n""")

            cntr += 1
    cntr -= 1

    suite_fun(suites, index, s21_create_matrix_test_file, cntr)
    s21_create_matrix_test_file.close()

def s21_eq_matrix_test_fun(test_coll, suites):
    index = 1
    s21_create_matrix_test_file = open("test/s21_create_matrix_test.c", "w")
    std_inlcude(s21_create_matrix_test_file)

    cntr = 1
    for i in test_coll[0][0]:
        for j in test_coll[0][1]:
            s21_create_matrix_test_file.write(
                f"""START_TEST(create_{cntr}) {{

}}
END_TEST\n\n""")

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
test_memory = ["NULL", "create"]

# эелементы матрицы
#1
zeros = [0, 0.0, 0.00, 0.000, 0.0000, 0.00000, 0.000000, 0.0000000, 0.00000000]
#2
minus_zeros = []
for i in zeros:
    minus_zeros.append(-i)
#3
ones = [1, 0.1, 0.01, 0.001, 0.0001, 0.00001, 0.000001, 0.0000001, 0.00000001]
#4
ones_1 = []
cntr = 0
# for i in range(len(ones)):
#     for j in range(i, len(ones)):
#         for k in range(j, len(ones)):
#             for l in range(k, len(ones)):
#                 for m in range(l, len(ones)):
#                     for n in range(m, len(ones)):
#                         for o in range(n, len(ones)):
#                             for p in range(o, len(ones)):
#                                 for q in range(p, len(ones)):
#                                     ones_1.append(ones[i] + ones[j] + ones[k] + ones[l] + ones[m]+ ones[n] + ones[o]+ ones[p] + ones[q])
#                                     cntr += 1
#                                     print(cntr, end="\n")

for i in range(1):
    for i in range()

# for combination in itertools.combinations(ones, len(ones)):
#     ones_1.append(sum(combination))  # Добавляем сумму комбинации в список
#     cntr += 1
#     print(f"Комбинация: {combination}, Сумма: {sum(combination)}, Счетчик: {cntr}")
                                    


ones_1.sort(reverse=True)
#удаление повторяющихся элементов
ones_1 = [el for el, _ in groupby(ones_1)]

for i in ones_1:
    print(format(i, ".7f"))
print(cntr)


nums = []


# для функции сравнения


test_coll = [[[-5, 0, 1, 4, 100], [-5, 0, 1, 4, 100]], ["NULL", "create"]]

# test.h
s21_test_h(suites)
#test.c
s21_test_c(suites)

# s21_create_matrix
# s21_create_matrix_test_fun(test_coll, suites)


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
