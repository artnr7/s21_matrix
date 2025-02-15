#include <check.h>

#include "../include/s21_matrix.h"
#include "../include/s21_utils.h"

START_TEST(create_1) {
  int rows = -5, cols = -5;
  matrix_t mtrx = {0};
  if (-5 < 1 || -5 < 1) {
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  } else if (-5 >= 1 && -5 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(-5, mtrx.rows);
    ck_assert_int_eq(-5, mtrx.columns);
    s21_remove_matrix(&mtrx);
  }
}
END_TEST

START_TEST(create_2) {
  int rows = -5, cols = 0;
  matrix_t mtrx = {0};
  if (-5 < 1 || 0 < 1) {
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  } else if (-5 >= 1 && 0 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(-5, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
    s21_remove_matrix(&mtrx);
  }
}
END_TEST

START_TEST(create_3) {
  int rows = -5, cols = 1;
  matrix_t mtrx = {0};
  if (-5 < 1 || 1 < 1) {
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  } else if (-5 >= 1 && 1 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(-5, mtrx.rows);
    ck_assert_int_eq(1, mtrx.columns);
    s21_remove_matrix(&mtrx);
  }
}
END_TEST

START_TEST(create_4) {
  int rows = -5, cols = 4;
  matrix_t mtrx = {0};
  if (-5 < 1 || 4 < 1) {
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  } else if (-5 >= 1 && 4 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(-5, mtrx.rows);
    ck_assert_int_eq(4, mtrx.columns);
    s21_remove_matrix(&mtrx);
  }
}
END_TEST

START_TEST(create_5) {
  int rows = -5, cols = 100;
  matrix_t mtrx = {0};
  if (-5 < 1 || 100 < 1) {
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  } else if (-5 >= 1 && 100 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(-5, mtrx.rows);
    ck_assert_int_eq(100, mtrx.columns);
    s21_remove_matrix(&mtrx);
  }
}
END_TEST

START_TEST(create_6) {
  int rows = 0, cols = -5;
  matrix_t mtrx = {0};
  if (0 < 1 || -5 < 1) {
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  } else if (0 >= 1 && -5 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(-5, mtrx.columns);
    s21_remove_matrix(&mtrx);
  }
}
END_TEST

START_TEST(create_7) {
  int rows = 0, cols = 0;
  matrix_t mtrx = {0};
  if (0 < 1 || 0 < 1) {
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  } else if (0 >= 1 && 0 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
    s21_remove_matrix(&mtrx);
  }
}
END_TEST

START_TEST(create_8) {
  int rows = 0, cols = 1;
  matrix_t mtrx = {0};
  if (0 < 1 || 1 < 1) {
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  } else if (0 >= 1 && 1 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(1, mtrx.columns);
    s21_remove_matrix(&mtrx);
  }
}
END_TEST

START_TEST(create_9) {
  int rows = 0, cols = 4;
  matrix_t mtrx = {0};
  if (0 < 1 || 4 < 1) {
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  } else if (0 >= 1 && 4 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(4, mtrx.columns);
    s21_remove_matrix(&mtrx);
  }
}
END_TEST

START_TEST(create_10) {
  int rows = 0, cols = 100;
  matrix_t mtrx = {0};
  if (0 < 1 || 100 < 1) {
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  } else if (0 >= 1 && 100 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(100, mtrx.columns);
    s21_remove_matrix(&mtrx);
  }
}
END_TEST

START_TEST(create_11) {
  int rows = 1, cols = -5;
  matrix_t mtrx = {0};
  if (1 < 1 || -5 < 1) {
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  } else if (1 >= 1 && -5 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(1, mtrx.rows);
    ck_assert_int_eq(-5, mtrx.columns);
    s21_remove_matrix(&mtrx);
  }
}
END_TEST

START_TEST(create_12) {
  int rows = 1, cols = 0;
  matrix_t mtrx = {0};
  if (1 < 1 || 0 < 1) {
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  } else if (1 >= 1 && 0 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(1, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
    s21_remove_matrix(&mtrx);
  }
}
END_TEST

START_TEST(create_13) {
  int rows = 1, cols = 1;
  matrix_t mtrx = {0};
  if (1 < 1 || 1 < 1) {
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  } else if (1 >= 1 && 1 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(1, mtrx.rows);
    ck_assert_int_eq(1, mtrx.columns);
    s21_remove_matrix(&mtrx);
  }
}
END_TEST

START_TEST(create_14) {
  int rows = 1, cols = 4;
  matrix_t mtrx = {0};
  if (1 < 1 || 4 < 1) {
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  } else if (1 >= 1 && 4 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(1, mtrx.rows);
    ck_assert_int_eq(4, mtrx.columns);
    s21_remove_matrix(&mtrx);
  }
}
END_TEST

START_TEST(create_15) {
  int rows = 1, cols = 100;
  matrix_t mtrx = {0};
  if (1 < 1 || 100 < 1) {
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  } else if (1 >= 1 && 100 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(1, mtrx.rows);
    ck_assert_int_eq(100, mtrx.columns);
    s21_remove_matrix(&mtrx);
  }
}
END_TEST

START_TEST(create_16) {
  int rows = 4, cols = -5;
  matrix_t mtrx = {0};
  if (4 < 1 || -5 < 1) {
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  } else if (4 >= 1 && -5 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(4, mtrx.rows);
    ck_assert_int_eq(-5, mtrx.columns);
    s21_remove_matrix(&mtrx);
  }
}
END_TEST

START_TEST(create_17) {
  int rows = 4, cols = 0;
  matrix_t mtrx = {0};
  if (4 < 1 || 0 < 1) {
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  } else if (4 >= 1 && 0 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(4, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
    s21_remove_matrix(&mtrx);
  }
}
END_TEST

START_TEST(create_18) {
  int rows = 4, cols = 1;
  matrix_t mtrx = {0};
  if (4 < 1 || 1 < 1) {
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  } else if (4 >= 1 && 1 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(4, mtrx.rows);
    ck_assert_int_eq(1, mtrx.columns);
    s21_remove_matrix(&mtrx);
  }
}
END_TEST

START_TEST(create_19) {
  int rows = 4, cols = 4;
  matrix_t mtrx = {0};
  if (4 < 1 || 4 < 1) {
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  } else if (4 >= 1 && 4 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(4, mtrx.rows);
    ck_assert_int_eq(4, mtrx.columns);
    s21_remove_matrix(&mtrx);
  }
}
END_TEST

START_TEST(create_20) {
  int rows = 4, cols = 100;
  matrix_t mtrx = {0};
  if (4 < 1 || 100 < 1) {
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  } else if (4 >= 1 && 100 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(4, mtrx.rows);
    ck_assert_int_eq(100, mtrx.columns);
    s21_remove_matrix(&mtrx);
  }
}
END_TEST

START_TEST(create_21) {
  int rows = 100, cols = -5;
  matrix_t mtrx = {0};
  if (100 < 1 || -5 < 1) {
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  } else if (100 >= 1 && -5 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(100, mtrx.rows);
    ck_assert_int_eq(-5, mtrx.columns);
    s21_remove_matrix(&mtrx);
  }
}
END_TEST

START_TEST(create_22) {
  int rows = 100, cols = 0;
  matrix_t mtrx = {0};
  if (100 < 1 || 0 < 1) {
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  } else if (100 >= 1 && 0 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(100, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
    s21_remove_matrix(&mtrx);
  }
}
END_TEST

START_TEST(create_23) {
  int rows = 100, cols = 1;
  matrix_t mtrx = {0};
  if (100 < 1 || 1 < 1) {
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  } else if (100 >= 1 && 1 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(100, mtrx.rows);
    ck_assert_int_eq(1, mtrx.columns);
    s21_remove_matrix(&mtrx);
  }
}
END_TEST

START_TEST(create_24) {
  int rows = 100, cols = 4;
  matrix_t mtrx = {0};
  if (100 < 1 || 4 < 1) {
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  } else if (100 >= 1 && 4 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(100, mtrx.rows);
    ck_assert_int_eq(4, mtrx.columns);
    s21_remove_matrix(&mtrx);
  }
}
END_TEST

START_TEST(create_25) {
  int rows = 100, cols = 100;
  matrix_t mtrx = {0};
  if (100 < 1 || 100 < 1) {
    ck_assert_int_eq(1, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(0, mtrx.rows);
    ck_assert_int_eq(0, mtrx.columns);
  } else if (100 >= 1 && 100 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(rows, cols, &mtrx));
    ck_assert_int_eq(100, mtrx.rows);
    ck_assert_int_eq(100, mtrx.columns);
    s21_remove_matrix(&mtrx);
  }
}
END_TEST

Suite *s21_create_matrix_test(void) {
  Suite *s;
  TCase *tc_create;
  s = suite_create("s21_create_matrix_test_suite");
  tc_create = tcase_create("s21_create_matrix_test_case");
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