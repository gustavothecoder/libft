#include "c_tester.h"

#define WHITE "\033[0m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"

int c_tester_successful_count = 0, c_tester_failure_count = 0;

static void print_result(bool assertion_result, char caller[], int line);
static void set_color(char *color);

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

void print_report() {
    printf("-------------------- Result --------------------\n");
    printf("Successful: ");
    if (c_tester_failure_count > 0) set_color(YELLOW);
    else set_color(GREEN);
    printf("%d\n", c_tester_successful_count);
    set_color(WHITE);
    printf("Failure:    ");
    if (c_tester_failure_count > 0) set_color(RED);
    else set_color(GREEN);
    printf("%d\n", c_tester_failure_count);
    set_color(WHITE);
    printf("Total:      %d\n", c_tester_successful_count + c_tester_failure_count);
}

static void print_result(bool assertion_result, char caller[], int line) {
    if (assertion_result) {
        set_color(GREEN);
        printf("Success ");
        c_tester_successful_count++;
    } else {
        set_color(RED);
        printf("Failure ");
        c_tester_failure_count++;
    }
    set_color(WHITE);
    printf("in %s:%i\n", caller, line);
}

static void set_color(char *color) {
    printf(color);
}
