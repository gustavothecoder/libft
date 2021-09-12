#include "tests.h"
#include <stdio.h>

void run_g_bzero_tests() {
    char str[] = "ghghghghghghghghghghgh";
    int str_size = sizeof(str);
    g_bzero(&str, str_size);
    assert_null(str);
}