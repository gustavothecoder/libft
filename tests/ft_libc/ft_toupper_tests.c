#include "tests.h"

static void when_ch_can_be_converted_to_uppercase();
static void when_ch_cannot_be_converted_to_uppercase();
static void when_ch_is_already_an_uppercase_letter();

void run_ft_toupper_tests()
{
    when_ch_can_be_converted_to_uppercase();
    when_ch_cannot_be_converted_to_uppercase();
    when_ch_is_already_an_uppercase_letter();
}

static void when_ch_can_be_converted_to_uppercase()
{
    int result;
    for (int i = 0; i < 26; i++)
    {
        result = ft_toupper(LOWERCASE_ALPHABET[i]);

        assert(result == UPPERCASE_ALPHABET[i]);
    }
}

static void when_ch_cannot_be_converted_to_uppercase()
{
    int result = ft_toupper('\xb8'); // the character Ž in ISO-8859-15

    assert(result == '\xb8');
}

static void when_ch_is_already_an_uppercase_letter()
{
    int result = ft_toupper('G');

    assert(result == 'G');
}
