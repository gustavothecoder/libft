#include "tests.h"

static void when_ch_is_ascii();
static void when_ch_is_not_ascii();

void run_ft_isascii_tests() {
    when_ch_is_ascii();
    when_ch_is_not_ascii();
}

static void when_ch_is_ascii() {
    int result = ft_isascii(35); //35 == #

    assert(result == 1);
}

static void when_ch_is_not_ascii() {
    int result = ft_isascii(387);

    assert(result == 0);
}
