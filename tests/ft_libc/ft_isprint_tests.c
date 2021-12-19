#include "tests.h"

static void when_ch_is_a_number();
static void when_ch_is_a_uppercase_letter();
static void when_ch_is_a_lowercase_letter();
static void when_ch_is_a_punctuation_char();
static void when_ch_is_a_space();
static void when_ch_is_not_printable();

void run_ft_isprint_tests() {
    when_ch_is_a_number();
    when_ch_is_a_uppercase_letter();
    when_ch_is_a_lowercase_letter();
    when_ch_is_a_punctuation_char();
    when_ch_is_a_space();
    when_ch_is_not_printable();
}

static void when_ch_is_a_number() {
    int result = ft_isprint(3);

    assert(result == 1);
}

static void when_ch_is_a_uppercase_letter() {
    int result = ft_isprint('X');

    assert(result == 1);
}

static void when_ch_is_a_lowercase_letter() {
    int result = ft_isprint('x');

    assert(result == 1);
}

static void when_ch_is_a_punctuation_char() {
    int result = ft_isprint('%');

    assert(result == 1);
}

static void when_ch_is_a_space() {
    int result = ft_isprint(' ');

    assert(result == 1);
}

static void when_ch_is_not_printable() {
    int result = ft_isprint('\xa0'); // the non-breaking space in ISO-8859-1

    assert(result == 0);
}
