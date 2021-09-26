#include "tests.h"
#include <stdint.h>

static void when_all_parameters_are_right();
static void when_a_null_pointer_are_sent();
static void when_count_is_greater_than_size_max();

void run_g_bzero_tests() {
    when_all_parameters_are_right();
    when_a_null_pointer_are_sent();
    when_count_is_greater_than_size_max();
}

static void when_all_parameters_are_right() {
    char str[] = "ghghghghghghghghghghgh";
    int str_size = sizeof(str);

    g_bzero(&str, str_size);

    assert(*str == '\0');
}

static void when_a_null_pointer_are_sent() {
    char *null_pointer = NULL;

    g_bzero(&null_pointer, 5);

    assert(null_pointer == NULL);
}

static void when_count_is_greater_than_size_max() {
    char str[] = "ghghghghghghghghghghgh";

    g_bzero(&str, SIZE_MAX + 1);

    assert_array(str,  "ghghghghghghghghghghgh", 22);
}
