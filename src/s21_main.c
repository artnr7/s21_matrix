#include "include/s21_matrix.h"
#include "include/s21_utils.h"

int main() {
  /*INIT*/
  const int rows1 = 3, columns1 = 3;
  const int rows2 = 2, columns2 = 3;
  matrix_t mtrx_1 = {NULL, rows1, columns1};
  matrix_t mtrx_2 = {NULL, rows2, columns2};
  matrix_t mtrx_3 = {NULL, rows1, columns2};

  // если в указателе матрицы матррикс лежит нуль то эта матрица некоректна -
  // сделать проверку

  s21_create_matrix(rows1, columns1, &mtrx_1);
  s21_create_matrix(rows2, columns2, &mtrx_2);
  s21_create_matrix(rows1, columns2, &mtrx_3);

  // for (int i = 0; i < mtrx_1.rows; i++) {
  //   for (int j = 0; j < mtrx_1.columns; j++) {
  //     mtrx_1.matrix[i][j] = i * mtrx_1.rows + j + 1;
  //   }
  // }
  mtrx_1.matrix[0][0] = 73;
  mtrx_1.matrix[0][1] = 7;
  mtrx_1.matrix[0][2] = 6;

  mtrx_1.matrix[1][0] = 110;
  mtrx_1.matrix[1][1] = 16;
  mtrx_1.matrix[1][2] = 19;

  mtrx_1.matrix[2][0] = 148;
  mtrx_1.matrix[2][1] = 10;
  mtrx_1.matrix[2][2] = 7;

  // s21_print_matrix(&mtrx_1);
  int cntr = 4;
  for (int i = 0; i < mtrx_2.rows; i++) {
    for (int j = 0; j < mtrx_2.columns; j++) {
      mtrx_2.matrix[i][j] = cntr++;
    }
  }
  // s21_print_matrix(&mtrx_2);
  // double det = 1;
  /*PROG*/

  // s21_mult_matrix(&mtrx_1, &mtrx_2, &mtrx_3);
  // s21_transpose(&mtrx_1, &mtrx_2);
  // s21_determinant(&mtrx_1, &det);
  s21_calc_complements(&mtrx_1, &mtrx_3);
  // s21_print_matrix(&mtrx_3);
  // printf("det =====%.7f", det);
  return 0;
}