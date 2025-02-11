#include <check.h>

#include "../include/s21_matrix.h"
#include "../include/s21_utils.h"

START_TEST(create_1) {
  matrix_t *mtrx;
  mtrx->matrix = NULL;
  mtrx->rows = -5;
  mtrx->columns = -5;
  if (-5 < 2 || -5 < 2) {
    ck_assert_int_eq(INCORRECT,
                     s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
  } else if (-5 >= 2 || -5 >= 2) {
    ck_assert_int_eq(OK, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
  }
}
END_TEST

START_TEST(create_2) {
  matrix_t *mtrx;
  mtrx->matrix = NULL;
  mtrx->rows = -5;
  mtrx->columns = 0;
  if (-5 < 2 || 0 < 2) {
    ck_assert_int_eq(INCORRECT,
                     s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
  } else if (-5 >= 2 || 0 >= 2) {
    ck_assert_int_eq(OK, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
  }
}
END_TEST

START_TEST(create_3) {
  matrix_t *mtrx;
  mtrx->matrix = NULL;
  mtrx->rows = -5;
  mtrx->columns = 1;
  if (-5 < 2 || 1 < 2) {
    ck_assert_int_eq(INCORRECT,
                     s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
  } else if (-5 >= 2 || 1 >= 2) {
    ck_assert_int_eq(OK, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
  }
}
END_TEST

START_TEST(create_4) {
  matrix_t *mtrx;
  mtrx->matrix = NULL;
  mtrx->rows = -5;
  mtrx->columns = 4;
  if (-5 < 2 || 4 < 2) {
    ck_assert_int_eq(INCORRECT,
                     s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
  } else if (-5 >= 2 || 4 >= 2) {
    ck_assert_int_eq(OK, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
  }
}
END_TEST

START_TEST(create_5) {
  matrix_t *mtrx;
  mtrx->matrix = NULL;
  mtrx->rows = -5;
  mtrx->columns = 100;
  if (-5 < 2 || 100 < 2) {
    ck_assert_int_eq(INCORRECT,
                     s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
  } else if (-5 >= 2 || 100 >= 2) {
    ck_assert_int_eq(OK, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
  }
}
END_TEST

START_TEST(create_6) {
  matrix_t *mtrx;
  mtrx->matrix = NULL;
  mtrx->rows = 0;
  mtrx->columns = -5;
  if (0 < 2 || -5 < 2) {
    ck_assert_int_eq(INCORRECT,
                     s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
  } else if (0 >= 2 || -5 >= 2) {
    ck_assert_int_eq(OK, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
  }
}
END_TEST

START_TEST(create_7) {
  matrix_t *mtrx;
  mtrx->matrix = NULL;
  mtrx->rows = 0;
  mtrx->columns = 0;
  if (0 < 2 || 0 < 2) {
    ck_assert_int_eq(INCORRECT,
                     s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
  } else if (0 >= 2 || 0 >= 2) {
    ck_assert_int_eq(OK, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
  }
}
END_TEST

START_TEST(create_8) {
  matrix_t *mtrx;
  mtrx->matrix = NULL;
  mtrx->rows = 0;
  mtrx->columns = 1;
  if (0 < 2 || 1 < 2) {
    ck_assert_int_eq(INCORRECT,
                     s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
  } else if (0 >= 2 || 1 >= 2) {
    ck_assert_int_eq(OK, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
  }
}
END_TEST

START_TEST(create_9) {
  matrix_t *mtrx;
  mtrx->matrix = NULL;
  mtrx->rows = 0;
  mtrx->columns = 4;
  if (0 < 2 || 4 < 2) {
    ck_assert_int_eq(INCORRECT,
                     s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
  } else if (0 >= 2 || 4 >= 2) {
    ck_assert_int_eq(OK, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
  }
}
END_TEST

START_TEST(create_10) {
  matrix_t *mtrx;
  mtrx->matrix = NULL;
  mtrx->rows = 0;
  mtrx->columns = 100;
  if (0 < 2 || 100 < 2) {
    ck_assert_int_eq(INCORRECT,
                     s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
  } else if (0 >= 2 || 100 >= 2) {
    ck_assert_int_eq(OK, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
  }
}
END_TEST

START_TEST(create_11) {
  matrix_t *mtrx;
  mtrx->matrix = NULL;
  mtrx->rows = 1;
  mtrx->columns = -5;
  if (1 < 2 || -5 < 2) {
    ck_assert_int_eq(INCORRECT,
                     s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
  } else if (1 >= 2 || -5 >= 2) {
    ck_assert_int_eq(OK, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
  }
}
END_TEST

START_TEST(create_12) {
  matrix_t *mtrx;
  mtrx->matrix = NULL;
  mtrx->rows = 1;
  mtrx->columns = 0;
  if (1 < 2 || 0 < 2) {
    ck_assert_int_eq(INCORRECT,
                     s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
  } else if (1 >= 2 || 0 >= 2) {
    ck_assert_int_eq(OK, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
  }
}
END_TEST

START_TEST(create_13) {
  matrix_t *mtrx;
  mtrx->matrix = NULL;
  mtrx->rows = 1;
  mtrx->columns = 1;
  if (1 < 2 || 1 < 2) {
    ck_assert_int_eq(INCORRECT,
                     s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
  } else if (1 >= 2 || 1 >= 2) {
    ck_assert_int_eq(OK, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
  }
}
END_TEST

START_TEST(create_14) {
  matrix_t *mtrx;
  mtrx->matrix = NULL;
  mtrx->rows = 1;
  mtrx->columns = 4;
  if (1 < 2 || 4 < 2) {
    ck_assert_int_eq(INCORRECT,
                     s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
  } else if (1 >= 2 || 4 >= 2) {
    ck_assert_int_eq(OK, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
  }
}
END_TEST

START_TEST(create_15) {
  matrix_t *mtrx;
  mtrx->matrix = NULL;
  mtrx->rows = 1;
  mtrx->columns = 100;
  if (1 < 2 || 100 < 2) {
    ck_assert_int_eq(INCORRECT,
                     s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
  } else if (1 >= 2 || 100 >= 2) {
    ck_assert_int_eq(OK, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
  }
}
END_TEST

START_TEST(create_16) {
  matrix_t *mtrx;
  mtrx->matrix = NULL;
  mtrx->rows = 4;
  mtrx->columns = -5;
  if (4 < 2 || -5 < 2) {
    ck_assert_int_eq(INCORRECT,
                     s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
  } else if (4 >= 2 || -5 >= 2) {
    ck_assert_int_eq(OK, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
  }
}
END_TEST

START_TEST(create_17) {
  matrix_t *mtrx;
  mtrx->matrix = NULL;
  mtrx->rows = 4;
  mtrx->columns = 0;
  if (4 < 2 || 0 < 2) {
    ck_assert_int_eq(INCORRECT,
                     s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
  } else if (4 >= 2 || 0 >= 2) {
    ck_assert_int_eq(OK, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
  }
}
END_TEST

START_TEST(create_18) {
  matrix_t *mtrx;
  mtrx->matrix = NULL;
  mtrx->rows = 4;
  mtrx->columns = 1;
  if (4 < 2 || 1 < 2) {
    ck_assert_int_eq(INCORRECT,
                     s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
  } else if (4 >= 2 || 1 >= 2) {
    ck_assert_int_eq(OK, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
  }
}
END_TEST

START_TEST(create_19) {
  matrix_t *mtrx;
  mtrx->matrix = NULL;
  mtrx->rows = 4;
  mtrx->columns = 4;
  if (4 < 2 || 4 < 2) {
    ck_assert_int_eq(INCORRECT,
                     s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
  } else if (4 >= 2 || 4 >= 2) {
    ck_assert_int_eq(OK, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
  }
}
END_TEST

START_TEST(create_20) {
  matrix_t *mtrx;
  mtrx->matrix = NULL;
  mtrx->rows = 4;
  mtrx->columns = 100;
  if (4 < 2 || 100 < 2) {
    ck_assert_int_eq(INCORRECT,
                     s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
  } else if (4 >= 2 || 100 >= 2) {
    ck_assert_int_eq(OK, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
  }
}
END_TEST

START_TEST(create_21) {
  matrix_t *mtrx;
  mtrx->matrix = NULL;
  mtrx->rows = 100;
  mtrx->columns = -5;
  if (100 < 2 || -5 < 2) {
    ck_assert_int_eq(INCORRECT,
                     s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
  } else if (100 >= 2 || -5 >= 2) {
    ck_assert_int_eq(OK, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
  }
}
END_TEST

START_TEST(create_22) {
  matrix_t *mtrx;
  mtrx->matrix = NULL;
  mtrx->rows = 100;
  mtrx->columns = 0;
  if (100 < 2 || 0 < 2) {
    ck_assert_int_eq(INCORRECT,
                     s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
  } else if (100 >= 2 || 0 >= 2) {
    ck_assert_int_eq(OK, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
  }
}
END_TEST

START_TEST(create_23) {
  matrix_t *mtrx;
  mtrx->matrix = NULL;
  mtrx->rows = 100;
  mtrx->columns = 1;
  if (100 < 2 || 1 < 2) {
    ck_assert_int_eq(INCORRECT,
                     s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
  } else if (100 >= 2 || 1 >= 2) {
    ck_assert_int_eq(OK, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
  }
}
END_TEST

START_TEST(create_24) {
  matrix_t *mtrx;
  mtrx->matrix = NULL;
  mtrx->rows = 100;
  mtrx->columns = 4;
  if (100 < 2 || 4 < 2) {
    ck_assert_int_eq(INCORRECT,
                     s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
  } else if (100 >= 2 || 4 >= 2) {
    ck_assert_int_eq(OK, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
  }
}
END_TEST

START_TEST(create_25) {
  matrix_t *mtrx;
  mtrx->matrix = NULL;
  mtrx->rows = 100;
  mtrx->columns = 100;
  if (100 < 2 || 100 < 2) {
    ck_assert_int_eq(INCORRECT,
                     s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
  } else if (100 >= 2 || 100 >= 2) {
    ck_assert_int_eq(OK, s21_create_matrix(mtrx->rows, mtrx->columns, mtrx));
    s21_remove_matrix(mtrx);
  }
}
END_TEST

Suite *s21_create_matrix_test(void) {
  Suite *s;

  TCase *tc_create;

  s = suite_create("s21_create_matrix_suite");

  tc_create = tcase_create("s21_create_matrix_case");
  tcase_add_test(tc_create, create_1);
  tcase_add_test(tc_create, create_2);
  tcase_add_test(tc_create, create_3);
  tcase_add_test(tc_create, create_4);
  tcase_add_test(tc_create, create_5);
  tcase_add_test(tc_create, create_6);
  tcase_add_test(tc_create, create_7);
  tcase_add_test(tc_create, create_8);
  tcase_add_test(tc_create, create_9);
  tcase_add_test(tc_create, create_10);
  tcase_add_test(tc_create, create_11);
  tcase_add_test(tc_create, create_12);
  tcase_add_test(tc_create, create_13);
  tcase_add_test(tc_create, create_14);
  tcase_add_test(tc_create, create_15);
  tcase_add_test(tc_create, create_16);
  tcase_add_test(tc_create, create_17);
  tcase_add_test(tc_create, create_18);
  tcase_add_test(tc_create, create_19);
  tcase_add_test(tc_create, create_20);
  tcase_add_test(tc_create, create_21);
  tcase_add_test(tc_create, create_22);
  tcase_add_test(tc_create, create_23);
  tcase_add_test(tc_create, create_24);
  tcase_add_test(tc_create, create_25);

  suite_add_tcase(s, tc_create);

  return s;
}

int main() {
  {
    int success = 0;
    Suite *s;
    SRunner *runner;
    s = test_suite();
    runner = srunner_create(s);
    srunner_run_all(runner, CK_NORMAL);
    success = srunner_ntests_failed(runner);
    srunner_free(runner);
    return (success == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
  }
}
