#include "tests.h"

static void when_count_is_less_than_src_size();
static void when_count_is_equal_to_src_size();
static void when_count_is_greater_than_src_size();

void run_ft_strncat_tests() {
    when_count_is_less_than_src_size();
    when_count_is_equal_to_src_size();
    when_count_is_greater_than_src_size();
}

static void when_count_is_less_than_src_size() {
    char dest[15] = "Hello ";
    char src[7] = "World!";

    char *result = ft_strncat(dest, src, 3);

    assert_array(dest, "Hello Wor\0", 10);
    assert(result == dest);
}

static void when_count_is_equal_to_src_size() {
    char dest[15] = "Hello ";
    char src[7] = "World!";

    char *result = ft_strncat(dest, src, 6);

    assert_array(dest, "Hello World!\0", 13);
    assert(result == dest);
}

static void when_count_is_greater_than_src_size() {
    char dest[15] = "Hello ";
    char src[7] = "World!";

    char *result = ft_strncat(dest, src, 12);

    assert_array(dest, "Hello World!\0", 13);
    assert(result == dest);
}
