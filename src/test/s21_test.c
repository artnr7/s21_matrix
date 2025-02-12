#include "s21_test.h"

#include <check.h>

#include "../include/s21_matrix.h"
#include "../include/s21_utils.h"

int main() {
  int success = 0;
  SRunner *runner;

  runner =   srunner_create(NULL);
  srunner_add_suite(runner, s21_create_matrix_test);
  srunner_add_suite(runner, s21_eq_matrix_test);
  srunner_add_suite(runner, s21_sum_matrix_test);
  srunner_add_suite(runner, s21_sub_matrix_test);
  srunner_add_suite(runner, s21_sub_matrix_test);
  srunner_add_suite(runner, s21_mult_number_test);
  srunner_add_suite(runner, s21_mult_matrix_test);
  srunner_add_suite(runner, s21_transpose_test);
  srunner_add_suite(runner, s21_calc_complements_test);
  srunner_add_suite(runner, s21_determinant_test);
  srunner_add_suite(runner, s21_inverse_matrix_test);

  srunner_run_all(runner, CK_NORMAL);
  success = srunner_ntests_failed(runner);
  srunner_free(runner);
  return (success == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}