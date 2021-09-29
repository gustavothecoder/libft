CC = gcc
FT_LIBC_FILES = ./lib/ft_libc/ft_memset.c \
				./lib/ft_libc/ft_bzero.c \
				./lib/ft_libc/ft_memcpy.c

ft_libc_tests:
	@echo "Compiling ft_libc tests..."
	$(CC) -o ft_libc_tests.out \
		./tests/c_tester.c \
		./tests/ft_libc_tests.c \
		./tests/ft_libc/ft_memset_tests.c \
		./tests/ft_libc/ft_bzero_tests.c \
		./tests/ft_libc/ft_memcpy_tests.c \
		$(FT_LIBC_FILES)

examples:
	$(CC) -o examples.out ./examples.c $(FT_LIBC_FILES)
