
#include "../include/s21_matrix.h"

int s21_create_matrix(int rows, int columns, matrix_t *result) {
  result->matrix =
      malloc((rows * columns * sizeof(double)) + (rows * sizeof(double *)));
  double *ptr = *result->matrix + columns;

  for (int i = 0; i < rows; i++) {
    result->matrix[i] = ptr + columns * i;
  }

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      result->matrix[i][j] = i * j;
      printf("[%f]", result->matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}