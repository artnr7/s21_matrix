GCC = gcc -Wall -Werror -Wextra -std=c11
GCOV_FLAGS = --coverage
CHECK_FLAGS = -lcheck -lm -lsubunit
CFILES = src/*

OBJS = $(CFILES:.c=.o)

# TEST_FILE = 
LIB_FILE = s21_matrix.a

FILES_REPORT = *.gcno *.gcda gcov_test coverage.info gcov_test_lcov report_gcov report_lcov
RM_FILES = test_add test_mul test_sub test_div test_truncate test_compare test_div test_from_decimal_to_int test_from_int_to_decimal
RM_MAIN_FILES =

all: $(LIB_FILE)

# run: $(LIB_FILE)
# 	$(GCC)  s21_matrix.c -L. $(LIB_FILE) -o s21_matrix
# 	./s21_matrix

run: 
	$(GCC)  s21_main.c src/s21_matrix.c -o s21_matrix
	./s21_matrix	

# reb: clean clang all run clean
reb: clean clang run clean

test: $(LIB_FILE)
	$(GCC)  $(TEST_FILE) -L. $(LIB_FILE) $(CHECK_FLAGS) -o test
	./test


$(LIB_FILE): $(OBJS)
	ar rcs $@ $^
	ranlib $@

%.o: %.c
	$(GCC) -c $< -o $@

clean: 
	rm -rf *.o *.a report $(FILES_REPORT) s21_matrix $(RM_FILES) $(RM_MAIN_FILES) 

clang:
	clang-format -i include/*.h src/*.c

gcov_report:
	$(GCC) $(TEST_FILE) $(CFILES) $(CHECK_FLAGS) $(GCOV_FLAGS) -o gcov_test
	./gcov_test
	mkdir -p report_gcov
	gcovr --html-details -o ./report_gcov/report.html

gcov_report_lcov:
	$(GCC) $(TEST_FILE) $(CFILES) $(CHECK_FLAGS) $(GCOV_FLAGS) -o gcov_test_lcov
	./gcov_test_lcov
	lcov --capture --directory . --output-file coverage.info --rc branch_coverage=1
	genhtml --branch-coverage coverage.info --output-directory report_lcov
