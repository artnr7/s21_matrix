
#include "../include/s21_matrix.h"

int s21_create_matrix(int rows, int columns, matrix_t *result) {
  enum error_code er_code = OK;
  result->matrix = (double **)malloc((rows * columns * sizeof(double)) +
                                     (rows * sizeof(double *)));
  double *ptr = (double *)(result->matrix + columns);

  for (int i = 0; i < rows; i++) {
    result->matrix[i] = ptr + columns * i;
  }

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      result->matrix[i][j] = rows * i + j + i + 1;
      printf("[%f]", result->matrix[i][j]);
    }
    printf("\n");
  }

  //   s21_remove_matrix(result);
  return er_code;
}

void s21_remove_matrix(matrix_t *A) { free(A); }

int s21_eq_matrix(matrix_t *A, matrix_t *B) {
  int eq_code = SUCCESS;
  if (A->rows != B->rows || A->columns != B->columns) {
    eq_code = FAILURE;
  }
  for (int i = 0; i < A->rows && eq_code == SUCCESS; i++) {
    for (int j = 0; j < A->columns && eq_code == SUCCESS; j++) {
      if (fabs(A->matrix[i][j] - B->matrix[i][j]) > EPS) {
        eq_code = FAILURE;
      }
    }
  }

  return eq_code;
}

int s21_sum_sub_mul_nummatrix(matrix_t *A, matrix_t *B, matrix_t *result,
                              double number) {
  enum error_code er_code = OK;
  if (A->rows != B->rows || A->columns != B->columns) {
    er_code = ARITH;
  }

  for (int i = 0; i < A->rows && er_code == OK; i++) {
    for (int j = 0; j < A->columns; j++) {
		arith_oper();
    }
  }
  return er_code;
}

int s21_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  return s21_sum_sub_mul_nummatrix(A, B, result, 0,);
}

int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  return s21_sum_sub_mul_nummatrix(A, B, result, 0,);
}

int s21_mult_number(matrix_t *A, double number, matrix_t *result) {
  matrix_t *B = {0};
  return s21_sum_sub_mul_nummatrix(A, B, result, number,);
}

      if (mode == 0) {
        result->matrix[i][j] = A->matrix[i][j] + B->matrix[i][j];
      } else if (mode == 1) {
        result->matrix[i][j] = A->matrix[i][j] - B->matrix[i][j];
      } else if (mode == 2) {
        result->matrix[i][j] = A->matrix[i][j] * number;
      }