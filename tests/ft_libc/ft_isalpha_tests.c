#include "tests.h"

static void when_ch_is_an_alphabetic_uppercase_letter();
static void when_ch_is_an_alphabetic_lowercase_letter();
static void when_ch_is_not_an_alphabetic_letter();

void run_ft_isalpha_tests() {
    when_ch_is_an_alphabetic_uppercase_letter();
    when_ch_is_an_alphabetic_lowercase_letter();
    when_ch_is_not_an_alphabetic_letter();
}

static void when_ch_is_an_alphabetic_uppercase_letter() {
    int result = ft_isalpha('A');

    assert(result == 1);
}

static void when_ch_is_an_alphabetic_lowercase_letter() {
    int result = ft_isalpha('g');

    assert(result == 1);
}

static void when_ch_is_not_an_alphabetic_letter() {
    int result = ft_isalpha('\xdf'); // German letter ß in ISO-8859-1

    assert(result == 0);
}
