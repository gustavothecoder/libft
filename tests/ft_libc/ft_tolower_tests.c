#include "tests.h"

static void when_ch_can_be_converted_to_lowercase();
static void when_ch_cannot_be_converted_to_lowercase();
static void when_ch_is_already_an_lowercase_letter();

void run_ft_tolower_tests() {
    when_ch_can_be_converted_to_lowercase();
    when_ch_cannot_be_converted_to_lowercase();
    when_ch_is_already_an_lowercase_letter();
}

static void when_ch_can_be_converted_to_lowercase() {
    int result;
    for (int i = 0; i < 26;  i++) {
        result = ft_tolower(UPPERCASE_ALPHABET[i]);

        assert(result == LOWERCASE_ALPHABET[i]);
    }
}

static void when_ch_cannot_be_converted_to_lowercase() {
    int result = ft_tolower('3');

    assert(result == '3');
}

static void when_ch_is_already_an_lowercase_letter() {
    int result = ft_tolower('a');

    assert(result == 'a');
}
