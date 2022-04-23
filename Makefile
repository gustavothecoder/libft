CC = gcc
DEFAULT_CC_FLAGS = -g -o
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
				./lib/ft_libc/ft_strnstr.c \
				./lib/ft_libc/ft_strcmp.c \
				./lib/ft_libc/ft_strncmp.c \
				./lib/ft_libc/ft_atoi.c \
				./lib/ft_libc/ft_isalpha.c \
				./lib/ft_libc/ft_isdigit.c \
				./lib/ft_libc/ft_isalnum.c \
				./lib/ft_libc/ft_isascii.c \
				./lib/ft_libc/ft_isprint.c \
				./lib/ft_libc/ft_toupper.c \
				./lib/ft_libc/ft_tolower.c

FT_UTILS_FILES = ./lib/ft_utils/ft_memalloc.c \
				 ./lib/ft_utils/ft_memdel.c \
				 ./lib/ft_utils/ft_strnew.c \
				 ./lib/ft_utils/ft_strdel.c \
				 ./lib/ft_utils/ft_strclr.c \
				 ./lib/ft_utils/ft_striter.c \
				 ./lib/ft_utils/ft_striteri.c \
				 ./lib/ft_utils/ft_strmap.c \
				 ./lib/ft_utils/ft_strmapi.c \
				 ./lib/ft_utils/ft_strequ.c \
				 ./lib/ft_utils/ft_strnequ.c \
				 ./lib/ft_utils/ft_strsub.c \
				 ./lib/ft_utils/ft_strjoin.c \
				 ./lib/ft_utils/ft_strtrim.c

ft_libc_tests:
	@echo "Compiling ft_libc tests..."
	$(CC) $(DEFAULT_CC_FLAGS) ft_libc_tests.out \
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
		./tests/ft_libc/ft_strcmp_tests.c \
		./tests/ft_libc/ft_strncmp_tests.c \
		./tests/ft_libc/ft_atoi_tests.c \
		./tests/ft_libc/ft_isalpha_tests.c \
		./tests/ft_libc/ft_isdigit_tests.c \
		./tests/ft_libc/ft_isalnum_tests.c \
		./tests/ft_libc/ft_isascii_tests.c \
		./tests/ft_libc/ft_isprint_tests.c \
		./tests/ft_libc/ft_toupper_tests.c \
		./tests/ft_libc/ft_tolower_tests.c \
		$(FT_LIBC_FILES)

ft_utils_tests:
	@echo "Compiling ft_utils tests..."
	$(CC) $(DEFAULT_CC_FLAGS) ft_utils_tests.out \
		./tests/c_tester.c \
		$(FT_LIBC_FILES) \
		./tests/ft_utils_tests.c \
		./tests/ft_utils/ft_memalloc_tests.c \
		./tests/ft_utils/ft_memdel_tests.c \
		./tests/ft_utils/ft_strnew_tests.c \
		./tests/ft_utils/ft_strdel_tests.c \
		./tests/ft_utils/ft_strclr_tests.c \
		./tests/ft_utils/ft_striter_tests.c \
		./tests/ft_utils/ft_striteri_tests.c \
		./tests/ft_utils/ft_strmap_tests.c \
		./tests/ft_utils/ft_strmapi_tests.c \
		./tests/ft_utils/ft_strequ_tests.c \
		./tests/ft_utils/ft_strnequ_tests.c \
		./tests/ft_utils/ft_strsub_tests.c \
		./tests/ft_utils/ft_strjoin_tests.c \
		./tests/ft_utils/ft_strtrim_tests.c \
		$(FT_UTILS_FILES)

tests: ft_libc_tests ft_utils_tests

examples:
	$(CC) $(DEFAULT_CC_FLAGS) examples.out ./examples.c $(FT_LIBC_FILES)

clean:
	rm examples.out ft_libc_tests.out
