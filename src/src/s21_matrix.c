
#include "../include/s21_matrix.h"

#include "../include/s21_utils.h"

/**
 * @brief Создание матрицы
 * @warning Никаких проверок для вызова делать не нужно
 */
int s21_create_matrix(int rows, int columns, matrix_t *result) {
  enum error_code er_code = OK;
  s21_is_null_mtrx(result, &er_code);
  if (er_code == OK && (rows < 1 || columns < 1)) {
    er_code = INCORRECT;
    return er_code;
  }

  result->matrix = NULL;
  result->rows = rows;
  result->columns = columns;

  result->matrix = (double **)malloc((rows * columns * sizeof(double)) +
                                     (rows * sizeof(double *)));

  s21_is_null_mtrx_ptr(result, &er_code);
  if (er_code == OK) {
    double *ptr = (double *)(result->matrix + rows);
    if (ptr == NULL) {
      er_code = INCORRECT;
    }
    for (int i = 0; i < rows && er_code == OK; i++) {
      result->matrix[i] = ptr + columns * i;
    }
    s21_set_matrix(result, 0);
  }

  return er_code;
}

/**
 * @brief Освобождение памяти выделенные под матрицу
 * @warning Вызывать если память была выделена
 */
void s21_remove_matrix(matrix_t *A) {
  enum error_code er_code = OK;
  s21_is_null_mtrx(A, &er_code);
  s21_is_null_mtrx_ptr(A, &er_code);
  s21_is_correct_mtrx_size(A, &er_code);
  if (er_code == OK) {
    free(A->matrix);
    A->matrix = NULL;
    A->columns = 0;
    A->rows = 0;
  }
}

/**
 * @brief Функция сравнения матриц по элементам и размерам
 * @warning Никаких проверок для вызова делать не нужно
 */
int s21_eq_matrix(matrix_t *A, matrix_t *B) {
  int eq_code = SUCCESS;
  enum error_code er_code = OK;
  s21_is_null_mtrx(A, &er_code);
  s21_is_null_mtrx(B, &er_code);
  if (er_code == OK) {
    s21_is_null_mtrx_ptr(A, &er_code);
    s21_is_null_mtrx_ptr(B, &er_code);
    if (er_code == OK) {
      s21_is_correct_mtrx_size(A, &er_code);
      s21_is_correct_mtrx_size(B, &er_code);
    }
  }

  if (er_code == OK) {
    s21_are_eq_mtrx_sizes(A, B, &er_code, 0);
  }

  if (er_code != OK) {
    eq_code = FAILURE;
  }
  for (int i = 0; i < A->rows && eq_code == SUCCESS; i++) {
    for (int j = 0; j < A->columns && eq_code == SUCCESS; j++) {
      if (fabs(A->matrix[i][j] - B->matrix[i][j]) > S21_EPS) {
        eq_code = FAILURE;
      }
    }
  }

  return eq_code;
}

/**
 * @brief Сложение матриц
 */
int s21_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  return s21_sum_sub_mulnum_mulmtrx(A, B, result, 0, 0);
}
/**
 * @brief Сложение матриц
 */
int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  return s21_sum_sub_mulnum_mulmtrx(A, B, result, 0, 1);
}
/**
 * @brief Умножение матрицы на число
 */
int s21_mult_number(matrix_t *A, double number, matrix_t *result) {
  enum error_code er_code = OK;
  s21_is_null_mtrx(A, &er_code);
  if (er_code == OK) {
    matrix_t B = {0};
    B.rows = A->rows;
    B.columns = A->columns;
    B.matrix = NULL;
    er_code = s21_create_matrix(B.rows, B.columns, &B);

    if (er_code == OK) {
      er_code = s21_sum_sub_mulnum_mulmtrx(A, &B, result, number, 2);
      s21_remove_matrix(&B);
    }
  }

  return er_code;
}
/**
 * @brief Умножение матриц
 */
int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  return s21_sum_sub_mulnum_mulmtrx(A, B, result, 0, 3);
}

/**
 * @brief Траспонирование матриц
 * @warning Никаких проверок для вызова делать не нужно
 */
int s21_transpose(matrix_t *A, matrix_t *result) {
  enum error_code er_code = OK;
  s21_is_null_mtrx(result, &er_code);
  s21_is_null_mtrx(A, &er_code);
  if (er_code == OK) {
    s21_is_null_mtrx_ptr(A, &er_code);
    if (er_code == OK) {
      s21_is_correct_mtrx_size(A, &er_code);
    }
  }
  if (er_code != OK) {
    return er_code;
  }

  result->rows = A->columns;
  result->columns = A->rows;
  result->matrix = NULL;

  er_code = s21_create_matrix(result->rows, result->columns, result);

  for (int i = 0; i < A->rows && er_code == OK; i++) {
    for (int j = 0; j < A->columns; j++) {
      result->matrix[j][i] = A->matrix[i][j];
    }
  }
  return er_code;
}

/**
 * @brief Матрица алгебраических дополнений
 * @warning Никаких проверок для вызова делать не нужно
 */
int s21_calc_complements(matrix_t *A, matrix_t *result) {
  enum error_code er_code = OK;
  s21_is_null_mtrx(result, &er_code);
  s21_is_null_mtrx(A, &er_code);
  if (er_code == OK) {
    s21_is_null_mtrx_ptr(A, &er_code);
    if (er_code == OK) {
      s21_is_correct_mtrx_size(A, &er_code);
    }
  }
  if (er_code == OK && A->rows != A->columns) {
    er_code = ARITH;
  }
  if (er_code != OK) {
    return er_code;
  }

  result->rows = A->rows;
  result->columns = A->columns;
  result->matrix = NULL;

  if (er_code == OK) {
    er_code = s21_create_matrix(result->rows, result->columns, result);
  }

  matrix_t minor;
  int brake = 0;
  if (er_code == OK && A->rows == 1 && A->columns == 1) {
    result->matrix[0][0] = A->matrix[0][0];
    brake = 1;
  } else if (er_code == OK) {
    minor.rows = A->rows - 1;
    minor.columns = A->columns - 1;
    minor.matrix = NULL;
    er_code = s21_create_matrix(minor.rows, minor.columns, &minor);
  }

  if (er_code == OK && brake == 0) {
    s21_set_matrix(result, 1);
  }
  for (int i = 0; i < result->rows && er_code == OK && brake == 0; i++) {
    for (int j = 0; j < result->columns; j++) {
      s21_minor(&minor, *A, &(result->matrix[i][j]), i, j);
    }
  }
  if (er_code == OK && brake == 0) {
    s21_remove_matrix(&minor);
  }
  return er_code;
}

/**
 * @brief Находит определитель матрицы
 * @warning Никаких проверок для вызова делать не нужно
 */
int s21_determinant(matrix_t *A, double *result) {
  enum error_code er_code = OK;
  s21_is_null_mtrx(A, &er_code);
  if (er_code == OK) {
    s21_is_null_mtrx_ptr(A, &er_code);
    if (er_code == OK) {
      s21_is_correct_mtrx_size(A, &er_code);
    }
  }
  if (er_code == OK && A->rows != A->columns) {
    er_code = ARITH;
  }
  if (er_code != OK) {
    return er_code;
  }
  if (*result == 0 || *result == 1) {
    *result = 1;
  } else if (*result == -1) {
    *result = -1;
  }

  s21_triangulation(A, result);
  for (int i = 0; i < A->rows; i++) {
    *result *= A->matrix[i][i];
  }

  return er_code;
}

/**
 * @brief Инвертирует матрицу
 * @warning Никаких проверок для вызова делать не нужно
 */
int s21_inverse_matrix(matrix_t *A, matrix_t *result) {
  enum error_code er_code = OK;
  s21_is_null_mtrx(result, &er_code);
  s21_is_null_mtrx(A, &er_code);
  if (er_code == OK) {
    s21_is_null_mtrx_ptr(A, &er_code);
    if (er_code == OK) {
      s21_is_correct_mtrx_size(A, &er_code);
    }
  }

  if (er_code != OK) {
    return er_code;
  }
  matrix_t tmp_mtrx = {NULL, A->rows, A->columns};
  er_code = s21_create_matrix(tmp_mtrx.rows, tmp_mtrx.columns, &tmp_mtrx);
  /*
   создание и удаление матрицы tmp_mtrx, так как матрица в ходе нахождения
   определителя меняется, нам приходится заводить временную чтобы основная не
   поменялась
  */
  double det = 1;

  s21_copy_matrix(&tmp_mtrx, *A);
  s21_determinant(&tmp_mtrx, &det);
  if (fabs(det - 0.0) < S21_EPS) {
    er_code = ARITH;
  }
  s21_remove_matrix(&tmp_mtrx);
  if (er_code == OK) {
    er_code = s21_calc_complements(A, &tmp_mtrx);
    if (er_code == OK) {
      er_code = s21_transpose(&tmp_mtrx, result);
    }
    double inv_det = 1 / det;
    if (result->rows == 1 && result->columns == 1) {
      result->matrix[0][0] = 1;
    }
    for (int i = 0; i < result->rows && er_code == OK; i++) {
      for (int j = 0; j < result->columns; j++) {
        result->matrix[i][j] *= inv_det;
      }
    }
  }
  s21_remove_matrix(&tmp_mtrx);
  return er_code;
}
