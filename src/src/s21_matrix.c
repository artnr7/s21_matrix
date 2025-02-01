
#include "../include/s21_matrix.h"

#include "../include/s21_utils.h"

int s21_create_matrix(int rows, int columns, matrix_t *result) {
  enum error_code er_code = OK;
  result->matrix = (double **)malloc((rows * columns * sizeof(double)) +
                                     (rows * sizeof(double *)));
  s21_is_null_mtrx_ptr(result, &er_code);

  double *ptr = (double *)(result->matrix + rows);
  if (ptr == NULL) {
    er_code = INCORRECT;
  }

  for (int i = 0; i < rows && er_code == OK; i++) {
    result->matrix[i] = ptr + columns * i;
  }

  return er_code;
}

void s21_remove_matrix(matrix_t *A) { free(A->matrix); }

int s21_eq_matrix(matrix_t *A, matrix_t *B) {
  int eq_code = SUCCESS;
  if (A->rows != B->rows || A->columns != B->columns) {
    eq_code = FAILURE;
  }  // это надо убрать потому что тут нет провреки на 0 1 2
  for (int i = 0; i < A->rows && eq_code == SUCCESS; i++) {
    for (int j = 0; j < A->columns && eq_code == SUCCESS; j++) {
      if (fabs(A->matrix[i][j] - B->matrix[i][j]) > EPS) {
        eq_code = FAILURE;
      }
    }
  }

  return eq_code;
}

int s21_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  return s21_sum_sub_mul_nummatrix(A, B, result, 0, 0);
}

int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  return s21_sum_sub_mul_nummatrix(A, B, result, 0, 1);
}

int s21_mult_number(matrix_t *A, double number, matrix_t *result) {
  matrix_t *B = {0};
  return s21_sum_sub_mul_nummatrix(A, B, result, number, 2);
}

int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  enum error_code er_code = OK;

  s21_is_null_mtrx_ptr(A, &er_code);
  s21_is_null_mtrx_ptr(B, &er_code);
  s21_is_null_mtrx_ptr(result, &er_code);

  if (er_code == OK) {
    s21_set_zero_matrix(result);

    for (int i = 0; i < result->rows; i++) {
      for (int j = 0; j < result->columns; j++) {
        for (int k = 0; k < A->columns; k++) {
          result->matrix[i][j] += A->matrix[i][k] * B->matrix[k][j];
        }
      }
    }
    /**
                      1 4    1 -1  1    9 11 17
          C = A × B = 2 5  × 2  3  4 = 12 13 22
                      3 6              15 15 27

      */
  }
  return er_code;
}

int s21_transpose(matrix_t *A, matrix_t *result) {
  enum error_code er_code = OK;
  s21_is_null_mtrx_ptr(A, &er_code);
  s21_is_null_mtrx_ptr(result, &er_code);

  if (A->rows != result->rows || A->columns != result->columns) {
    er_code = ARITH;
  }

  for (int i = 0; i < A->rows && er_code == OK; i++) {
    for (int j = 0; j < A->columns; j++) {
      result->matrix[j][i] = A->matrix[i][j];
    }
  }
  return er_code;
}
