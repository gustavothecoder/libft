#include "../../libft.h"

int ft_tolower(int ch)
{
    int ch_position = 0;
    for (ch_position; UPPERCASE_ALPHABET[ch_position] != '\0'; ch_position++)
        if (UPPERCASE_ALPHABET[ch_position] == ch)
            return LOWERCASE_ALPHABET[ch_position];
    return ch;
}
