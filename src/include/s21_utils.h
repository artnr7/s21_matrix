#ifndef S21_UTILS
#define S21_UTILS

#include "../include/s21_matrix.h"

void s21_is_null_mtrx_ptr(matrix_t *mtrx, enum error_code *er_code);

int s21_sum_sub_mul_nummatrix(matrix_t *A, matrix_t *B, matrix_t *result,
                              double number, int mode);

void s21_set_zero_matrix(matrix_t *matrix);

void s21_print_matrix(matrix_t *matrix);

void s21_fill_matrix(matrix_t *temp_A, matrix_t A);

void s21_minor(matrix_t *minor, matrix_t A, double *minor_det, int ai, int aj);

void gauss_del(int i, double *result, matrix_t *temp_A, matrix_t A);

void gauss_sub(int i, matrix_t *temp_A, matrix_t A);

int is_row_or_col_zero(matrix_t A);
#endif
