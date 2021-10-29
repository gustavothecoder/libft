#include "tests.h"

static void when_a_empty_string_is_sent();
static void when_a_common_string_is_sent();

void run_ft_strlen_tests() {
    when_a_empty_string_is_sent();
    when_a_common_string_is_sent();
}

static void when_a_empty_string_is_sent() {
    const char str[] = "";

    size_t ans = ft_strlen(str);

    assert(ans == 0);
}

static void when_a_common_string_is_sent() {
    const char str[] = "How many characters does this string contain?";

    size_t ans = ft_strlen(str);

    assert(ans == 45);
}
