#include "ft_utils.h"

static int is_whitespace(char c);

char *ft_strtrim(char const *s)
{
    int first = 0, last = ft_strlen(s), first_check, last_check;
    while (first < last)
    {
        first_check = is_whitespace(s[first]), last_check = is_whitespace(s[last]);
        if (first_check)
            first++;
        if (last_check)
            last--;
        if (!first_check && !last_check)
            break;
    }

    size_t size_with_final_char = (last + 1) - (first - 1) * sizeof(char);
    char *result = ft_strnew(size_with_final_char);
    for (size_t i = 0; i < size_with_final_char - 1; i++)
        result[i] = s[first + i];
    result[size_with_final_char - 1] = '\0';

    return result;
}

static int is_whitespace(char c)
{
    return c == ' ' || c == '\n' || c == '\t' ? 1 : 0;
}
