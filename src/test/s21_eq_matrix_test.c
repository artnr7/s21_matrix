#include <check.h>

#include "../include/s21_matrix.h"
#include "../include/s21_utils.h"

START_TEST(eq_1) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_2) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1e-08;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_3) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1e-07;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_4) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.1e-07;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_5) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 2e-07;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_6) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 2.1e-07;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_7) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1e-06;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_8) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.01e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.01e-06;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_9) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.1e-06;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_10) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_11) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000001;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_12) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.0000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.0000001;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_13) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000011;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_14) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.0000002;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.0000002;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_15) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000021;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000021;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_16) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.000001;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_17) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000101;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_18) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.0000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.0000011;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_19) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_20) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1e-08;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_21) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1e-07;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_22) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.1e-07;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_23) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -2e-07;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_24) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -2.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -2.1e-07;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_25) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1e-06;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_26) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.01e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.01e-06;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_27) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.1e-06;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_28) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_29) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000001;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_30) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.0000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000001;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_31) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000011;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_32) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.0000002;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_33) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000021;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000021;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_34) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.000001;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_35) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000101;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_36) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.0000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000011;
      }
    }
    if (1 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_37) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_38) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1e-08;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_39) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1e-07;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_40) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.1e-07;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_41) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 2e-07;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_42) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 2.1e-07;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_43) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1e-06;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_44) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.01e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.01e-06;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_45) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.1e-06;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_46) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_47) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000001;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_48) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.0000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.0000001;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_49) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000011;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_50) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.0000002;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.0000002;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_51) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000021;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000021;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_52) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.000001;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_53) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000101;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_54) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.0000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.0000011;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_55) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_56) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1e-08;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_57) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1e-07;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_58) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.1e-07;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_59) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -2e-07;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_60) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -2.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -2.1e-07;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_61) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1e-06;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_62) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.01e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.01e-06;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_63) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.1e-06;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_64) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_65) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000001;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_66) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.0000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000001;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_67) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000011;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_68) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.0000002;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_69) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000021;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000021;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_70) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.000001;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_71) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000101;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_72) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.0000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000011;
      }
    }
    if (1 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_73) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_74) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1e-08;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_75) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1e-07;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_76) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.1e-07;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_77) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 2e-07;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_78) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 2.1e-07;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_79) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1e-06;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_80) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.01e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.01e-06;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_81) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.1e-06;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_82) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_83) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000001;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_84) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.0000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.0000001;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_85) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000011;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_86) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.0000002;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.0000002;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_87) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000021;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000021;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_88) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.000001;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_89) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000101;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_90) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.0000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.0000011;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_91) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_92) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1e-08;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_93) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1e-07;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_94) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.1e-07;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_95) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -2e-07;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_96) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -2.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -2.1e-07;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_97) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1e-06;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_98) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.01e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.01e-06;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_99) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.1e-06;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_100) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_101) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000001;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_102) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.0000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000001;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_103) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000011;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_104) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.0000002;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_105) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000021;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000021;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_106) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.000001;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_107) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000101;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_108) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.0000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000011;
      }
    }
    if (1 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_109) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_110) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1e-08;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_111) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1e-07;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_112) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.1e-07;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_113) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 2e-07;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_114) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 2.1e-07;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_115) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1e-06;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_116) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.01e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.01e-06;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_117) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.1e-06;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_118) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_119) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000001;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_120) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.0000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.0000001;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_121) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000011;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_122) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.0000002;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.0000002;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_123) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000021;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000021;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_124) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.000001;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_125) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000101;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_126) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.0000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.0000011;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_127) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_128) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1e-08;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_129) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1e-07;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_130) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.1e-07;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_131) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -2e-07;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_132) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -2.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -2.1e-07;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_133) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1e-06;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_134) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.01e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.01e-06;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_135) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.1e-06;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_136) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_137) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000001;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_138) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.0000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000001;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_139) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000011;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_140) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.0000002;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_141) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000021;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000021;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_142) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.000001;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_143) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000101;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_144) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.0000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000011;
      }
    }
    if (1 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_145) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_146) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1e-08;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_147) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1e-07;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_148) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.1e-07;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_149) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 2e-07;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_150) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 2.1e-07;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_151) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1e-06;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_152) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.01e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.01e-06;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_153) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.1e-06;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_154) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_155) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000001;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_156) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.0000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.0000001;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_157) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000011;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_158) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.0000002;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.0000002;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_159) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000021;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000021;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_160) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.000001;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_161) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000101;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_162) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.0000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.0000011;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_163) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_164) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1e-08;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_165) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1e-07;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_166) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.1e-07;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_167) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -2e-07;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_168) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -2.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -2.1e-07;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_169) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1e-06;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_170) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.01e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.01e-06;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_171) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.1e-06;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_172) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_173) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000001;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_174) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.0000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000001;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_175) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000011;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_176) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.0000002;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_177) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000021;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000021;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_178) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.000001;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_179) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000101;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_180) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.0000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000011;
      }
    }
    if (1 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_181) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_182) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1e-08;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_183) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1e-07;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_184) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.1e-07;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_185) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 2e-07;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_186) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 2.1e-07;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_187) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1e-06;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_188) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.01e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.01e-06;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_189) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.1e-06;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_190) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_191) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000001;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_192) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.0000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.0000001;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_193) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000011;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_194) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.0000002;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.0000002;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_195) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000021;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000021;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_196) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.000001;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_197) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000101;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_198) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.0000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.0000011;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_199) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_200) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1e-08;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_201) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1e-07;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_202) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.1e-07;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_203) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -2e-07;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_204) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -2.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -2.1e-07;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_205) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1e-06;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_206) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.01e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.01e-06;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_207) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.1e-06;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_208) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_209) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000001;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_210) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.0000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000001;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_211) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000011;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_212) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.0000002;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_213) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000021;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000021;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_214) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.000001;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_215) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000101;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_216) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.0000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000011;
      }
    }
    if (1 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_217) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_218) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1e-08;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_219) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1e-07;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_220) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.1e-07;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_221) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 2e-07;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_222) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 2.1e-07;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_223) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1e-06;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_224) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.01e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.01e-06;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_225) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.1e-06;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_226) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_227) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000001;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_228) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.0000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.0000001;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_229) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000011;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_230) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.0000002;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.0000002;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_231) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000021;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000021;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_232) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.000001;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_233) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000101;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_234) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.0000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.0000011;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_235) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_236) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1e-08;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_237) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1e-07;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_238) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.1e-07;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_239) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -2e-07;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_240) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -2.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -2.1e-07;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_241) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1e-06;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_242) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.01e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.01e-06;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_243) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.1e-06;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_244) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_245) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000001;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_246) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.0000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000001;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_247) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000011;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_248) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.0000002;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_249) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000021;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000021;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_250) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.000001;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_251) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000101;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_252) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.0000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000011;
      }
    }
    if (1 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_253) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_254) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1e-08;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_255) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1e-07;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_256) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.1e-07;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_257) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 2e-07;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_258) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 2.1e-07;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_259) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1e-06;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_260) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.01e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.01e-06;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_261) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.1e-06;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_262) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_263) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000001;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_264) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.0000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.0000001;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_265) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000011;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_266) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.0000002;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.0000002;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_267) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000021;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000021;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_268) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.000001;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_269) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000101;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_270) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.0000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.0000011;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_271) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_272) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1e-08;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_273) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1e-07;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_274) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.1e-07;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_275) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -2e-07;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_276) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -2.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -2.1e-07;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_277) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1e-06;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_278) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.01e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.01e-06;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_279) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.1e-06;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_280) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_281) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000001;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_282) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.0000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000001;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_283) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000011;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_284) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.0000002;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_285) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000021;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000021;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_286) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.000001;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_287) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000101;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_288) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.0000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000011;
      }
    }
    if (1 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_289) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_290) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1e-08;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_291) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1e-07;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_292) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.1e-07;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_293) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 2e-07;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_294) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 2.1e-07;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_295) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1e-06;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_296) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.01e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.01e-06;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_297) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.1e-06;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_298) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_299) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000001;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_300) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.0000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.0000001;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_301) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000011;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_302) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.0000002;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_303) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000021;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000021;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_304) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.000001;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_305) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000101;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000101;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_306) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.0000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.0000011;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_307) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_308) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1e-08;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_309) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1e-07;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_310) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.1e-07;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_311) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -2e-07;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_312) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -2.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -2.1e-07;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_313) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1e-06;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_314) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.01e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.01e-06;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_315) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.1e-06;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_316) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_317) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000001;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_318) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.0000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000001;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_319) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000011;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_320) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.0000002;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_321) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000021;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000021;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_322) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.000001;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_323) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000101;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_324) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.0000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000011;
      }
    }
    if (4 == 1 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_325) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_326) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1e-08;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_327) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1e-07;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_328) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.1e-07;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_329) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 2e-07;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_330) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 2.1e-07;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_331) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1e-06;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_332) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.01e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.01e-06;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_333) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.1e-06;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_334) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_335) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000001;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_336) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.0000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.0000001;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_337) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000011;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_338) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.0000002;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_339) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000021;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000021;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_340) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.000001;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_341) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000101;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000101;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_342) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.0000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.0000011;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_343) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_344) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1e-08;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_345) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1e-07;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_346) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.1e-07;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_347) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -2e-07;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_348) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -2.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -2.1e-07;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_349) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1e-06;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_350) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.01e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.01e-06;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_351) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.1e-06;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_352) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_353) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000001;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_354) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.0000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000001;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_355) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000011;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_356) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.0000002;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_357) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000021;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000021;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_358) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.000001;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_359) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000101;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_360) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.0000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000011;
      }
    }
    if (4 == 1 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_361) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_362) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1e-08;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_363) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1e-07;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_364) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.1e-07;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_365) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 2e-07;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_366) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 2.1e-07;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_367) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1e-06;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_368) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.01e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.01e-06;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_369) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.1e-06;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_370) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_371) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000001;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_372) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.0000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.0000001;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_373) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000011;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_374) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.0000002;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_375) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000021;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000021;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_376) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.000001;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_377) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000101;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000101;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_378) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.0000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.0000011;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_379) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_380) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1e-08;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_381) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1e-07;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_382) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.1e-07;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_383) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -2e-07;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_384) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -2.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -2.1e-07;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_385) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1e-06;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_386) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.01e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.01e-06;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_387) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.1e-06;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_388) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_389) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000001;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_390) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.0000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000001;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_391) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000011;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_392) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.0000002;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_393) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000021;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000021;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_394) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.000001;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_395) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000101;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_396) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.0000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000011;
      }
    }
    if (4 == 4 && 1 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_397) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_398) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1e-08;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_399) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1e-07;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_400) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.1e-07;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_401) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 2e-07;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_402) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 2.1e-07;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_403) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1e-06;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_404) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.01e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.01e-06;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_405) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.1e-06;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_406) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_407) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000001;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_408) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.0000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.0000001;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_409) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000011;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_410) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.0000002;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_411) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000021;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000021;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_412) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.000001;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_413) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.00000101;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000101;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_414) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1.0000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.0000011;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_415) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_416) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1e-08;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_417) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1e-07;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_418) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.1e-07;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_419) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -2e-07;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_420) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -2.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -2.1e-07;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_421) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1e-06;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_422) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.01e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.01e-06;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_423) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.1e-06;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_424) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_425) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000001;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_426) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.0000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000001;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_427) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000011;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_428) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.0000002;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_429) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000021;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000021;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_430) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.000001;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_431) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.00000101;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_432) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = -1.0000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000011;
      }
    }
    if (4 == 4 && 1 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_433) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_434) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1e-08;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_435) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1e-07;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_436) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.1e-07;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_437) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 2e-07;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_438) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 2.1e-07;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_439) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1e-06;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_440) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.01e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.01e-06;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_441) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.1e-06;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_442) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_443) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000001;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_444) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.0000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.0000001;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_445) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000011;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_446) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.0000002;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_447) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000021;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000021;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_448) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.000001;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_449) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000101;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000101;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_450) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.0000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.0000011;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_451) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_452) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1e-08;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_453) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1e-07;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_454) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.1e-07;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_455) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -2e-07;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_456) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -2.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -2.1e-07;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_457) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1e-06;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_458) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.01e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.01e-06;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_459) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.1e-06;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_460) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_461) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000001;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_462) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.0000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000001;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_463) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000011;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_464) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.0000002;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_465) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000021;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000021;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_466) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.000001;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_467) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000101;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_468) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.0000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000011;
      }
    }
    if (4 == 1 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_469) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_470) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1e-08;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_471) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1e-07;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_472) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.1e-07;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_473) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 2e-07;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_474) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 2.1e-07;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_475) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1e-06;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_476) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.01e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.01e-06;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_477) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.1e-06;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_478) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_479) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000001;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_480) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.0000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.0000001;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_481) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000011;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_482) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.0000002;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_483) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000021;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000021;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_484) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.000001;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_485) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000101;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000101;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_486) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.0000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.0000011;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_487) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_488) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1e-08;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_489) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1e-07;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_490) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.1e-07;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_491) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -2e-07;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_492) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -2.1e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -2.1e-07;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_493) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1e-06;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_494) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.01e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.01e-06;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_495) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.1e-06;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.1e-06;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_496) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_497) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000001;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_498) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.0000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000001;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_499) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000011;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_500) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.0000002;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_501) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000021;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000021;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_502) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.000001;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.000001;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_503) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000101;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_504) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.0000011;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000011;
      }
    }
    if (4 == 1 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_505) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_506) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1e-08;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_507) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1e-07;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_508) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.1e-07;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_509) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 2e-07;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_510) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 2.1e-07;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_511) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1e-06;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_512) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.01e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.01e-06;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_513) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.1e-06;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_514) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_515) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000001;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_516) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.0000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.0000001;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_517) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000011;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_518) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.0000002;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_519) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000021;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000021;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_520) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.000001;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_521) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000101;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.00000101;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_522) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.0000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 1.0000011;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_523) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_524) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1e-08;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_525) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1e-07;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_526) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.1e-07;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_527) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -2e-07;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_528) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -2.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -2.1e-07;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_529) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1e-06;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_530) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.01e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.01e-06;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_531) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.1e-06;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_532) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_533) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000001;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_534) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.0000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000001;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_535) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000011;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_536) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.0000002;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_537) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000021;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000021;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_538) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.000001;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_539) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000101;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_540) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.0000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000011;
      }
    }
    if (4 == 4 && 4 == 1) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_541) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_542) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1e-08;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_543) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1e-07;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_544) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.1e-07;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_545) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 2e-07;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_546) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 2.1e-07;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_547) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1e-06;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_548) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.01e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.01e-06;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_549) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.1e-06;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_550) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_551) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000001;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_552) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.0000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.0000001;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_553) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000011;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_554) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.0000002;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_555) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000021;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000021;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_556) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.000001;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_557) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.00000101;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.00000101;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_558) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1.0000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 1.0000011;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_559) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 0;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = 0;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_560) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1e-08;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_561) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1e-07;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_562) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.1e-07;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_563) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -2e-07;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_564) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -2.1e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -2.1e-07;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_565) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1e-06;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_566) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.01e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.01e-06;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_567) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.1e-06;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.1e-06;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_568) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_569) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000001;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_570) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.0000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000001;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_571) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000011;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_572) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.0000002;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_573) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000021;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000021;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_574) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.000001;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.000001;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_575) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.00000101;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_576) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = -1.0000011;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000011;
      }
    }
    if (4 == 4 && 4 == 4) {
      ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_577) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_578) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_579) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_580) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_581) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_582) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_583) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_584) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_585) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_586) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_587) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_588) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_589) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_590) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_591) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_592) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_593) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_594) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_595) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_596) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_597) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_598) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_599) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_600) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_601) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_602) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_603) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_604) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_605) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_606) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_607) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_608) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_609) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_610) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_611) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_612) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_613) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_614) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_615) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_616) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_617) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_618) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_619) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_620) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_621) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_622) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_623) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_624) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_625) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_626) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_627) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_628) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_629) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_630) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_631) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_632) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_633) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_634) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_635) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_636) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_637) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_638) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_639) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_640) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_641) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_642) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_643) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_644) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_645) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_646) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_647) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_648) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_649) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_650) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_651) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_652) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_653) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_654) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_655) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_656) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_657) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_658) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_659) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_660) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_661) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_662) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_663) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_664) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_665) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_666) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_667) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_668) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_669) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_670) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_671) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_672) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_673) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_674) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_675) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_676) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_677) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_678) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_679) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_680) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_681) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_682) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_683) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_684) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_685) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_686) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_687) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_688) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_689) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_690) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_691) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_692) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_693) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_694) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_695) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_696) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_697) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_698) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_699) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_700) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_701) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_702) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_703) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_704) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_705) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_706) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_707) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_708) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_709) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_710) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_711) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_712) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_713) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_714) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_715) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_716) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_717) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_718) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_719) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_720) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 1 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_721) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_722) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_723) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_724) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_725) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_726) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_727) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_728) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_729) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_730) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_731) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_732) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_733) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_734) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_735) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_736) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_737) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_738) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_739) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_740) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_741) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_742) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_743) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_744) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_745) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_746) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_747) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_748) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_749) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_750) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_751) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_752) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_753) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_754) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_755) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_756) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_757) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_758) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_759) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_760) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_761) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_762) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_763) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_764) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_765) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_766) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_767) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_768) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_769) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_770) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_771) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_772) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_773) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_774) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_775) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_776) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_777) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_778) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_779) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_780) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_781) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_782) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_783) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_784) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_785) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_786) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_787) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_788) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_789) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_790) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_791) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_792) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 1 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_793) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_794) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_795) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_796) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_797) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_798) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_799) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_800) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_801) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_802) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_803) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_804) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_805) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_806) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_807) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_808) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_809) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_810) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_811) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_812) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_813) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_814) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_815) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_816) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_817) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_818) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_819) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_820) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_821) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_822) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_823) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_824) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_825) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_826) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_827) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_828) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 1) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_829) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_830) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_831) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_832) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_833) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_834) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_835) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_836) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_837) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_838) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_839) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_840) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_841) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_842) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_843) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_844) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_845) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_846) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_847) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_848) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_849) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_850) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_851) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_852) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_853) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_854) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_855) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_856) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_857) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_858) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_859) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_860) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_861) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_862) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_863) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_864) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 1e-08;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.00000101;
      }
    }
    if (1 == 4 && 4 == 4) {
      if (1e-08 != -1.00000101) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_865) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_866) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_867) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_868) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_869) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_870) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_871) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_872) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_873) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_874) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_875) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_876) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_877) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_878) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_879) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_880) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_881) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_882) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_883) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_884) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_885) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_886) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_887) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_888) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_889) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_890) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_891) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_892) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_893) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_894) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_895) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_896) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_897) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_898) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_899) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_900) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_901) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_902) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_903) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_904) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_905) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_906) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_907) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_908) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_909) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_910) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_911) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_912) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_913) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_914) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_915) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_916) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_917) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_918) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_919) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_920) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_921) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_922) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_923) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_924) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_925) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_926) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_927) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_928) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_929) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_930) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_931) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_932) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_933) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_934) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_935) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_936) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_937) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_938) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_939) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_940) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_941) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_942) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_943) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_944) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_945) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_946) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_947) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_948) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_949) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_950) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_951) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_952) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_953) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_954) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_955) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_956) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_957) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_958) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_959) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_960) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_961) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_962) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_963) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_964) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_965) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_966) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_967) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_968) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_969) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_970) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_971) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_972) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_973) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_974) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_975) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_976) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_977) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_978) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_979) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_980) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_981) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_982) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_983) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_984) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_985) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_986) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_987) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_988) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_989) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_990) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_991) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_992) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_993) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_994) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_995) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_996) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_997) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_998) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_999) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1000) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1001) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1002) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1003) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1004) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1005) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1006) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1007) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1008) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 1 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1009) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1010) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1011) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1012) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1013) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1014) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1015) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1016) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1017) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1018) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1019) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1020) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1021) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1022) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1023) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1024) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1025) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1026) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1027) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1028) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1029) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1030) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1031) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1032) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1033) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1034) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1035) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1036) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1037) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1038) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1039) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1040) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1041) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1042) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1043) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1044) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1045) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1046) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1047) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1048) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1049) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1050) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1051) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1052) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1053) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1054) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1055) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1056) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1057) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1058) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1059) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1060) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1061) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1062) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1063) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1064) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1065) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1066) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1067) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1068) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1069) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1070) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1071) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1072) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1073) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1074) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1075) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1076) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1077) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1078) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1079) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1080) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 1 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1081) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1082) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1083) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1084) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1085) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1086) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1087) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1088) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1089) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1090) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1091) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1092) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1093) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1094) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1095) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1096) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1097) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1098) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1099) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1100) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1101) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1102) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1103) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1104) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1105) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1106) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1107) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1108) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1109) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1110) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1111) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1112) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1113) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1114) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1115) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1116) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 1; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 1) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1117) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1118) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1119) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1120) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1121) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1122) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1123) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1124) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1125) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1126) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1127) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1128) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1129) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1130) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1131) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1132) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1133) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1134) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1135) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1136) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1137) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1138) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1139) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1140) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1141) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1142) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1143) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1144) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1145) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1146) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1147) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1148) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1149) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1150) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1151) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1152) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {0};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {0};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    s21_create_matrix(rows1, cols1, &mtrx1);
    s21_create_matrix(rows2, cols2, &mtrx2);
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx1.matrix[i][j] = 2e-07;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        mtrx2.matrix[i][j] = -1.0000002;
      }
    }
    if (4 == 4 && 4 == 4) {
      if (2e-07 != -1.0000002) {
        ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
      } else {
        ck_assert_int_eq(1, s21_eq_matrix(&mtrx1, &mtrx2));
      }
    } else {
      ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    }
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1153) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {NULL, rows1, cols1};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {NULL, rows2, cols2};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1154) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {NULL, rows1, cols1};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {NULL, rows2, cols2};
  if (1 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1155) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {NULL, rows1, cols1};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {NULL, rows2, cols2};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1156) {
  int rows1 = 1, cols1 = 1;
  matrix_t mtrx1 = {NULL, rows1, cols1};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {NULL, rows2, cols2};
  if (1 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1157) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {NULL, rows1, cols1};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {NULL, rows2, cols2};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1158) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {NULL, rows1, cols1};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {NULL, rows2, cols2};
  if (1 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1159) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {NULL, rows1, cols1};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {NULL, rows2, cols2};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1160) {
  int rows1 = 1, cols1 = 4;
  matrix_t mtrx1 = {NULL, rows1, cols1};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {NULL, rows2, cols2};
  if (1 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1161) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {NULL, rows1, cols1};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {NULL, rows2, cols2};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 1 >= 1) {
    ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1162) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {NULL, rows1, cols1};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {NULL, rows2, cols2};
  if (4 >= 1 && 1 >= 1 && 1 >= 1 && 4 >= 1) {
    ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1163) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {NULL, rows1, cols1};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {NULL, rows2, cols2};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 1 >= 1) {
    ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1164) {
  int rows1 = 4, cols1 = 1;
  matrix_t mtrx1 = {NULL, rows1, cols1};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {NULL, rows2, cols2};
  if (4 >= 1 && 1 >= 1 && 4 >= 1 && 4 >= 1) {
    ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1165) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {NULL, rows1, cols1};
  int rows2 = 1, cols2 = 1;
  matrix_t mtrx2 = {NULL, rows2, cols2};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 1 >= 1) {
    ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1166) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {NULL, rows1, cols1};
  int rows2 = 1, cols2 = 4;
  matrix_t mtrx2 = {NULL, rows2, cols2};
  if (4 >= 1 && 4 >= 1 && 1 >= 1 && 4 >= 1) {
    ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1167) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {NULL, rows1, cols1};
  int rows2 = 4, cols2 = 1;
  matrix_t mtrx2 = {NULL, rows2, cols2};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 1 >= 1) {
    ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

START_TEST(eq_1168) {
  int rows1 = 4, cols1 = 4;
  matrix_t mtrx1 = {NULL, rows1, cols1};
  int rows2 = 4, cols2 = 4;
  matrix_t mtrx2 = {NULL, rows2, cols2};
  if (4 >= 1 && 4 >= 1 && 4 >= 1 && 4 >= 1) {
    ck_assert_int_eq(0, s21_eq_matrix(&mtrx1, &mtrx2));
    s21_remove_matrix(&mtrx1);
    s21_remove_matrix(&mtrx2);
  }
}
END_TEST

Suite *s21_eq_matrix_test(void) {
  Suite *s;
  TCase *tc_create;
  s = suite_create("s21_eq_matrix_test_suite\n");
  tc_create = tcase_create("s21_eq_matrix_test_case\n");
  tcase_add_test(tc_create, eq_1);
  tcase_add_test(tc_create, eq_2);
  tcase_add_test(tc_create, eq_3);
  tcase_add_test(tc_create, eq_4);
  tcase_add_test(tc_create, eq_5);
  tcase_add_test(tc_create, eq_6);
  tcase_add_test(tc_create, eq_7);
  tcase_add_test(tc_create, eq_8);
  tcase_add_test(tc_create, eq_9);
  tcase_add_test(tc_create, eq_10);
  tcase_add_test(tc_create, eq_11);
  tcase_add_test(tc_create, eq_12);
  tcase_add_test(tc_create, eq_13);
  tcase_add_test(tc_create, eq_14);
  tcase_add_test(tc_create, eq_15);
  tcase_add_test(tc_create, eq_16);
  tcase_add_test(tc_create, eq_17);
  tcase_add_test(tc_create, eq_18);
  tcase_add_test(tc_create, eq_19);
  tcase_add_test(tc_create, eq_20);
  tcase_add_test(tc_create, eq_21);
  tcase_add_test(tc_create, eq_22);
  tcase_add_test(tc_create, eq_23);
  tcase_add_test(tc_create, eq_24);
  tcase_add_test(tc_create, eq_25);
  tcase_add_test(tc_create, eq_26);
  tcase_add_test(tc_create, eq_27);
  tcase_add_test(tc_create, eq_28);
  tcase_add_test(tc_create, eq_29);
  tcase_add_test(tc_create, eq_30);
  tcase_add_test(tc_create, eq_31);
  tcase_add_test(tc_create, eq_32);
  tcase_add_test(tc_create, eq_33);
  tcase_add_test(tc_create, eq_34);
  tcase_add_test(tc_create, eq_35);
  tcase_add_test(tc_create, eq_36);
  tcase_add_test(tc_create, eq_37);
  tcase_add_test(tc_create, eq_38);
  tcase_add_test(tc_create, eq_39);
  tcase_add_test(tc_create, eq_40);
  tcase_add_test(tc_create, eq_41);
  tcase_add_test(tc_create, eq_42);
  tcase_add_test(tc_create, eq_43);
  tcase_add_test(tc_create, eq_44);
  tcase_add_test(tc_create, eq_45);
  tcase_add_test(tc_create, eq_46);
  tcase_add_test(tc_create, eq_47);
  tcase_add_test(tc_create, eq_48);
  tcase_add_test(tc_create, eq_49);
  tcase_add_test(tc_create, eq_50);
  tcase_add_test(tc_create, eq_51);
  tcase_add_test(tc_create, eq_52);
  tcase_add_test(tc_create, eq_53);
  tcase_add_test(tc_create, eq_54);
  tcase_add_test(tc_create, eq_55);
  tcase_add_test(tc_create, eq_56);
  tcase_add_test(tc_create, eq_57);
  tcase_add_test(tc_create, eq_58);
  tcase_add_test(tc_create, eq_59);
  tcase_add_test(tc_create, eq_60);
  tcase_add_test(tc_create, eq_61);
  tcase_add_test(tc_create, eq_62);
  tcase_add_test(tc_create, eq_63);
  tcase_add_test(tc_create, eq_64);
  tcase_add_test(tc_create, eq_65);
  tcase_add_test(tc_create, eq_66);
  tcase_add_test(tc_create, eq_67);
  tcase_add_test(tc_create, eq_68);
  tcase_add_test(tc_create, eq_69);
  tcase_add_test(tc_create, eq_70);
  tcase_add_test(tc_create, eq_71);
  tcase_add_test(tc_create, eq_72);
  tcase_add_test(tc_create, eq_73);
  tcase_add_test(tc_create, eq_74);
  tcase_add_test(tc_create, eq_75);
  tcase_add_test(tc_create, eq_76);
  tcase_add_test(tc_create, eq_77);
  tcase_add_test(tc_create, eq_78);
  tcase_add_test(tc_create, eq_79);
  tcase_add_test(tc_create, eq_80);
  tcase_add_test(tc_create, eq_81);
  tcase_add_test(tc_create, eq_82);
  tcase_add_test(tc_create, eq_83);
  tcase_add_test(tc_create, eq_84);
  tcase_add_test(tc_create, eq_85);
  tcase_add_test(tc_create, eq_86);
  tcase_add_test(tc_create, eq_87);
  tcase_add_test(tc_create, eq_88);
  tcase_add_test(tc_create, eq_89);
  tcase_add_test(tc_create, eq_90);
  tcase_add_test(tc_create, eq_91);
  tcase_add_test(tc_create, eq_92);
  tcase_add_test(tc_create, eq_93);
  tcase_add_test(tc_create, eq_94);
  tcase_add_test(tc_create, eq_95);
  tcase_add_test(tc_create, eq_96);
  tcase_add_test(tc_create, eq_97);
  tcase_add_test(tc_create, eq_98);
  tcase_add_test(tc_create, eq_99);
  tcase_add_test(tc_create, eq_100);
  tcase_add_test(tc_create, eq_101);
  tcase_add_test(tc_create, eq_102);
  tcase_add_test(tc_create, eq_103);
  tcase_add_test(tc_create, eq_104);
  tcase_add_test(tc_create, eq_105);
  tcase_add_test(tc_create, eq_106);
  tcase_add_test(tc_create, eq_107);
  tcase_add_test(tc_create, eq_108);
  tcase_add_test(tc_create, eq_109);
  tcase_add_test(tc_create, eq_110);
  tcase_add_test(tc_create, eq_111);
  tcase_add_test(tc_create, eq_112);
  tcase_add_test(tc_create, eq_113);
  tcase_add_test(tc_create, eq_114);
  tcase_add_test(tc_create, eq_115);
  tcase_add_test(tc_create, eq_116);
  tcase_add_test(tc_create, eq_117);
  tcase_add_test(tc_create, eq_118);
  tcase_add_test(tc_create, eq_119);
  tcase_add_test(tc_create, eq_120);
  tcase_add_test(tc_create, eq_121);
  tcase_add_test(tc_create, eq_122);
  tcase_add_test(tc_create, eq_123);
  tcase_add_test(tc_create, eq_124);
  tcase_add_test(tc_create, eq_125);
  tcase_add_test(tc_create, eq_126);
  tcase_add_test(tc_create, eq_127);
  tcase_add_test(tc_create, eq_128);
  tcase_add_test(tc_create, eq_129);
  tcase_add_test(tc_create, eq_130);
  tcase_add_test(tc_create, eq_131);
  tcase_add_test(tc_create, eq_132);
  tcase_add_test(tc_create, eq_133);
  tcase_add_test(tc_create, eq_134);
  tcase_add_test(tc_create, eq_135);
  tcase_add_test(tc_create, eq_136);
  tcase_add_test(tc_create, eq_137);
  tcase_add_test(tc_create, eq_138);
  tcase_add_test(tc_create, eq_139);
  tcase_add_test(tc_create, eq_140);
  tcase_add_test(tc_create, eq_141);
  tcase_add_test(tc_create, eq_142);
  tcase_add_test(tc_create, eq_143);
  tcase_add_test(tc_create, eq_144);
  tcase_add_test(tc_create, eq_145);
  tcase_add_test(tc_create, eq_146);
  tcase_add_test(tc_create, eq_147);
  tcase_add_test(tc_create, eq_148);
  tcase_add_test(tc_create, eq_149);
  tcase_add_test(tc_create, eq_150);
  tcase_add_test(tc_create, eq_151);
  tcase_add_test(tc_create, eq_152);
  tcase_add_test(tc_create, eq_153);
  tcase_add_test(tc_create, eq_154);
  tcase_add_test(tc_create, eq_155);
  tcase_add_test(tc_create, eq_156);
  tcase_add_test(tc_create, eq_157);
  tcase_add_test(tc_create, eq_158);
  tcase_add_test(tc_create, eq_159);
  tcase_add_test(tc_create, eq_160);
  tcase_add_test(tc_create, eq_161);
  tcase_add_test(tc_create, eq_162);
  tcase_add_test(tc_create, eq_163);
  tcase_add_test(tc_create, eq_164);
  tcase_add_test(tc_create, eq_165);
  tcase_add_test(tc_create, eq_166);
  tcase_add_test(tc_create, eq_167);
  tcase_add_test(tc_create, eq_168);
  tcase_add_test(tc_create, eq_169);
  tcase_add_test(tc_create, eq_170);
  tcase_add_test(tc_create, eq_171);
  tcase_add_test(tc_create, eq_172);
  tcase_add_test(tc_create, eq_173);
  tcase_add_test(tc_create, eq_174);
  tcase_add_test(tc_create, eq_175);
  tcase_add_test(tc_create, eq_176);
  tcase_add_test(tc_create, eq_177);
  tcase_add_test(tc_create, eq_178);
  tcase_add_test(tc_create, eq_179);
  tcase_add_test(tc_create, eq_180);
  tcase_add_test(tc_create, eq_181);
  tcase_add_test(tc_create, eq_182);
  tcase_add_test(tc_create, eq_183);
  tcase_add_test(tc_create, eq_184);
  tcase_add_test(tc_create, eq_185);
  tcase_add_test(tc_create, eq_186);
  tcase_add_test(tc_create, eq_187);
  tcase_add_test(tc_create, eq_188);
  tcase_add_test(tc_create, eq_189);
  tcase_add_test(tc_create, eq_190);
  tcase_add_test(tc_create, eq_191);
  tcase_add_test(tc_create, eq_192);
  tcase_add_test(tc_create, eq_193);
  tcase_add_test(tc_create, eq_194);
  tcase_add_test(tc_create, eq_195);
  tcase_add_test(tc_create, eq_196);
  tcase_add_test(tc_create, eq_197);
  tcase_add_test(tc_create, eq_198);
  tcase_add_test(tc_create, eq_199);
  tcase_add_test(tc_create, eq_200);
  tcase_add_test(tc_create, eq_201);
  tcase_add_test(tc_create, eq_202);
  tcase_add_test(tc_create, eq_203);
  tcase_add_test(tc_create, eq_204);
  tcase_add_test(tc_create, eq_205);
  tcase_add_test(tc_create, eq_206);
  tcase_add_test(tc_create, eq_207);
  tcase_add_test(tc_create, eq_208);
  tcase_add_test(tc_create, eq_209);
  tcase_add_test(tc_create, eq_210);
  tcase_add_test(tc_create, eq_211);
  tcase_add_test(tc_create, eq_212);
  tcase_add_test(tc_create, eq_213);
  tcase_add_test(tc_create, eq_214);
  tcase_add_test(tc_create, eq_215);
  tcase_add_test(tc_create, eq_216);
  tcase_add_test(tc_create, eq_217);
  tcase_add_test(tc_create, eq_218);
  tcase_add_test(tc_create, eq_219);
  tcase_add_test(tc_create, eq_220);
  tcase_add_test(tc_create, eq_221);
  tcase_add_test(tc_create, eq_222);
  tcase_add_test(tc_create, eq_223);
  tcase_add_test(tc_create, eq_224);
  tcase_add_test(tc_create, eq_225);
  tcase_add_test(tc_create, eq_226);
  tcase_add_test(tc_create, eq_227);
  tcase_add_test(tc_create, eq_228);
  tcase_add_test(tc_create, eq_229);
  tcase_add_test(tc_create, eq_230);
  tcase_add_test(tc_create, eq_231);
  tcase_add_test(tc_create, eq_232);
  tcase_add_test(tc_create, eq_233);
  tcase_add_test(tc_create, eq_234);
  tcase_add_test(tc_create, eq_235);
  tcase_add_test(tc_create, eq_236);
  tcase_add_test(tc_create, eq_237);
  tcase_add_test(tc_create, eq_238);
  tcase_add_test(tc_create, eq_239);
  tcase_add_test(tc_create, eq_240);
  tcase_add_test(tc_create, eq_241);
  tcase_add_test(tc_create, eq_242);
  tcase_add_test(tc_create, eq_243);
  tcase_add_test(tc_create, eq_244);
  tcase_add_test(tc_create, eq_245);
  tcase_add_test(tc_create, eq_246);
  tcase_add_test(tc_create, eq_247);
  tcase_add_test(tc_create, eq_248);
  tcase_add_test(tc_create, eq_249);
  tcase_add_test(tc_create, eq_250);
  tcase_add_test(tc_create, eq_251);
  tcase_add_test(tc_create, eq_252);
  tcase_add_test(tc_create, eq_253);
  tcase_add_test(tc_create, eq_254);
  tcase_add_test(tc_create, eq_255);
  tcase_add_test(tc_create, eq_256);
  tcase_add_test(tc_create, eq_257);
  tcase_add_test(tc_create, eq_258);
  tcase_add_test(tc_create, eq_259);
  tcase_add_test(tc_create, eq_260);
  tcase_add_test(tc_create, eq_261);
  tcase_add_test(tc_create, eq_262);
  tcase_add_test(tc_create, eq_263);
  tcase_add_test(tc_create, eq_264);
  tcase_add_test(tc_create, eq_265);
  tcase_add_test(tc_create, eq_266);
  tcase_add_test(tc_create, eq_267);
  tcase_add_test(tc_create, eq_268);
  tcase_add_test(tc_create, eq_269);
  tcase_add_test(tc_create, eq_270);
  tcase_add_test(tc_create, eq_271);
  tcase_add_test(tc_create, eq_272);
  tcase_add_test(tc_create, eq_273);
  tcase_add_test(tc_create, eq_274);
  tcase_add_test(tc_create, eq_275);
  tcase_add_test(tc_create, eq_276);
  tcase_add_test(tc_create, eq_277);
  tcase_add_test(tc_create, eq_278);
  tcase_add_test(tc_create, eq_279);
  tcase_add_test(tc_create, eq_280);
  tcase_add_test(tc_create, eq_281);
  tcase_add_test(tc_create, eq_282);
  tcase_add_test(tc_create, eq_283);
  tcase_add_test(tc_create, eq_284);
  tcase_add_test(tc_create, eq_285);
  tcase_add_test(tc_create, eq_286);
  tcase_add_test(tc_create, eq_287);
  tcase_add_test(tc_create, eq_288);
  tcase_add_test(tc_create, eq_289);
  tcase_add_test(tc_create, eq_290);
  tcase_add_test(tc_create, eq_291);
  tcase_add_test(tc_create, eq_292);
  tcase_add_test(tc_create, eq_293);
  tcase_add_test(tc_create, eq_294);
  tcase_add_test(tc_create, eq_295);
  tcase_add_test(tc_create, eq_296);
  tcase_add_test(tc_create, eq_297);
  tcase_add_test(tc_create, eq_298);
  tcase_add_test(tc_create, eq_299);
  tcase_add_test(tc_create, eq_300);
  tcase_add_test(tc_create, eq_301);
  tcase_add_test(tc_create, eq_302);
  tcase_add_test(tc_create, eq_303);
  tcase_add_test(tc_create, eq_304);
  tcase_add_test(tc_create, eq_305);
  tcase_add_test(tc_create, eq_306);
  tcase_add_test(tc_create, eq_307);
  tcase_add_test(tc_create, eq_308);
  tcase_add_test(tc_create, eq_309);
  tcase_add_test(tc_create, eq_310);
  tcase_add_test(tc_create, eq_311);
  tcase_add_test(tc_create, eq_312);
  tcase_add_test(tc_create, eq_313);
  tcase_add_test(tc_create, eq_314);
  tcase_add_test(tc_create, eq_315);
  tcase_add_test(tc_create, eq_316);
  tcase_add_test(tc_create, eq_317);
  tcase_add_test(tc_create, eq_318);
  tcase_add_test(tc_create, eq_319);
  tcase_add_test(tc_create, eq_320);
  tcase_add_test(tc_create, eq_321);
  tcase_add_test(tc_create, eq_322);
  tcase_add_test(tc_create, eq_323);
  tcase_add_test(tc_create, eq_324);
  tcase_add_test(tc_create, eq_325);
  tcase_add_test(tc_create, eq_326);
  tcase_add_test(tc_create, eq_327);
  tcase_add_test(tc_create, eq_328);
  tcase_add_test(tc_create, eq_329);
  tcase_add_test(tc_create, eq_330);
  tcase_add_test(tc_create, eq_331);
  tcase_add_test(tc_create, eq_332);
  tcase_add_test(tc_create, eq_333);
  tcase_add_test(tc_create, eq_334);
  tcase_add_test(tc_create, eq_335);
  tcase_add_test(tc_create, eq_336);
  tcase_add_test(tc_create, eq_337);
  tcase_add_test(tc_create, eq_338);
  tcase_add_test(tc_create, eq_339);
  tcase_add_test(tc_create, eq_340);
  tcase_add_test(tc_create, eq_341);
  tcase_add_test(tc_create, eq_342);
  tcase_add_test(tc_create, eq_343);
  tcase_add_test(tc_create, eq_344);
  tcase_add_test(tc_create, eq_345);
  tcase_add_test(tc_create, eq_346);
  tcase_add_test(tc_create, eq_347);
  tcase_add_test(tc_create, eq_348);
  tcase_add_test(tc_create, eq_349);
  tcase_add_test(tc_create, eq_350);
  tcase_add_test(tc_create, eq_351);
  tcase_add_test(tc_create, eq_352);
  tcase_add_test(tc_create, eq_353);
  tcase_add_test(tc_create, eq_354);
  tcase_add_test(tc_create, eq_355);
  tcase_add_test(tc_create, eq_356);
  tcase_add_test(tc_create, eq_357);
  tcase_add_test(tc_create, eq_358);
  tcase_add_test(tc_create, eq_359);
  tcase_add_test(tc_create, eq_360);
  tcase_add_test(tc_create, eq_361);
  tcase_add_test(tc_create, eq_362);
  tcase_add_test(tc_create, eq_363);
  tcase_add_test(tc_create, eq_364);
  tcase_add_test(tc_create, eq_365);
  tcase_add_test(tc_create, eq_366);
  tcase_add_test(tc_create, eq_367);
  tcase_add_test(tc_create, eq_368);
  tcase_add_test(tc_create, eq_369);
  tcase_add_test(tc_create, eq_370);
  tcase_add_test(tc_create, eq_371);
  tcase_add_test(tc_create, eq_372);
  tcase_add_test(tc_create, eq_373);
  tcase_add_test(tc_create, eq_374);
  tcase_add_test(tc_create, eq_375);
  tcase_add_test(tc_create, eq_376);
  tcase_add_test(tc_create, eq_377);
  tcase_add_test(tc_create, eq_378);
  tcase_add_test(tc_create, eq_379);
  tcase_add_test(tc_create, eq_380);
  tcase_add_test(tc_create, eq_381);
  tcase_add_test(tc_create, eq_382);
  tcase_add_test(tc_create, eq_383);
  tcase_add_test(tc_create, eq_384);
  tcase_add_test(tc_create, eq_385);
  tcase_add_test(tc_create, eq_386);
  tcase_add_test(tc_create, eq_387);
  tcase_add_test(tc_create, eq_388);
  tcase_add_test(tc_create, eq_389);
  tcase_add_test(tc_create, eq_390);
  tcase_add_test(tc_create, eq_391);
  tcase_add_test(tc_create, eq_392);
  tcase_add_test(tc_create, eq_393);
  tcase_add_test(tc_create, eq_394);
  tcase_add_test(tc_create, eq_395);
  tcase_add_test(tc_create, eq_396);
  tcase_add_test(tc_create, eq_397);
  tcase_add_test(tc_create, eq_398);
  tcase_add_test(tc_create, eq_399);
  tcase_add_test(tc_create, eq_400);
  tcase_add_test(tc_create, eq_401);
  tcase_add_test(tc_create, eq_402);
  tcase_add_test(tc_create, eq_403);
  tcase_add_test(tc_create, eq_404);
  tcase_add_test(tc_create, eq_405);
  tcase_add_test(tc_create, eq_406);
  tcase_add_test(tc_create, eq_407);
  tcase_add_test(tc_create, eq_408);
  tcase_add_test(tc_create, eq_409);
  tcase_add_test(tc_create, eq_410);
  tcase_add_test(tc_create, eq_411);
  tcase_add_test(tc_create, eq_412);
  tcase_add_test(tc_create, eq_413);
  tcase_add_test(tc_create, eq_414);
  tcase_add_test(tc_create, eq_415);
  tcase_add_test(tc_create, eq_416);
  tcase_add_test(tc_create, eq_417);
  tcase_add_test(tc_create, eq_418);
  tcase_add_test(tc_create, eq_419);
  tcase_add_test(tc_create, eq_420);
  tcase_add_test(tc_create, eq_421);
  tcase_add_test(tc_create, eq_422);
  tcase_add_test(tc_create, eq_423);
  tcase_add_test(tc_create, eq_424);
  tcase_add_test(tc_create, eq_425);
  tcase_add_test(tc_create, eq_426);
  tcase_add_test(tc_create, eq_427);
  tcase_add_test(tc_create, eq_428);
  tcase_add_test(tc_create, eq_429);
  tcase_add_test(tc_create, eq_430);
  tcase_add_test(tc_create, eq_431);
  tcase_add_test(tc_create, eq_432);
  tcase_add_test(tc_create, eq_433);
  tcase_add_test(tc_create, eq_434);
  tcase_add_test(tc_create, eq_435);
  tcase_add_test(tc_create, eq_436);
  tcase_add_test(tc_create, eq_437);
  tcase_add_test(tc_create, eq_438);
  tcase_add_test(tc_create, eq_439);
  tcase_add_test(tc_create, eq_440);
  tcase_add_test(tc_create, eq_441);
  tcase_add_test(tc_create, eq_442);
  tcase_add_test(tc_create, eq_443);
  tcase_add_test(tc_create, eq_444);
  tcase_add_test(tc_create, eq_445);
  tcase_add_test(tc_create, eq_446);
  tcase_add_test(tc_create, eq_447);
  tcase_add_test(tc_create, eq_448);
  tcase_add_test(tc_create, eq_449);
  tcase_add_test(tc_create, eq_450);
  tcase_add_test(tc_create, eq_451);
  tcase_add_test(tc_create, eq_452);
  tcase_add_test(tc_create, eq_453);
  tcase_add_test(tc_create, eq_454);
  tcase_add_test(tc_create, eq_455);
  tcase_add_test(tc_create, eq_456);
  tcase_add_test(tc_create, eq_457);
  tcase_add_test(tc_create, eq_458);
  tcase_add_test(tc_create, eq_459);
  tcase_add_test(tc_create, eq_460);
  tcase_add_test(tc_create, eq_461);
  tcase_add_test(tc_create, eq_462);
  tcase_add_test(tc_create, eq_463);
  tcase_add_test(tc_create, eq_464);
  tcase_add_test(tc_create, eq_465);
  tcase_add_test(tc_create, eq_466);
  tcase_add_test(tc_create, eq_467);
  tcase_add_test(tc_create, eq_468);
  tcase_add_test(tc_create, eq_469);
  tcase_add_test(tc_create, eq_470);
  tcase_add_test(tc_create, eq_471);
  tcase_add_test(tc_create, eq_472);
  tcase_add_test(tc_create, eq_473);
  tcase_add_test(tc_create, eq_474);
  tcase_add_test(tc_create, eq_475);
  tcase_add_test(tc_create, eq_476);
  tcase_add_test(tc_create, eq_477);
  tcase_add_test(tc_create, eq_478);
  tcase_add_test(tc_create, eq_479);
  tcase_add_test(tc_create, eq_480);
  tcase_add_test(tc_create, eq_481);
  tcase_add_test(tc_create, eq_482);
  tcase_add_test(tc_create, eq_483);
  tcase_add_test(tc_create, eq_484);
  tcase_add_test(tc_create, eq_485);
  tcase_add_test(tc_create, eq_486);
  tcase_add_test(tc_create, eq_487);
  tcase_add_test(tc_create, eq_488);
  tcase_add_test(tc_create, eq_489);
  tcase_add_test(tc_create, eq_490);
  tcase_add_test(tc_create, eq_491);
  tcase_add_test(tc_create, eq_492);
  tcase_add_test(tc_create, eq_493);
  tcase_add_test(tc_create, eq_494);
  tcase_add_test(tc_create, eq_495);
  tcase_add_test(tc_create, eq_496);
  tcase_add_test(tc_create, eq_497);
  tcase_add_test(tc_create, eq_498);
  tcase_add_test(tc_create, eq_499);
  tcase_add_test(tc_create, eq_500);
  tcase_add_test(tc_create, eq_501);
  tcase_add_test(tc_create, eq_502);
  tcase_add_test(tc_create, eq_503);
  tcase_add_test(tc_create, eq_504);
  tcase_add_test(tc_create, eq_505);
  tcase_add_test(tc_create, eq_506);
  tcase_add_test(tc_create, eq_507);
  tcase_add_test(tc_create, eq_508);
  tcase_add_test(tc_create, eq_509);
  tcase_add_test(tc_create, eq_510);
  tcase_add_test(tc_create, eq_511);
  tcase_add_test(tc_create, eq_512);
  tcase_add_test(tc_create, eq_513);
  tcase_add_test(tc_create, eq_514);
  tcase_add_test(tc_create, eq_515);
  tcase_add_test(tc_create, eq_516);
  tcase_add_test(tc_create, eq_517);
  tcase_add_test(tc_create, eq_518);
  tcase_add_test(tc_create, eq_519);
  tcase_add_test(tc_create, eq_520);
  tcase_add_test(tc_create, eq_521);
  tcase_add_test(tc_create, eq_522);
  tcase_add_test(tc_create, eq_523);
  tcase_add_test(tc_create, eq_524);
  tcase_add_test(tc_create, eq_525);
  tcase_add_test(tc_create, eq_526);
  tcase_add_test(tc_create, eq_527);
  tcase_add_test(tc_create, eq_528);
  tcase_add_test(tc_create, eq_529);
  tcase_add_test(tc_create, eq_530);
  tcase_add_test(tc_create, eq_531);
  tcase_add_test(tc_create, eq_532);
  tcase_add_test(tc_create, eq_533);
  tcase_add_test(tc_create, eq_534);
  tcase_add_test(tc_create, eq_535);
  tcase_add_test(tc_create, eq_536);
  tcase_add_test(tc_create, eq_537);
  tcase_add_test(tc_create, eq_538);
  tcase_add_test(tc_create, eq_539);
  tcase_add_test(tc_create, eq_540);
  tcase_add_test(tc_create, eq_541);
  tcase_add_test(tc_create, eq_542);
  tcase_add_test(tc_create, eq_543);
  tcase_add_test(tc_create, eq_544);
  tcase_add_test(tc_create, eq_545);
  tcase_add_test(tc_create, eq_546);
  tcase_add_test(tc_create, eq_547);
  tcase_add_test(tc_create, eq_548);
  tcase_add_test(tc_create, eq_549);
  tcase_add_test(tc_create, eq_550);
  tcase_add_test(tc_create, eq_551);
  tcase_add_test(tc_create, eq_552);
  tcase_add_test(tc_create, eq_553);
  tcase_add_test(tc_create, eq_554);
  tcase_add_test(tc_create, eq_555);
  tcase_add_test(tc_create, eq_556);
  tcase_add_test(tc_create, eq_557);
  tcase_add_test(tc_create, eq_558);
  tcase_add_test(tc_create, eq_559);
  tcase_add_test(tc_create, eq_560);
  tcase_add_test(tc_create, eq_561);
  tcase_add_test(tc_create, eq_562);
  tcase_add_test(tc_create, eq_563);
  tcase_add_test(tc_create, eq_564);
  tcase_add_test(tc_create, eq_565);
  tcase_add_test(tc_create, eq_566);
  tcase_add_test(tc_create, eq_567);
  tcase_add_test(tc_create, eq_568);
  tcase_add_test(tc_create, eq_569);
  tcase_add_test(tc_create, eq_570);
  tcase_add_test(tc_create, eq_571);
  tcase_add_test(tc_create, eq_572);
  tcase_add_test(tc_create, eq_573);
  tcase_add_test(tc_create, eq_574);
  tcase_add_test(tc_create, eq_575);
  tcase_add_test(tc_create, eq_576);
  tcase_add_test(tc_create, eq_577);
  tcase_add_test(tc_create, eq_578);
  tcase_add_test(tc_create, eq_579);
  tcase_add_test(tc_create, eq_580);
  tcase_add_test(tc_create, eq_581);
  tcase_add_test(tc_create, eq_582);
  tcase_add_test(tc_create, eq_583);
  tcase_add_test(tc_create, eq_584);
  tcase_add_test(tc_create, eq_585);
  tcase_add_test(tc_create, eq_586);
  tcase_add_test(tc_create, eq_587);
  tcase_add_test(tc_create, eq_588);
  tcase_add_test(tc_create, eq_589);
  tcase_add_test(tc_create, eq_590);
  tcase_add_test(tc_create, eq_591);
  tcase_add_test(tc_create, eq_592);
  tcase_add_test(tc_create, eq_593);
  tcase_add_test(tc_create, eq_594);
  tcase_add_test(tc_create, eq_595);
  tcase_add_test(tc_create, eq_596);
  tcase_add_test(tc_create, eq_597);
  tcase_add_test(tc_create, eq_598);
  tcase_add_test(tc_create, eq_599);
  tcase_add_test(tc_create, eq_600);
  tcase_add_test(tc_create, eq_601);
  tcase_add_test(tc_create, eq_602);
  tcase_add_test(tc_create, eq_603);
  tcase_add_test(tc_create, eq_604);
  tcase_add_test(tc_create, eq_605);
  tcase_add_test(tc_create, eq_606);
  tcase_add_test(tc_create, eq_607);
  tcase_add_test(tc_create, eq_608);
  tcase_add_test(tc_create, eq_609);
  tcase_add_test(tc_create, eq_610);
  tcase_add_test(tc_create, eq_611);
  tcase_add_test(tc_create, eq_612);
  tcase_add_test(tc_create, eq_613);
  tcase_add_test(tc_create, eq_614);
  tcase_add_test(tc_create, eq_615);
  tcase_add_test(tc_create, eq_616);
  tcase_add_test(tc_create, eq_617);
  tcase_add_test(tc_create, eq_618);
  tcase_add_test(tc_create, eq_619);
  tcase_add_test(tc_create, eq_620);
  tcase_add_test(tc_create, eq_621);
  tcase_add_test(tc_create, eq_622);
  tcase_add_test(tc_create, eq_623);
  tcase_add_test(tc_create, eq_624);
  tcase_add_test(tc_create, eq_625);
  tcase_add_test(tc_create, eq_626);
  tcase_add_test(tc_create, eq_627);
  tcase_add_test(tc_create, eq_628);
  tcase_add_test(tc_create, eq_629);
  tcase_add_test(tc_create, eq_630);
  tcase_add_test(tc_create, eq_631);
  tcase_add_test(tc_create, eq_632);
  tcase_add_test(tc_create, eq_633);
  tcase_add_test(tc_create, eq_634);
  tcase_add_test(tc_create, eq_635);
  tcase_add_test(tc_create, eq_636);
  tcase_add_test(tc_create, eq_637);
  tcase_add_test(tc_create, eq_638);
  tcase_add_test(tc_create, eq_639);
  tcase_add_test(tc_create, eq_640);
  tcase_add_test(tc_create, eq_641);
  tcase_add_test(tc_create, eq_642);
  tcase_add_test(tc_create, eq_643);
  tcase_add_test(tc_create, eq_644);
  tcase_add_test(tc_create, eq_645);
  tcase_add_test(tc_create, eq_646);
  tcase_add_test(tc_create, eq_647);
  tcase_add_test(tc_create, eq_648);
  tcase_add_test(tc_create, eq_649);
  tcase_add_test(tc_create, eq_650);
  tcase_add_test(tc_create, eq_651);
  tcase_add_test(tc_create, eq_652);
  tcase_add_test(tc_create, eq_653);
  tcase_add_test(tc_create, eq_654);
  tcase_add_test(tc_create, eq_655);
  tcase_add_test(tc_create, eq_656);
  tcase_add_test(tc_create, eq_657);
  tcase_add_test(tc_create, eq_658);
  tcase_add_test(tc_create, eq_659);
  tcase_add_test(tc_create, eq_660);
  tcase_add_test(tc_create, eq_661);
  tcase_add_test(tc_create, eq_662);
  tcase_add_test(tc_create, eq_663);
  tcase_add_test(tc_create, eq_664);
  tcase_add_test(tc_create, eq_665);
  tcase_add_test(tc_create, eq_666);
  tcase_add_test(tc_create, eq_667);
  tcase_add_test(tc_create, eq_668);
  tcase_add_test(tc_create, eq_669);
  tcase_add_test(tc_create, eq_670);
  tcase_add_test(tc_create, eq_671);
  tcase_add_test(tc_create, eq_672);
  tcase_add_test(tc_create, eq_673);
  tcase_add_test(tc_create, eq_674);
  tcase_add_test(tc_create, eq_675);
  tcase_add_test(tc_create, eq_676);
  tcase_add_test(tc_create, eq_677);
  tcase_add_test(tc_create, eq_678);
  tcase_add_test(tc_create, eq_679);
  tcase_add_test(tc_create, eq_680);
  tcase_add_test(tc_create, eq_681);
  tcase_add_test(tc_create, eq_682);
  tcase_add_test(tc_create, eq_683);
  tcase_add_test(tc_create, eq_684);
  tcase_add_test(tc_create, eq_685);
  tcase_add_test(tc_create, eq_686);
  tcase_add_test(tc_create, eq_687);
  tcase_add_test(tc_create, eq_688);
  tcase_add_test(tc_create, eq_689);
  tcase_add_test(tc_create, eq_690);
  tcase_add_test(tc_create, eq_691);
  tcase_add_test(tc_create, eq_692);
  tcase_add_test(tc_create, eq_693);
  tcase_add_test(tc_create, eq_694);
  tcase_add_test(tc_create, eq_695);
  tcase_add_test(tc_create, eq_696);
  tcase_add_test(tc_create, eq_697);
  tcase_add_test(tc_create, eq_698);
  tcase_add_test(tc_create, eq_699);
  tcase_add_test(tc_create, eq_700);
  tcase_add_test(tc_create, eq_701);
  tcase_add_test(tc_create, eq_702);
  tcase_add_test(tc_create, eq_703);
  tcase_add_test(tc_create, eq_704);
  tcase_add_test(tc_create, eq_705);
  tcase_add_test(tc_create, eq_706);
  tcase_add_test(tc_create, eq_707);
  tcase_add_test(tc_create, eq_708);
  tcase_add_test(tc_create, eq_709);
  tcase_add_test(tc_create, eq_710);
  tcase_add_test(tc_create, eq_711);
  tcase_add_test(tc_create, eq_712);
  tcase_add_test(tc_create, eq_713);
  tcase_add_test(tc_create, eq_714);
  tcase_add_test(tc_create, eq_715);
  tcase_add_test(tc_create, eq_716);
  tcase_add_test(tc_create, eq_717);
  tcase_add_test(tc_create, eq_718);
  tcase_add_test(tc_create, eq_719);
  tcase_add_test(tc_create, eq_720);
  tcase_add_test(tc_create, eq_721);
  tcase_add_test(tc_create, eq_722);
  tcase_add_test(tc_create, eq_723);
  tcase_add_test(tc_create, eq_724);
  tcase_add_test(tc_create, eq_725);
  tcase_add_test(tc_create, eq_726);
  tcase_add_test(tc_create, eq_727);
  tcase_add_test(tc_create, eq_728);
  tcase_add_test(tc_create, eq_729);
  tcase_add_test(tc_create, eq_730);
  tcase_add_test(tc_create, eq_731);
  tcase_add_test(tc_create, eq_732);
  tcase_add_test(tc_create, eq_733);
  tcase_add_test(tc_create, eq_734);
  tcase_add_test(tc_create, eq_735);
  tcase_add_test(tc_create, eq_736);
  tcase_add_test(tc_create, eq_737);
  tcase_add_test(tc_create, eq_738);
  tcase_add_test(tc_create, eq_739);
  tcase_add_test(tc_create, eq_740);
  tcase_add_test(tc_create, eq_741);
  tcase_add_test(tc_create, eq_742);
  tcase_add_test(tc_create, eq_743);
  tcase_add_test(tc_create, eq_744);
  tcase_add_test(tc_create, eq_745);
  tcase_add_test(tc_create, eq_746);
  tcase_add_test(tc_create, eq_747);
  tcase_add_test(tc_create, eq_748);
  tcase_add_test(tc_create, eq_749);
  tcase_add_test(tc_create, eq_750);
  tcase_add_test(tc_create, eq_751);
  tcase_add_test(tc_create, eq_752);
  tcase_add_test(tc_create, eq_753);
  tcase_add_test(tc_create, eq_754);
  tcase_add_test(tc_create, eq_755);
  tcase_add_test(tc_create, eq_756);
  tcase_add_test(tc_create, eq_757);
  tcase_add_test(tc_create, eq_758);
  tcase_add_test(tc_create, eq_759);
  tcase_add_test(tc_create, eq_760);
  tcase_add_test(tc_create, eq_761);
  tcase_add_test(tc_create, eq_762);
  tcase_add_test(tc_create, eq_763);
  tcase_add_test(tc_create, eq_764);
  tcase_add_test(tc_create, eq_765);
  tcase_add_test(tc_create, eq_766);
  tcase_add_test(tc_create, eq_767);
  tcase_add_test(tc_create, eq_768);
  tcase_add_test(tc_create, eq_769);
  tcase_add_test(tc_create, eq_770);
  tcase_add_test(tc_create, eq_771);
  tcase_add_test(tc_create, eq_772);
  tcase_add_test(tc_create, eq_773);
  tcase_add_test(tc_create, eq_774);
  tcase_add_test(tc_create, eq_775);
  tcase_add_test(tc_create, eq_776);
  tcase_add_test(tc_create, eq_777);
  tcase_add_test(tc_create, eq_778);
  tcase_add_test(tc_create, eq_779);
  tcase_add_test(tc_create, eq_780);
  tcase_add_test(tc_create, eq_781);
  tcase_add_test(tc_create, eq_782);
  tcase_add_test(tc_create, eq_783);
  tcase_add_test(tc_create, eq_784);
  tcase_add_test(tc_create, eq_785);
  tcase_add_test(tc_create, eq_786);
  tcase_add_test(tc_create, eq_787);
  tcase_add_test(tc_create, eq_788);
  tcase_add_test(tc_create, eq_789);
  tcase_add_test(tc_create, eq_790);
  tcase_add_test(tc_create, eq_791);
  tcase_add_test(tc_create, eq_792);
  tcase_add_test(tc_create, eq_793);
  tcase_add_test(tc_create, eq_794);
  tcase_add_test(tc_create, eq_795);
  tcase_add_test(tc_create, eq_796);
  tcase_add_test(tc_create, eq_797);
  tcase_add_test(tc_create, eq_798);
  tcase_add_test(tc_create, eq_799);
  tcase_add_test(tc_create, eq_800);
  tcase_add_test(tc_create, eq_801);
  tcase_add_test(tc_create, eq_802);
  tcase_add_test(tc_create, eq_803);
  tcase_add_test(tc_create, eq_804);
  tcase_add_test(tc_create, eq_805);
  tcase_add_test(tc_create, eq_806);
  tcase_add_test(tc_create, eq_807);
  tcase_add_test(tc_create, eq_808);
  tcase_add_test(tc_create, eq_809);
  tcase_add_test(tc_create, eq_810);
  tcase_add_test(tc_create, eq_811);
  tcase_add_test(tc_create, eq_812);
  tcase_add_test(tc_create, eq_813);
  tcase_add_test(tc_create, eq_814);
  tcase_add_test(tc_create, eq_815);
  tcase_add_test(tc_create, eq_816);
  tcase_add_test(tc_create, eq_817);
  tcase_add_test(tc_create, eq_818);
  tcase_add_test(tc_create, eq_819);
  tcase_add_test(tc_create, eq_820);
  tcase_add_test(tc_create, eq_821);
  tcase_add_test(tc_create, eq_822);
  tcase_add_test(tc_create, eq_823);
  tcase_add_test(tc_create, eq_824);
  tcase_add_test(tc_create, eq_825);
  tcase_add_test(tc_create, eq_826);
  tcase_add_test(tc_create, eq_827);
  tcase_add_test(tc_create, eq_828);
  tcase_add_test(tc_create, eq_829);
  tcase_add_test(tc_create, eq_830);
  tcase_add_test(tc_create, eq_831);
  tcase_add_test(tc_create, eq_832);
  tcase_add_test(tc_create, eq_833);
  tcase_add_test(tc_create, eq_834);
  tcase_add_test(tc_create, eq_835);
  tcase_add_test(tc_create, eq_836);
  tcase_add_test(tc_create, eq_837);
  tcase_add_test(tc_create, eq_838);
  tcase_add_test(tc_create, eq_839);
  tcase_add_test(tc_create, eq_840);
  tcase_add_test(tc_create, eq_841);
  tcase_add_test(tc_create, eq_842);
  tcase_add_test(tc_create, eq_843);
  tcase_add_test(tc_create, eq_844);
  tcase_add_test(tc_create, eq_845);
  tcase_add_test(tc_create, eq_846);
  tcase_add_test(tc_create, eq_847);
  tcase_add_test(tc_create, eq_848);
  tcase_add_test(tc_create, eq_849);
  tcase_add_test(tc_create, eq_850);
  tcase_add_test(tc_create, eq_851);
  tcase_add_test(tc_create, eq_852);
  tcase_add_test(tc_create, eq_853);
  tcase_add_test(tc_create, eq_854);
  tcase_add_test(tc_create, eq_855);
  tcase_add_test(tc_create, eq_856);
  tcase_add_test(tc_create, eq_857);
  tcase_add_test(tc_create, eq_858);
  tcase_add_test(tc_create, eq_859);
  tcase_add_test(tc_create, eq_860);
  tcase_add_test(tc_create, eq_861);
  tcase_add_test(tc_create, eq_862);
  tcase_add_test(tc_create, eq_863);
  tcase_add_test(tc_create, eq_864);
  tcase_add_test(tc_create, eq_865);
  tcase_add_test(tc_create, eq_866);
  tcase_add_test(tc_create, eq_867);
  tcase_add_test(tc_create, eq_868);
  tcase_add_test(tc_create, eq_869);
  tcase_add_test(tc_create, eq_870);
  tcase_add_test(tc_create, eq_871);
  tcase_add_test(tc_create, eq_872);
  tcase_add_test(tc_create, eq_873);
  tcase_add_test(tc_create, eq_874);
  tcase_add_test(tc_create, eq_875);
  tcase_add_test(tc_create, eq_876);
  tcase_add_test(tc_create, eq_877);
  tcase_add_test(tc_create, eq_878);
  tcase_add_test(tc_create, eq_879);
  tcase_add_test(tc_create, eq_880);
  tcase_add_test(tc_create, eq_881);
  tcase_add_test(tc_create, eq_882);
  tcase_add_test(tc_create, eq_883);
  tcase_add_test(tc_create, eq_884);
  tcase_add_test(tc_create, eq_885);
  tcase_add_test(tc_create, eq_886);
  tcase_add_test(tc_create, eq_887);
  tcase_add_test(tc_create, eq_888);
  tcase_add_test(tc_create, eq_889);
  tcase_add_test(tc_create, eq_890);
  tcase_add_test(tc_create, eq_891);
  tcase_add_test(tc_create, eq_892);
  tcase_add_test(tc_create, eq_893);
  tcase_add_test(tc_create, eq_894);
  tcase_add_test(tc_create, eq_895);
  tcase_add_test(tc_create, eq_896);
  tcase_add_test(tc_create, eq_897);
  tcase_add_test(tc_create, eq_898);
  tcase_add_test(tc_create, eq_899);
  tcase_add_test(tc_create, eq_900);
  tcase_add_test(tc_create, eq_901);
  tcase_add_test(tc_create, eq_902);
  tcase_add_test(tc_create, eq_903);
  tcase_add_test(tc_create, eq_904);
  tcase_add_test(tc_create, eq_905);
  tcase_add_test(tc_create, eq_906);
  tcase_add_test(tc_create, eq_907);
  tcase_add_test(tc_create, eq_908);
  tcase_add_test(tc_create, eq_909);
  tcase_add_test(tc_create, eq_910);
  tcase_add_test(tc_create, eq_911);
  tcase_add_test(tc_create, eq_912);
  tcase_add_test(tc_create, eq_913);
  tcase_add_test(tc_create, eq_914);
  tcase_add_test(tc_create, eq_915);
  tcase_add_test(tc_create, eq_916);
  tcase_add_test(tc_create, eq_917);
  tcase_add_test(tc_create, eq_918);
  tcase_add_test(tc_create, eq_919);
  tcase_add_test(tc_create, eq_920);
  tcase_add_test(tc_create, eq_921);
  tcase_add_test(tc_create, eq_922);
  tcase_add_test(tc_create, eq_923);
  tcase_add_test(tc_create, eq_924);
  tcase_add_test(tc_create, eq_925);
  tcase_add_test(tc_create, eq_926);
  tcase_add_test(tc_create, eq_927);
  tcase_add_test(tc_create, eq_928);
  tcase_add_test(tc_create, eq_929);
  tcase_add_test(tc_create, eq_930);
  tcase_add_test(tc_create, eq_931);
  tcase_add_test(tc_create, eq_932);
  tcase_add_test(tc_create, eq_933);
  tcase_add_test(tc_create, eq_934);
  tcase_add_test(tc_create, eq_935);
  tcase_add_test(tc_create, eq_936);
  tcase_add_test(tc_create, eq_937);
  tcase_add_test(tc_create, eq_938);
  tcase_add_test(tc_create, eq_939);
  tcase_add_test(tc_create, eq_940);
  tcase_add_test(tc_create, eq_941);
  tcase_add_test(tc_create, eq_942);
  tcase_add_test(tc_create, eq_943);
  tcase_add_test(tc_create, eq_944);
  tcase_add_test(tc_create, eq_945);
  tcase_add_test(tc_create, eq_946);
  tcase_add_test(tc_create, eq_947);
  tcase_add_test(tc_create, eq_948);
  tcase_add_test(tc_create, eq_949);
  tcase_add_test(tc_create, eq_950);
  tcase_add_test(tc_create, eq_951);
  tcase_add_test(tc_create, eq_952);
  tcase_add_test(tc_create, eq_953);
  tcase_add_test(tc_create, eq_954);
  tcase_add_test(tc_create, eq_955);
  tcase_add_test(tc_create, eq_956);
  tcase_add_test(tc_create, eq_957);
  tcase_add_test(tc_create, eq_958);
  tcase_add_test(tc_create, eq_959);
  tcase_add_test(tc_create, eq_960);
  tcase_add_test(tc_create, eq_961);
  tcase_add_test(tc_create, eq_962);
  tcase_add_test(tc_create, eq_963);
  tcase_add_test(tc_create, eq_964);
  tcase_add_test(tc_create, eq_965);
  tcase_add_test(tc_create, eq_966);
  tcase_add_test(tc_create, eq_967);
  tcase_add_test(tc_create, eq_968);
  tcase_add_test(tc_create, eq_969);
  tcase_add_test(tc_create, eq_970);
  tcase_add_test(tc_create, eq_971);
  tcase_add_test(tc_create, eq_972);
  tcase_add_test(tc_create, eq_973);
  tcase_add_test(tc_create, eq_974);
  tcase_add_test(tc_create, eq_975);
  tcase_add_test(tc_create, eq_976);
  tcase_add_test(tc_create, eq_977);
  tcase_add_test(tc_create, eq_978);
  tcase_add_test(tc_create, eq_979);
  tcase_add_test(tc_create, eq_980);
  tcase_add_test(tc_create, eq_981);
  tcase_add_test(tc_create, eq_982);
  tcase_add_test(tc_create, eq_983);
  tcase_add_test(tc_create, eq_984);
  tcase_add_test(tc_create, eq_985);
  tcase_add_test(tc_create, eq_986);
  tcase_add_test(tc_create, eq_987);
  tcase_add_test(tc_create, eq_988);
  tcase_add_test(tc_create, eq_989);
  tcase_add_test(tc_create, eq_990);
  tcase_add_test(tc_create, eq_991);
  tcase_add_test(tc_create, eq_992);
  tcase_add_test(tc_create, eq_993);
  tcase_add_test(tc_create, eq_994);
  tcase_add_test(tc_create, eq_995);
  tcase_add_test(tc_create, eq_996);
  tcase_add_test(tc_create, eq_997);
  tcase_add_test(tc_create, eq_998);
  tcase_add_test(tc_create, eq_999);
  tcase_add_test(tc_create, eq_1000);
  tcase_add_test(tc_create, eq_1001);
  tcase_add_test(tc_create, eq_1002);
  tcase_add_test(tc_create, eq_1003);
  tcase_add_test(tc_create, eq_1004);
  tcase_add_test(tc_create, eq_1005);
  tcase_add_test(tc_create, eq_1006);
  tcase_add_test(tc_create, eq_1007);
  tcase_add_test(tc_create, eq_1008);
  tcase_add_test(tc_create, eq_1009);
  tcase_add_test(tc_create, eq_1010);
  tcase_add_test(tc_create, eq_1011);
  tcase_add_test(tc_create, eq_1012);
  tcase_add_test(tc_create, eq_1013);
  tcase_add_test(tc_create, eq_1014);
  tcase_add_test(tc_create, eq_1015);
  tcase_add_test(tc_create, eq_1016);
  tcase_add_test(tc_create, eq_1017);
  tcase_add_test(tc_create, eq_1018);
  tcase_add_test(tc_create, eq_1019);
  tcase_add_test(tc_create, eq_1020);
  tcase_add_test(tc_create, eq_1021);
  tcase_add_test(tc_create, eq_1022);
  tcase_add_test(tc_create, eq_1023);
  tcase_add_test(tc_create, eq_1024);
  tcase_add_test(tc_create, eq_1025);
  tcase_add_test(tc_create, eq_1026);
  tcase_add_test(tc_create, eq_1027);
  tcase_add_test(tc_create, eq_1028);
  tcase_add_test(tc_create, eq_1029);
  tcase_add_test(tc_create, eq_1030);
  tcase_add_test(tc_create, eq_1031);
  tcase_add_test(tc_create, eq_1032);
  tcase_add_test(tc_create, eq_1033);
  tcase_add_test(tc_create, eq_1034);
  tcase_add_test(tc_create, eq_1035);
  tcase_add_test(tc_create, eq_1036);
  tcase_add_test(tc_create, eq_1037);
  tcase_add_test(tc_create, eq_1038);
  tcase_add_test(tc_create, eq_1039);
  tcase_add_test(tc_create, eq_1040);
  tcase_add_test(tc_create, eq_1041);
  tcase_add_test(tc_create, eq_1042);
  tcase_add_test(tc_create, eq_1043);
  tcase_add_test(tc_create, eq_1044);
  tcase_add_test(tc_create, eq_1045);
  tcase_add_test(tc_create, eq_1046);
  tcase_add_test(tc_create, eq_1047);
  tcase_add_test(tc_create, eq_1048);
  tcase_add_test(tc_create, eq_1049);
  tcase_add_test(tc_create, eq_1050);
  tcase_add_test(tc_create, eq_1051);
  tcase_add_test(tc_create, eq_1052);
  tcase_add_test(tc_create, eq_1053);
  tcase_add_test(tc_create, eq_1054);
  tcase_add_test(tc_create, eq_1055);
  tcase_add_test(tc_create, eq_1056);
  tcase_add_test(tc_create, eq_1057);
  tcase_add_test(tc_create, eq_1058);
  tcase_add_test(tc_create, eq_1059);
  tcase_add_test(tc_create, eq_1060);
  tcase_add_test(tc_create, eq_1061);
  tcase_add_test(tc_create, eq_1062);
  tcase_add_test(tc_create, eq_1063);
  tcase_add_test(tc_create, eq_1064);
  tcase_add_test(tc_create, eq_1065);
  tcase_add_test(tc_create, eq_1066);
  tcase_add_test(tc_create, eq_1067);
  tcase_add_test(tc_create, eq_1068);
  tcase_add_test(tc_create, eq_1069);
  tcase_add_test(tc_create, eq_1070);
  tcase_add_test(tc_create, eq_1071);
  tcase_add_test(tc_create, eq_1072);
  tcase_add_test(tc_create, eq_1073);
  tcase_add_test(tc_create, eq_1074);
  tcase_add_test(tc_create, eq_1075);
  tcase_add_test(tc_create, eq_1076);
  tcase_add_test(tc_create, eq_1077);
  tcase_add_test(tc_create, eq_1078);
  tcase_add_test(tc_create, eq_1079);
  tcase_add_test(tc_create, eq_1080);
  tcase_add_test(tc_create, eq_1081);
  tcase_add_test(tc_create, eq_1082);
  tcase_add_test(tc_create, eq_1083);
  tcase_add_test(tc_create, eq_1084);
  tcase_add_test(tc_create, eq_1085);
  tcase_add_test(tc_create, eq_1086);
  tcase_add_test(tc_create, eq_1087);
  tcase_add_test(tc_create, eq_1088);
  tcase_add_test(tc_create, eq_1089);
  tcase_add_test(tc_create, eq_1090);
  tcase_add_test(tc_create, eq_1091);
  tcase_add_test(tc_create, eq_1092);
  tcase_add_test(tc_create, eq_1093);
  tcase_add_test(tc_create, eq_1094);
  tcase_add_test(tc_create, eq_1095);
  tcase_add_test(tc_create, eq_1096);
  tcase_add_test(tc_create, eq_1097);
  tcase_add_test(tc_create, eq_1098);
  tcase_add_test(tc_create, eq_1099);
  tcase_add_test(tc_create, eq_1100);
  tcase_add_test(tc_create, eq_1101);
  tcase_add_test(tc_create, eq_1102);
  tcase_add_test(tc_create, eq_1103);
  tcase_add_test(tc_create, eq_1104);
  tcase_add_test(tc_create, eq_1105);
  tcase_add_test(tc_create, eq_1106);
  tcase_add_test(tc_create, eq_1107);
  tcase_add_test(tc_create, eq_1108);
  tcase_add_test(tc_create, eq_1109);
  tcase_add_test(tc_create, eq_1110);
  tcase_add_test(tc_create, eq_1111);
  tcase_add_test(tc_create, eq_1112);
  tcase_add_test(tc_create, eq_1113);
  tcase_add_test(tc_create, eq_1114);
  tcase_add_test(tc_create, eq_1115);
  tcase_add_test(tc_create, eq_1116);
  tcase_add_test(tc_create, eq_1117);
  tcase_add_test(tc_create, eq_1118);
  tcase_add_test(tc_create, eq_1119);
  tcase_add_test(tc_create, eq_1120);
  tcase_add_test(tc_create, eq_1121);
  tcase_add_test(tc_create, eq_1122);
  tcase_add_test(tc_create, eq_1123);
  tcase_add_test(tc_create, eq_1124);
  tcase_add_test(tc_create, eq_1125);
  tcase_add_test(tc_create, eq_1126);
  tcase_add_test(tc_create, eq_1127);
  tcase_add_test(tc_create, eq_1128);
  tcase_add_test(tc_create, eq_1129);
  tcase_add_test(tc_create, eq_1130);
  tcase_add_test(tc_create, eq_1131);
  tcase_add_test(tc_create, eq_1132);
  tcase_add_test(tc_create, eq_1133);
  tcase_add_test(tc_create, eq_1134);
  tcase_add_test(tc_create, eq_1135);
  tcase_add_test(tc_create, eq_1136);
  tcase_add_test(tc_create, eq_1137);
  tcase_add_test(tc_create, eq_1138);
  tcase_add_test(tc_create, eq_1139);
  tcase_add_test(tc_create, eq_1140);
  tcase_add_test(tc_create, eq_1141);
  tcase_add_test(tc_create, eq_1142);
  tcase_add_test(tc_create, eq_1143);
  tcase_add_test(tc_create, eq_1144);
  tcase_add_test(tc_create, eq_1145);
  tcase_add_test(tc_create, eq_1146);
  tcase_add_test(tc_create, eq_1147);
  tcase_add_test(tc_create, eq_1148);
  tcase_add_test(tc_create, eq_1149);
  tcase_add_test(tc_create, eq_1150);
  tcase_add_test(tc_create, eq_1151);
  tcase_add_test(tc_create, eq_1152);
  tcase_add_test(tc_create, eq_1153);
  tcase_add_test(tc_create, eq_1154);
  tcase_add_test(tc_create, eq_1155);
  tcase_add_test(tc_create, eq_1156);
  tcase_add_test(tc_create, eq_1157);
  tcase_add_test(tc_create, eq_1158);
  tcase_add_test(tc_create, eq_1159);
  tcase_add_test(tc_create, eq_1160);
  tcase_add_test(tc_create, eq_1161);
  tcase_add_test(tc_create, eq_1162);
  tcase_add_test(tc_create, eq_1163);
  tcase_add_test(tc_create, eq_1164);
  tcase_add_test(tc_create, eq_1165);
  tcase_add_test(tc_create, eq_1166);
  tcase_add_test(tc_create, eq_1167);
  tcase_add_test(tc_create, eq_1168);
  suite_add_tcase(s, tc_create);
  return s;
}