#ifndef S21_MATRIX
#define S21_MATRIX

#include <stdio.h>
#include <stdlib.h>

typedef struct matrix_struct {
  double** matrix;
  int rows;
  int columns;
} matrix_t;

int s21_create_matrix(int rows, int columns, matrix_t* result);

#endif
