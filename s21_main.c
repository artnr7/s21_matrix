#include "include/s21_matrix.h"

int main() {
  double** ptr = NULL;
  const int rows = 3, columns = 4;
  matrix_t mtrx_1 = {ptr, rows, columns};
  s21_create_matrix(rows, columns, &mtrx_1);
  return 0;
}