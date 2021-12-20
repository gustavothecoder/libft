#include "tests.h"

static void when_ch_is_a_positive_number();
static void when_ch_is_a_negative_number();
static void when_ch_is_not_a_number();

void run_ft_isdigit_tests() {
    when_ch_is_a_positive_number();
    when_ch_is_a_negative_number();
    when_ch_is_not_a_number();
}

static void when_ch_is_a_positive_number() {
    for (int i = 0; i < 10; i++) {
        int result = ft_isdigit(DIGITS[i] - '0');

        assert(result == 1);
    }
}

static void when_ch_is_a_negative_number() {
    int result = ft_isdigit(-5);

    assert(result == 0);
}

static void when_ch_is_not_a_number() {
    int result = ft_isdigit('A');

    assert(result == 0);
}
