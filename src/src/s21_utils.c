#include "../include/s21_utils.h"

void s21_is_null_mtrx_ptr(matrix_t *mtrx, enum error_code *er_code) {
  if (mtrx->matrix == NULL) {
    *er_code = INCORRECT;
  }
}

int s21_sum_sub_mul_nummatrix(matrix_t *A, matrix_t *B, matrix_t *result,
                              double number, int mode) {
  enum error_code er_code = OK;
  if ((mode == 0 || mode == 1) &&
      (A->rows != B->rows || A->columns != B->columns)) {
    er_code = ARITH;
  }

  for (int i = 0; i < A->rows && er_code == OK; i++) {
    for (int j = 0; j < A->columns; j++) {
      if (mode == 0) {
        result->matrix[i][j] = A->matrix[i][j] + B->matrix[i][j];
      } else if (mode == 1) {
        result->matrix[i][j] = A->matrix[i][j] - B->matrix[i][j];
      } else if (mode == 2) {
        result->matrix[i][j] = A->matrix[i][j] * number;
      }
    }
  }
  return er_code;
}

void s21_set_zero_matrix(matrix_t *matrix) {
  for (int i = 0; i < matrix->rows; i++) {
    for (int j = 0; j < matrix->columns; j++) {
      matrix->matrix[i][j] = 1;
    }
  }
}

void s21_print_matrix(matrix_t *matrix) {
  for (int i = 0; i < matrix->rows; i++) {
    for (int j = 0; j < matrix->columns; j++) {
      printf("[%.7f]", matrix->matrix[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

void s21_fill_matrix(matrix_t *temp_A, matrix_t A) {
  for (int i = 0; i < A.rows; i++) {
    for (int j = 0; j < A.columns; j++) {
      temp_A->matrix[i][j] = A.matrix[i][j];
    }
  }
}

void s21_minor(matrix_t *minor, matrix_t A, double *minor_det, int ai, int aj) {
  int mi = 0;
  int mj = 0;
  // printf("\nai = %d\naj = %d\n========", ai, aj);

  for (int i = 0; i < A.rows; i++) {
    for (int j = 0; j < A.columns; j++) {
      // printf("\ni = %d\tj = %d\n", i, j);

      if (i == ai || j == aj) {
        continue;
      }

      // printf("\nmi = %d\tmj = %d\n", mi, mj);

      minor->matrix[mi][mj] = A.matrix[i][j];
      mj++;
    }
    mj = 0;
    if (i == ai) {
      continue;
    }
    mi++;
  }
  // printf("\nmi = %d\nmj = %d\n", mi, mj);
  // s21_print_matrix(minor);
  // printf("f");

  s21_determinant(minor, minor_det);
  // printf("det = %f\n", *minor_det);
}

void gauss_del(int i, double *result, matrix_t *temp_A, matrix_t A) {
  for (int j = i; j < A.rows; j++) {
    *result *= A.matrix[j][i];
    for (int k = i; k < A.columns; k++) {
      temp_A->matrix[j][k] /= A.matrix[j][i];
      // printf("%.7f\n", A.matrix[j][i]);
    }
  }
}
void gauss_sub(int i, matrix_t *temp_A, matrix_t A) {
  for (int j = A.rows - 1; j > i; j--) {
    for (int k = i; k < A.columns; k++) {
      temp_A->matrix[j][k] -= temp_A->matrix[i][k];
    }
  }
}

int is_row_or_col_zero(matrix_t A) {
  double sum1 = 0.0;
  double sum2 = 0.0;
  for (int i = 0; i < A.rows; i++) {
    for (int j = 0; j < A.columns; j++) {
      sum1 += A.matrix[i][j];
      sum2 += A.matrix[j][i];
    }
    if (((double)sum1) == 0.0 || ((double)sum2) == 0.0) {
      return 1;
    }
    sum1 = 0.0;
    sum2 = 0.0;
  }
  return 0;
}

// void per_str() {}