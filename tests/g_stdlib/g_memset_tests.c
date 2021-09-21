#include <stdint.h>
#include "tests.h"

void when_all_parameters_are_right();
void when_a_null_pointer_are_sent();
void when_count_is_greater_than_size_max();

void run_g_memset_tests() {
    when_all_parameters_are_right();
    when_a_null_pointer_are_sent();
    when_count_is_greater_than_size_max();
}

void when_all_parameters_are_right() {
    char str[] = "ghghghghghghghghghghgh";

    char *result = (char *)g_memset(&str, 'a', 5);

    assert_string(str,  "aaaaahghghghghghghghgh", 22);
    assert_string(result, "aaaaahghghghghghghghgh", 22);
    assert(result == str);
}

void when_a_null_pointer_are_sent() {
    char *null_pointer = NULL;

    char *result = (char *)g_memset(&null_pointer, 'a', 5);

    assert(null_pointer == NULL);
    assert(result == NULL);
}

void when_count_is_greater_than_size_max() {
    char str[] = "ghghghghghghghghghghgh";

    char *result = (char *)g_memset(&str, 'a', SIZE_MAX + 1);

    assert_string(str,  "ghghghghghghghghghghgh", 22);
    assert(result != str);
}
