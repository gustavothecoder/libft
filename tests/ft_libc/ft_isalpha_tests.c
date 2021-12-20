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
    // to-do: remove result declaration from the for loop
    for (int i = 0; i < 26; i++) {
        int result = ft_isalpha(UPPERCASE_ALPHABET[i]);

        assert(result == 1);
    }
}

static void when_ch_is_an_alphabetic_lowercase_letter() {
    // to-do: remove result declaration from the for loop
    for (int i = 0; i < 26; i++) {
        int result = ft_isalpha(LOWERCASE_ALPHABET[i]);

        assert(result == 1);
    }
}

static void when_ch_is_not_an_alphabetic_letter() {
    int result = ft_isalpha('\xdf'); // German letter ß in ISO-8859-1

    assert(result == 0);
}
