GCC = gcc -Wall -Werror -Wextra -std=c11
GCOV_FLAGS = --coverage
CHECK_FLAGS = -lcheck -lm -lsubunit
CFILES = $(wildcard src/*.c)
HFILES = $(wildcard include/*.h)
TEST_FILES_CLANG = $(wildcard test/*)

OBJS = $(CFILES:.c=.o)

LIB_FILE = s21_matrix.a
TEST_FILES = $(wildcard test/*.c)

FILES_REPORT = *.gcno *.gcda gcov_test coverage.info gcov_test_lcov  report_lcov
RM_FILES =  test_f s21_create_matrix_test s21_matrix.a $(wildcard src/*.o)
RM_MAIN_FILES = s21_matrix

all: $(LIB_FILE)

rebuild: clean clang all clean

test: clean $(LIB_FILE)
	$(GCC) $(TEST_FILES) -L. $(LIB_FILE) $(CHECK_FLAGS) -o test_f
	./test_f

test_valgrind: $(LIB_FILE)
	$(CC) $(FLAGS) $(TEST_FILES) -L. $(LIB_FILE) $(CHECK_FLAGS) -o test_f
	valgrind --tool=memcheck --leak-check=full ./test_f

gcov_report: clean
	$(CC) $(FLAGS) $(TEST_FILES) $(CFILES) $(CHECK_FLAGS) $(GCOV_FLAGS) -o gcov_test_lcov
	./gcov_test_lcov
	lcov --capture --directory . --output-file coverage.info
	genhtml coverage.info --output-directory report_lcov

$(LIB_FILE): $(OBJS)
	ar rcs $@ $^
	ranlib $@

%.o: %.c
	$(GCC) -c $< -o $@

clean: 
	rm -rf *.o *.a report $(FILES_REPORT)  $(RM_FILES) $(RM_MAIN_FILES) 

clang:
	clang-format-18 -i $(CFILES) $(HFILES) $(TEST_FILES_CLANG)