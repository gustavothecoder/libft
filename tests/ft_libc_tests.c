#include "../lib/ft_libc/ft_libc.h"
#include "ft_libc/tests.h"

int main() {
    run_ft_memset_tests();
    run_ft_bzero_tests();
    run_ft_memcpy_tests();

    return 0;
}
