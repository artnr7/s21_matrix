#include "include/s21_matrix.h"

int main() {
  double** ptr = NULL;
  matrix_t mtrx_1 = {ptr, 3, 4};
  s21_create_matrix(3, 4, &mtrx_1);
  return 0;
}