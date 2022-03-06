#include "ft_libc.h"

int ft_toupper(int ch)
{
    int ch_position = 0;
    for (ch_position; LOWERCASE_ALPHABET[ch_position] != '\0'; ch_position++)
        if (LOWERCASE_ALPHABET[ch_position] == ch)
            return UPPERCASE_ALPHABET[ch_position];
    return ch;
}
