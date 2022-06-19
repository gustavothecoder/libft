CC = gcc
DEFAULT_CC_FLAGS = -g -o
FT_LIBC_SRC = ./lib/ft_libc/*.c
FT_UTILS_SRC = ./lib/ft_utils/*.c

ft_libc_tests:
	@echo "Compiling ft_libc tests..."
	$(CC) $(DEFAULT_CC_FLAGS) ft_libc_tests.out \
		./tests/c_tester.c \
		./tests/ft_libc_tests.c \
		./tests/ft_libc/*.c \
		$(FT_LIBC_SRC)

ft_utils_tests:
	@echo "Compiling ft_utils tests..."
	$(CC) $(DEFAULT_CC_FLAGS) ft_utils_tests.out \
		./tests/c_tester.c \
		./tests/ft_utils_tests.c \
		./tests/ft_utils/*.c \
		$(FT_LIBC_SRC) \
		$(FT_UTILS_SRC)

tests: ft_libc_tests ft_utils_tests

examples:
	$(CC) $(DEFAULT_CC_FLAGS) examples.out ./examples.c $(FT_LIBC_SRC)

clean:
	rm *.out
