#include "ft_libc.h"

int ft_isalpha(int ch) {
    char *uppercase_alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *lowercase_alphabet = "abcdefghijklmnopqrstuvwxyz";
    char ch_array[1] = {(char)ch};
    if (ft_strstr(uppercase_alphabet, ch_array) != NULL || ft_strstr(lowercase_alphabet, ch_array) != NULL)
        return 1;
    return 0;
}
