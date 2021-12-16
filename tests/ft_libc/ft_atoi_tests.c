#include "tests.h"

static void when_the_str_has_more_than_numbers();
static void when_the_str_has_only_a_valid_number();
static void when_the_str_is_not_a_valid_number();
static void when_the_str_is_the_max_int_number();
static void when_the_str_exceeds_the_max_int_number();

void run_ft_atoi_tests() {
    when_the_str_has_more_than_numbers();
    when_the_str_has_only_a_valid_number();
    when_the_str_is_not_a_valid_number();
    when_the_str_is_the_max_int_number();
    when_the_str_exceeds_the_max_int_number();
}

static void when_the_str_has_more_than_numbers() {
    int result = ft_atoi(" -123junk");

    assert(result == -123);
}

static void when_the_str_has_only_a_valid_number() {
    int result = ft_atoi("1234");

    assert(result == 1234);
}

static void when_the_str_is_not_a_valid_number() {
    int result = ft_atoi("junk");

    assert(result == 0);
}

static void when_the_str_is_the_max_int_number() {
    int result = ft_atoi("2147483647");

    assert(result == 2147483647);
}

static void when_the_str_exceeds_the_max_int_number() {
    int result = ft_atoi("2147483648");

    assert(result == -2147483648);
}
