#include <stdio.h>
#include "libft.h"

static void run_ft_memset_example();
static void run_ft_bzero_example();
static void run_ft_memcpy_example();
static void run_ft_memccpy_example();
static void run_ft_memmove_example();
static void run_ft_memcmp_example();

int main() {
    run_ft_memset_example();
    run_ft_bzero_example();
    run_ft_memcpy_example();
    run_ft_memccpy_example();
    run_ft_memmove_example();
    run_ft_memcmp_example();
    return 0;
}

static void run_ft_memset_example() {
    printf("--- ft_memset ---\n");
    char str[] = "hello world";
    printf("Before: %s\n", str);
    ft_memset(str, 'a', 3);
    printf("Function call: ft_memset(str, 'a', 3);\n");
    printf("After: %s\n", str);
}

static void run_ft_bzero_example() {
    printf("--- ft_bzero ---\n");
    char str[] = "hello world";
    printf("Before: %s\n", str);
    ft_bzero(str, sizeof(str));
    printf("Function call: ft_bzero(str, sizeof(str));\n");
    printf("After: %s (was erased)\n", str);
}

static void run_ft_memcpy_example() {
    printf("--- ft_memcpy ---\n");
    char src[] = "hello world";
    char dest[12];
    printf("Before: src = %s, dest = %s (nothing)\n", src, dest);
    ft_memcpy(dest, src, sizeof(src));
    printf("Function call: ft_memcpy(dest, src, sizeof(src));\n");
    printf("After: src = %s, dest = %s\n", src, dest);
}

static void run_ft_memccpy_example() {
    printf("--- ft_memccpy ---\n");
    char src[] = "hello world";
    char dest[12] = {'\0'};
    printf("Before: src = %s, dest = %s (nothing)\n", src, dest);
    ft_memccpy(dest, src, ' ', sizeof src);
    printf("Function call: ft_memccpy(dest, src, ' ', sizeof src);\n");
    printf("After: src = %s, dest = %s\n", src, dest);
}

static void run_ft_memmove_example() {
    printf("--- ft_memmove ---\n");
    char src[] = "hello world";
    char dest[12] = {'\0'};
    printf("Before: src = %s, dest = %s (nothing)\n", src, dest);
    ft_memmove(dest, src, sizeof(src));
    printf("Function call: ft_memmove(dest, src, sizeof(src));\n");
    printf("After: src = %s, dest = %s\n", src, dest);
}

static void run_ft_memcmp_example() {
    printf("--- ft_memcmp ---\n");
    char lhs[] = "hello world";
    char rhs[] = "hello world!";
    printf("Parameters: lhs = %s, rhs = %s\n", lhs, rhs);
    int result = ft_memcmp(lhs, rhs, sizeof(lhs));
    printf("Function call: ft_memcmp(lhs, rhs, sizeof(lhs));\n");
    printf("Result: %i\n", result);
}
