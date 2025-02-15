
#include "s21_test.h"

int main() {
  int success = 0;
  SRunner *runner;

  runner = srunner_create(NULL);
  srunner_add_suite(runner, s21_create_matrix_test());
  srunner_add_suite(runner, s21_eq_matrix_test());
  srunner_add_suite(runner, s21_other());
  srunner_run_all(runner, CK_NORMAL);
  success = srunner_ntests_failed(runner);
  srunner_free(runner);
  return (success == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}