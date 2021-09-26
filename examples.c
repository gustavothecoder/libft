#include <stdio.h>
#include "my_c_lib.h"

static void run_g_memset_example();
static void run_g_bzero_example();

int main() {
    run_g_memset_example();
    run_g_bzero_example();
    return 0;
}

static void run_g_memset_example() {
    printf("--- g_memset ---\n");
    char str[] = "hello world";
    printf("Before: %s\n", str);
    g_memset(str, 'a', 3);
    printf("Function call: g_memset(str, 'a', 3);\n");
    printf("After: %s\n", str);
}

static void run_g_bzero_example() {
    printf("--- g_bzero ---\n");
    char str[] = "hello world";
    printf("Before: %s\n", str);
    g_bzero(str, sizeof(str));
    printf("Function call: g_bzero(str, sizeof(str));\n");
    printf("After: %s (was erased)\n", str);
}
