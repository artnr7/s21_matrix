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
      matrix->matrix[i][j] = 0;
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