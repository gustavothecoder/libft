#include "../lib/g_stdlib/g_stdlib.h"
#include "g_stdlib/tests.h"

int main() {
    run_g_memset_tests();
    run_g_bzero_tests();

    return 0;
}
