#ifndef S21_UTILS
#define S21_UTILS

#include "../include/s21_matrix.h"

void s21_is_null_mtrx_ptr(matrix_t *mtrx, enum error_code *er_code);

int s21_sum_sub_mul_nummatrix(matrix_t *A, matrix_t *B, matrix_t *result,
                              double number, int mode);

void s21_set_zero_matrix(matrix_t *matrix);

void s21_print_matrix(matrix_t *matrix);

#endif
