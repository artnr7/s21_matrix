#ifndef TEST_H
#define TEST_H
#include <check.h>

#include "../include/s21_matrix.h"
#include "../include/s21_utils.h"

Suite *s21_create_matrix_test(void);

Suite *s21_eq_matrix_test(void);

Suite *s21_other(void);

#endif
