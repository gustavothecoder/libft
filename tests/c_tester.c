#include <stdio.h>
#include "c_tester.h"

void print_result(bool assertion_result, char caller[], int line);

void compare_strings(char string1[], char string2[], size_t size, char caller[], int line) {
    bool result = true;
    for (int i = 0; i < size; i++) {
        if (string1[i] != string2[i]) {
            result = false;
            break;
        }
    }
    print_result(result, caller, line);
}

void print_result(bool assertion_result, char caller[], int line) {
    if (assertion_result) {
        printf("\033[0;32m");
        printf("\nSuccess ");
    } else {
        printf("\033[0;31m");
        printf("\nFailure ");
    }
    printf("\033[0m");
    printf("in %s:%i\n", caller, line);
}
