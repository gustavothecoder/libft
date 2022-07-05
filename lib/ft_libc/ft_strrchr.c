#include "../../libft.h"

char *ft_strrchr(const char *str, int ch)
{
    unsigned char *unsigned_str = (unsigned char *)str;
    char converted_ch = (char)ch;
    int index = ft_strlen(unsigned_str);
    for (; index >= 0 && unsigned_str[index] != converted_ch; index--)
        ;
    return unsigned_str[index] == converted_ch ? &unsigned_str[index] : NULL;
}
