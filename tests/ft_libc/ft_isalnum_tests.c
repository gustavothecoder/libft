#include "tests.h"

static void when_ch_is_a_positive_number();
static void when_ch_is_a_negative_number();
static void when_ch_is_a_uppercase_alphabet_char();
static void when_ch_is_a_lowercase_alphabet_char();
static void when_ch_is_not_an_alphanumeric_char();

void run_ft_isalnum_tests() {
    when_ch_is_a_positive_number();
    when_ch_is_a_negative_number();
    when_ch_is_a_uppercase_alphabet_char();
    when_ch_is_a_lowercase_alphabet_char();
    when_ch_is_not_an_alphanumeric_char();
}

static void when_ch_is_a_positive_number() {
    int result = ft_isalnum(7);

    assert(result == 1);
}

static void when_ch_is_a_negative_number() {
    int result = ft_isalnum(-7);

    assert(result == 0);
}

static void when_ch_is_a_uppercase_alphabet_char() {
    int result = ft_isalnum('G');

    assert(result == 1);
}

static void when_ch_is_a_lowercase_alphabet_char() {
    int result = ft_isalnum('g');

    assert(result == 1);
}

static void when_ch_is_not_an_alphanumeric_char() {
    int result = ft_isalnum('\xdf'); // German letter ß in ISO-8859-1

    assert(result == 0);
}
