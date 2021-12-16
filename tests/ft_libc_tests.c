#include "ft_libc/tests.h"
#include "../lib/ft_libc/ft_libc.h"

int main() {
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
    print_report();
    return 0;
}
