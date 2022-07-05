#include "../../libft.h"

int ft_isprint(int ch)
{
    char ch_array[1] = {(char)ch};
    return ft_isalnum(ch) || ft_strstr(PUNCTUATION_CHARS, ch_array) || ch == ' ';
}
