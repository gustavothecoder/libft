#include "ft_libc/tests.h"
#include "../libft.h"

int main()
{
    run_ft_memset_tests();
    run_ft_bzero_tests();
    run_ft_memcpy_tests();
    run_ft_memccpy_tests();
    run_ft_memmove_tests();
    run_ft_memcmp_tests();
    run_ft_memchr_tests();
    run_ft_strlen_tests();
    run_ft_strdup_tests();
    run_ft_strcpy_tests();
    run_ft_strncpy_tests();
    run_ft_strcat_tests();
    run_ft_strncat_tests();
    run_ft_strlcat_tests();
    run_ft_strchr_tests();
    run_ft_strrchr_tests();
    run_ft_strstr_tests();
    run_ft_strnstr_tests();
    run_ft_strcmp_tests();
    run_ft_strncmp_tests();
    run_ft_atoi_tests();
    run_ft_isalpha_tests();
    run_ft_isdigit_tests();
    run_ft_isalnum_tests();
    run_ft_isascii_tests();
    run_ft_isprint_tests();
    run_ft_toupper_tests();
    run_ft_tolower_tests();
    print_report();
    return 0;
}
