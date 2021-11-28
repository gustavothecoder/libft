#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

extern int c_tester_successful_count, c_tester_failure_count;

#define assert(assertion_result) call_print_result(assertion_result, __FILE__, __LINE__)
#define assert_array(arr1, arr2, size) compare_arrays(arr1, arr2, size, __FILE__, __LINE__)

void call_print_result(bool assertion_result, char caller[], int line);
void compare_arrays(const void *arr1, const void *arr2, size_t size, char caller[], int line);
void print_report();
