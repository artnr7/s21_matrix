GCC = gcc -Wall -Werror -Wextra -std=c11
GCOV_FLAGS = --coverage
CHECK_FLAGS = -lcheck -lm -lsubunit
CFILES = $(wildcard src/*.c)

OBJS = $(CFILES:.c=.o)

TESTS_FILE = test/tests.c
LIB_FILE = s21_matrix.a
TEST_FILES = $(filter-out $(TESTS_FILE),$(wildcard test/*.c))

FILES_REPORT = *.gcno *.gcda gcov_test coverage.info gcov_test_lcov report_gcov report_lcov
RM_FILES = tests_f test_f s21_create_matrix_test s21_matrix.a $(wildcard src/*.o)
RM_MAIN_FILES = s21_matrix

all: $(LIB_FILE)

run: $(LIB_FILE)
	$(GCC)  s21_main.c -L. $(LIB_FILE) -o s21_matrix
	./s21_matrix	


reb: clean clang all run clean

tests: clean $(LIB_FILE)
	$(GCC) $(TESTS_FILE) -L. $(LIB_FILE) $(CHECK_FLAGS) -o tests_f
	./tests_f

test: clean $(LIB_FILE)
	$(GCC) $(TEST_FILES) -L. $(LIB_FILE) $(CHECK_FLAGS) -o test_f
	./test_f

test_valgrind: $(LIB_FILE)
	$(CC) $(FLAGS) $(TESTS_FILE) -L. $(LIB_FILE) $(CHECK_FLAGS) -o test_f
	valgrind --tool=memcheck --leak-check=full ./test_f



$(LIB_FILE): $(OBJS)
	ar rcs $@ $^
	ranlib $@

%.o: %.c
	$(GCC) -c $< -o $@

clean: 
	rm -rf *.o *.a report $(FILES_REPORT)  $(RM_FILES) $(RM_MAIN_FILES) 

clang:
	clang-format -i $(CFILES)

gcov_report:
	$(GCC) $(TESTS_FILE) $(CFILES) $(CHECK_FLAGS) $(GCOV_FLAGS) -o gcov_test
	./gcov_test
	mkdir -p report_gcov
	gcovr --html-details -o ./report_gcov/report.html

gcov_report_lcov:
	$(GCC) $(TESTS_FILE) $(CFILES) $(CHECK_FLAGS) $(GCOV_FLAGS) -o gcov_test_lcov
	./gcov_test_lcov
	lcov --capture --directory . --output-file coverage.info --rc branch_coverage=1
	genhtml --branch-coverage coverage.info --output-directory report_lcov
