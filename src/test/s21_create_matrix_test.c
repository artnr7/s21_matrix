#include <check.h>
#include "../include/s21_matrix.h"       
#include "../include/s21_utils.h"
                    
START_TEST(create_1) {
  const int rows = -5, cols = -5;
  matrix_t mtrx = {NULL, rows, cols};
  if (-5 < 1 || -5 < 1) {
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    } else if (-5 >= 1 && -5 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    s21_remove_matrix(&mtrx);
    }
}
END_TEST
        START_TEST(create_2) {
  const int rows = -5, cols = 0;
  matrix_t mtrx = {NULL, rows, cols};
  if (-5 < 1 || 0 < 1) {
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    } else if (-5 >= 1 && 0 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    s21_remove_matrix(&mtrx);
    }
}
END_TEST
        START_TEST(create_3) {
  const int rows = -5, cols = 1;
  matrix_t mtrx = {NULL, rows, cols};
  if (-5 < 1 || 1 < 1) {
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    } else if (-5 >= 1 && 1 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    s21_remove_matrix(&mtrx);
    }
}
END_TEST
        START_TEST(create_4) {
  const int rows = -5, cols = 4;
  matrix_t mtrx = {NULL, rows, cols};
  if (-5 < 1 || 4 < 1) {
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    } else if (-5 >= 1 && 4 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    s21_remove_matrix(&mtrx);
    }
}
END_TEST
        START_TEST(create_5) {
  const int rows = -5, cols = 100;
  matrix_t mtrx = {NULL, rows, cols};
  if (-5 < 1 || 100 < 1) {
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    } else if (-5 >= 1 && 100 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    s21_remove_matrix(&mtrx);
    }
}
END_TEST
        START_TEST(create_6) {
  const int rows = 0, cols = -5;
  matrix_t mtrx = {NULL, rows, cols};
  if (0 < 1 || -5 < 1) {
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    } else if (0 >= 1 && -5 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    s21_remove_matrix(&mtrx);
    }
}
END_TEST
        START_TEST(create_7) {
  const int rows = 0, cols = 0;
  matrix_t mtrx = {NULL, rows, cols};
  if (0 < 1 || 0 < 1) {
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    } else if (0 >= 1 && 0 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    s21_remove_matrix(&mtrx);
    }
}
END_TEST
        START_TEST(create_8) {
  const int rows = 0, cols = 1;
  matrix_t mtrx = {NULL, rows, cols};
  if (0 < 1 || 1 < 1) {
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    } else if (0 >= 1 && 1 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    s21_remove_matrix(&mtrx);
    }
}
END_TEST
        START_TEST(create_9) {
  const int rows = 0, cols = 4;
  matrix_t mtrx = {NULL, rows, cols};
  if (0 < 1 || 4 < 1) {
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    } else if (0 >= 1 && 4 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    s21_remove_matrix(&mtrx);
    }
}
END_TEST
        START_TEST(create_10) {
  const int rows = 0, cols = 100;
  matrix_t mtrx = {NULL, rows, cols};
  if (0 < 1 || 100 < 1) {
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    } else if (0 >= 1 && 100 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    s21_remove_matrix(&mtrx);
    }
}
END_TEST
        START_TEST(create_11) {
  const int rows = 1, cols = -5;
  matrix_t mtrx = {NULL, rows, cols};
  if (1 < 1 || -5 < 1) {
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    } else if (1 >= 1 && -5 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    s21_remove_matrix(&mtrx);
    }
}
END_TEST
        START_TEST(create_12) {
  const int rows = 1, cols = 0;
  matrix_t mtrx = {NULL, rows, cols};
  if (1 < 1 || 0 < 1) {
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    } else if (1 >= 1 && 0 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    s21_remove_matrix(&mtrx);
    }
}
END_TEST
        START_TEST(create_13) {
  const int rows = 1, cols = 1;
  matrix_t mtrx = {NULL, rows, cols};
  if (1 < 1 || 1 < 1) {
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    } else if (1 >= 1 && 1 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    s21_remove_matrix(&mtrx);
    }
}
END_TEST
        START_TEST(create_14) {
  const int rows = 1, cols = 4;
  matrix_t mtrx = {NULL, rows, cols};
  if (1 < 1 || 4 < 1) {
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    } else if (1 >= 1 && 4 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    s21_remove_matrix(&mtrx);
    }
}
END_TEST
        START_TEST(create_15) {
  const int rows = 1, cols = 100;
  matrix_t mtrx = {NULL, rows, cols};
  if (1 < 1 || 100 < 1) {
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    } else if (1 >= 1 && 100 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    s21_remove_matrix(&mtrx);
    }
}
END_TEST
        START_TEST(create_16) {
  const int rows = 4, cols = -5;
  matrix_t mtrx = {NULL, rows, cols};
  if (4 < 1 || -5 < 1) {
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    } else if (4 >= 1 && -5 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    s21_remove_matrix(&mtrx);
    }
}
END_TEST
        START_TEST(create_17) {
  const int rows = 4, cols = 0;
  matrix_t mtrx = {NULL, rows, cols};
  if (4 < 1 || 0 < 1) {
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    } else if (4 >= 1 && 0 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    s21_remove_matrix(&mtrx);
    }
}
END_TEST
        START_TEST(create_18) {
  const int rows = 4, cols = 1;
  matrix_t mtrx = {NULL, rows, cols};
  if (4 < 1 || 1 < 1) {
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    } else if (4 >= 1 && 1 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    s21_remove_matrix(&mtrx);
    }
}
END_TEST
        START_TEST(create_19) {
  const int rows = 4, cols = 4;
  matrix_t mtrx = {NULL, rows, cols};
  if (4 < 1 || 4 < 1) {
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    } else if (4 >= 1 && 4 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    s21_remove_matrix(&mtrx);
    }
}
END_TEST
        START_TEST(create_20) {
  const int rows = 4, cols = 100;
  matrix_t mtrx = {NULL, rows, cols};
  if (4 < 1 || 100 < 1) {
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    } else if (4 >= 1 && 100 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    s21_remove_matrix(&mtrx);
    }
}
END_TEST
        START_TEST(create_21) {
  const int rows = 100, cols = -5;
  matrix_t mtrx = {NULL, rows, cols};
  if (100 < 1 || -5 < 1) {
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    } else if (100 >= 1 && -5 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    s21_remove_matrix(&mtrx);
    }
}
END_TEST
        START_TEST(create_22) {
  const int rows = 100, cols = 0;
  matrix_t mtrx = {NULL, rows, cols};
  if (100 < 1 || 0 < 1) {
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    } else if (100 >= 1 && 0 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    s21_remove_matrix(&mtrx);
    }
}
END_TEST
        START_TEST(create_23) {
  const int rows = 100, cols = 1;
  matrix_t mtrx = {NULL, rows, cols};
  if (100 < 1 || 1 < 1) {
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    } else if (100 >= 1 && 1 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    s21_remove_matrix(&mtrx);
    }
}
END_TEST
        START_TEST(create_24) {
  const int rows = 100, cols = 4;
  matrix_t mtrx = {NULL, rows, cols};
  if (100 < 1 || 4 < 1) {
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    } else if (100 >= 1 && 4 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    s21_remove_matrix(&mtrx);
    }
}
END_TEST
        START_TEST(create_25) {
  const int rows = 100, cols = 100;
  matrix_t mtrx = {NULL, rows, cols};
  if (100 < 1 || 100 < 1) {
    ck_assert_int_eq(1,
        s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    } else if (100 >= 1 && 100 >= 1) {
    ck_assert_int_eq(0, s21_create_matrix(mtrx.rows, mtrx.columns, &mtrx));
    s21_remove_matrix(&mtrx);
    }
}
END_TEST
        Suite  *s21_create_matrix_test(void) {
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

    