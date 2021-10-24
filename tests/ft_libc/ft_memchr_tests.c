#include "tests.h"

static void when_ch_is_found();
static void when_ch_is_not_found();

void run_ft_memchr_tests() {
    when_ch_is_found();
    when_ch_is_not_found();
}

static void when_ch_is_found() {
    char str[] = "ABCDEFG";

    void *result = ft_memchr(str, 'D', sizeof str);

    assert_array(result, "DEFG", 4);
}

static void when_ch_is_not_found() {
    char str[] = "ABCDEFG";

    void *result = ft_memchr(str, 'D', 2);

    assert(result == NULL);
}
