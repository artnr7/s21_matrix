#include "../include/s21_utils.h"

void s21_print_matrix(
    matrix_t *matrix) {  // вывод никому не нужен – удали в конце
  for (int i = 0; i < matrix->rows; i++) {
    for (int j = 0; j < matrix->columns; j++) {
      printf("[%.7f]", matrix->matrix[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

// проверочки мои проверки
void s21_is_null_mtrx_ptr(matrix_t *mtrx, enum error_code *er_code) {
  if (mtrx->matrix == NULL) {
    *er_code = INCORRECT;
  }
}

void s21_are_eq_mtrx_sizes(matrix_t *A, matrix_t *B, enum error_code *er_code,
                           int mode) {
  if (mode == 0 && (A->rows != B->rows ||
                    A->columns != B->columns)) {  // это самый обычный случай
    *er_code = ARITH;
  } else if (mode == 1 &&
             (A->rows != B->columns ||
              A->columns != B->columns)) {  // это для умножения матриц
    *er_code = ARITH;
  }
}

/**
 * @warning Никаких проверок для вызова делать не нужно
 * @brief Основная функция для сложения, вычитания, умножения на число,
 * умножения матриц, вызываемая внутри отдельных функция, объединяющая их общую
 * часть
 * @param mode от этой переменной зависит в каком виде будет вызвана эта
 * функция,
 * @param mode 0 ► сложение
 * @param mode 1 ► вычитание
 * @param mode 2 ► умножение на число
 * @param mode 3 ► умножение матриц
 */
int s21_sum_sub_mulnum_mulmtrx(matrix_t *A, matrix_t *B, matrix_t *result,
                               double number, int mode) {
  enum error_code er_code = OK;
  s21_is_null_mtrx_ptr(A, &er_code);
  s21_is_null_mtrx_ptr(B, &er_code);
  if (er_code == INCORRECT) {
    return er_code;
  }

  result->matrix = NULL;
  result->rows = A->rows;

  if (mode == 0 || mode == 1 || mode == 2) {
    s21_are_eq_mtrx_sizes(A, B, &er_code, 0);
    result->columns = A->columns;
  } else if (mode == 3) {
    s21_are_eq_mtrx_sizes(A, B, &er_code, 1);
    result->columns = B->columns;
  }

  if (er_code == OK) {
    s21_create_matrix(result->rows, result->columns, result);
    s21_is_null_mtrx_ptr(result, &er_code);
  }
  for (int i = 0; i < result->rows && er_code == OK; i++) {
    for (int j = 0; j < result->columns; j++) {
      switch (mode) {
        case 0:
          result->matrix[i][j] = A->matrix[i][j] + B->matrix[i][j];
          break;
        case 1:
          result->matrix[i][j] = A->matrix[i][j] - B->matrix[i][j];
          break;
        case 2:
          result->matrix[i][j] = A->matrix[i][j] * number;
          break;
        case 3:
          for (int k = 0; k < A->columns; k++) {
            result->matrix[i][j] += A->matrix[i][k] * B->matrix[k][j];
          }
          break;
      }
    }
  }
  if (er_code == OK) {
    s21_remove_matrix(result);
  }
  return er_code;
}

/**
 * @brief Установка в элементы матрицы символов
 * mode 0 ► заполнение нулями
 * mode 1 ► заполнение -1 и 1 в зависимости от четности порядка, где стоит
 * ► элемент матрицы
 * @warning Вызывать если матрицы корректны и их размеры равны
 */
void s21_set_matrix(matrix_t *matrix, int mode) {
  for (int i = 0; i < matrix->rows; i++) {
    for (int j = 0; j < matrix->columns; j++) {
      if (mode == 0) {
        matrix->matrix[i][j] = 0;
      } else if (mode == 1) {
        matrix->matrix[i][j] = -1 * ((i + j) % 2 == 0 ? -1 : 1);
      }
    }
  }
}

/**
 * @brief Копирует элементы A в temp_A
 * @warning Вызывать если матрицы корректны и их размеры равны
 */
void s21_copy_matrix(matrix_t *temp_A, matrix_t A) {
  for (int i = 0; i < A.rows; i++) {
    for (int j = 0; j < A.columns; j++) {
      temp_A->matrix[i][j] = A.matrix[i][j];
    }
  }
}

void s21_minor(matrix_t *minor, matrix_t A, double *minor_det, int ai, int aj) {
  int mi = 0;
  int mj = 0;

  for (int i = 0; i < A.rows; i++) {
    for (int j = 0; j < A.columns; j++) {
      if (i == ai || j == aj) {
        continue;
      }
      minor->matrix[mi][mj] = A.matrix[i][j];
      mj++;
    }
    mj = 0;
    if (i == ai) {
      continue;
    }
    mi++;
  }

  s21_determinant(minor, minor_det);
}

void s21_triangulation(matrix_t *A, double *result) {
  for (int i = 0; i < A->rows - 1; i++) {
    int imac = i, old_imac = i;
    for (int l = i; l < A->rows; l++) {
      if (A->matrix[l][i] > A->matrix[imac][i]) {
        imac = l;
      }
    }

    if (imac != old_imac) {
      *result *= -1;
    }
    s21_col_swap(A, i, imac);
    if (A->matrix[i][i] == 0.0) {
      printf("fdsfdfds\n\\\\\\\\\\\\\\\\\\\\\\\\\\\nfdsfdss");
      break;
    }

    for (int j = i + 1; j < A->rows; j++) {
      double del = A->matrix[j][i] / A->matrix[i][i];
      for (int k = i; k < A->columns; k++) {
        A->matrix[j][k] -= A->matrix[i][k] * del;
      }
    }
  }
}

/**
 * @brief Проверяет, что число value_1 равно value_2
 * Проверка входных данных на корректность не осуществляется и должна
 * производится за пределами функции
 *
 * Перед выполнением сравнения у чисел отбрасываются конечные нули (функцией
 * s21_remove_trailing_zeros()):
 *
 * 123.510 -> 123.51
 * 0.00000 -> 0
 * 500.001 -> 500.001
 * 500.10 -> 500.1


 * @author Hubert Furr (hubertfu@student.21-school.ru)
 * @param value_1 первое сравниваемое число
 * @param value_2 второе сравниваемое число
 * @return int результат сравнения:
 *          1 - true
 *          0 - false
 *
 */
void s21_col_swap(matrix_t *A, int i, int imac) {
  double tmp_num = 0;
  for (int j = 0; j < A->columns; j++) {
    tmp_num = A->matrix[i][j];
    A->matrix[i][j] = A->matrix[imac][j];
    A->matrix[imac][j] = tmp_num;
  }
}
