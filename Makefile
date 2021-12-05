CC = gcc
FT_LIBC_FILES = ./lib/ft_libc/ft_memset.c \
				./lib/ft_libc/ft_bzero.c \
				./lib/ft_libc/ft_memcpy.c \
				./lib/ft_libc/ft_memccpy.c \
				./lib/ft_libc/ft_memmove.c \
				./lib/ft_libc/ft_memcmp.c \
				./lib/ft_libc/ft_memchr.c \
				./lib/ft_libc/ft_strlen.c \
				./lib/ft_libc/ft_strdup.c \
				./lib/ft_libc/ft_strcpy.c \
				./lib/ft_libc/ft_strncpy.c \
				./lib/ft_libc/ft_strcat.c \
				./lib/ft_libc/ft_strncat.c \
				./lib/ft_libc/ft_strlcat.c \
				./lib/ft_libc/ft_strchr.c \
				./lib/ft_libc/ft_strrchr.c \
				./lib/ft_libc/ft_strstr.c \
				./lib/ft_libc/ft_strnstr.c

ft_libc_tests:
	@echo "Compiling ft_libc tests..."
	$(CC) -o ft_libc_tests.out \
		./tests/c_tester.c \
		./tests/ft_libc_tests.c \
		./tests/ft_libc/ft_memset_tests.c \
		./tests/ft_libc/ft_bzero_tests.c \
		./tests/ft_libc/ft_memcpy_tests.c \
		./tests/ft_libc/ft_memccpy_tests.c \
		./tests/ft_libc/ft_memmove_tests.c \
		./tests/ft_libc/ft_memcmp_tests.c \
		./tests/ft_libc/ft_memchr_tests.c \
		./tests/ft_libc/ft_strlen_tests.c \
		./tests/ft_libc/ft_strdup_tests.c \
		./tests/ft_libc/ft_strcpy_tests.c \
		./tests/ft_libc/ft_strncpy_tests.c \
		./tests/ft_libc/ft_strcat_tests.c \
		./tests/ft_libc/ft_strncat_tests.c \
		./tests/ft_libc/ft_strlcat_tests.c \
		./tests/ft_libc/ft_strchr_tests.c \
		./tests/ft_libc/ft_strrchr_tests.c \
		./tests/ft_libc/ft_strstr_tests.c \
		./tests/ft_libc/ft_strnstr_tests.c \
		$(FT_LIBC_FILES)

examples:
	$(CC) -o examples.out ./examples.c $(FT_LIBC_FILES)

clean:
	rm examples.out ft_libc_tests.out
