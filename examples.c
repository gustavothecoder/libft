#include <stdio.h>
#include "my_c_lib.h"

void run_g_memset_example();

int main() {
    run_g_memset_example();
    return 0;
}

void run_g_memset_example() {
    printf("--- g_memset ---\n");
    char str[] = "hello world";
    printf("Before: %s\n", str);
    g_memset(str, 'a', 3);
    printf("Function call: g_memset(str, 'a', 3);\n");
    printf("After: %s\n", str);
}
