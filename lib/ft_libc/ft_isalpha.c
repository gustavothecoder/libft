#include "ft_libc.h"

// to-do: make this dynamic by the default locale
int ft_isalpha(int ch) {
    char ch_array[1] = {(char)ch};
    if (ft_strstr(UPPERCASE_ALPHABET, ch_array) != NULL || ft_strstr(LOWERCASE_ALPHABET, ch_array) != NULL)
        return 1;
    return 0;
}
