#include "ft_libc.h"

char *ft_strnstr(const char *str, const char *substr, size_t count)
{
    if (*substr == '\0')
        return (char *)str;

    int found = 0, substr_i = 0;
    char *result;
    for (int str_i = 0; str[str_i] != '\0' && str_i < count; str_i++)
    {
        if (str[str_i] == substr[substr_i])
        {
            if (substr_i == 0)
                result = (char *)&str[str_i];
            substr_i++;
            if (substr[substr_i] == '\0')
            {
                found = 1;
                break;
            }
        }
        else
        {
            if (substr_i != 0)
                substr_i = 0;
        }
    }
    return found ? result : NULL;
}
