#include "c_tester.h"

static void print_result(bool assertion_result, char caller[], int line);

void call_print_result(bool assertion_result, char caller[], int line) {
    print_result(assertion_result, caller, line);
}

void compare_arrays(const void *arr1, const void *arr2, size_t sz, char caller[], int line) {
    unsigned char *a = (unsigned char*)arr1;
    unsigned char *b = (unsigned char*)arr2;
    int result = 1;
    for (size_t i = 0; i < sz; i++) if (a[i] != b[i]) result = 0;
    print_result(result, caller, line);
}

static void print_result(bool assertion_result, char caller[], int line) {
    if (assertion_result) {
        printf("\033[0;32m");
        printf("Success ");
    } else {
        printf("\033[0;31m");
        printf("Failure ");
    }
    printf("\033[0m");
    printf("in %s:%i\n", caller, line);
}
