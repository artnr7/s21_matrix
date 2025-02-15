#ifndef S21_UTILS
#define S21_UTILS

#include "../include/s21_matrix.h"

void s21_is_null_mtrx_ptr(matrix_t *mtrx, enum error_code *er_code);

void s21_is_null_mtrx(matrix_t *mtrx, enum error_code *er_code);

void s21_is_correct_mtrx_size(matrix_t *mtrx, enum error_code *er_code);

void s21_are_eq_mtrx_sizes(matrix_t *A, matrix_t *B, enum error_code *er_code,
                           int mode);

int s21_sum_sub_mulnum_mulmtrx(matrix_t *A, matrix_t *B, matrix_t *result,
                               double number, int mode);

void s21_set_matrix(matrix_t *matrix, int mode);

void s21_copy_matrix(matrix_t *temp_A, matrix_t A);

void s21_minor(matrix_t *minor, matrix_t A, double *minor_det, int ai, int aj);

void s21_triangulation(matrix_t *A, double *result);

void s21_col_swap(matrix_t *A, int i, int imac);

void gauss_sub(int i, matrix_t *temp_A, matrix_t A);

#endif
