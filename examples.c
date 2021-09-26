#include <stdio.h>
#include "my_c_lib.h"

static void run_g_memset_example();
static void run_g_bzero_example();
static void run_g_memcpy_example();

int main() {
    run_g_memset_example();
    run_g_bzero_example();
    run_g_memcpy_example();
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

static void run_g_memcpy_example() {
    printf("--- g_memcpy ---\n");
    char src[] = "hello world";
    char dest[12];
    printf("Before: src = %s, dest = %s (nothing)\n", src, dest);
    g_memcpy(dest, src, sizeof(src));
    printf("Function call: g_memcpy(dest, src, sizeof(src));\n");
    printf("After: src = %s, dest = %s\n", src, dest);
}
