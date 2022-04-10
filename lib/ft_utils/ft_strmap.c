#include "ft_utils.h"

char *ft_strmap(char const *s, char (*f)(char))
{
    char *new_s = (char *)malloc(sizeof(s));
    size_t sz = ft_strlen(s);
    for (size_t i = 0; i < sz; i++)
        new_s[i] = f(s[i]);
    new_s[sz] = '\0';
    return new_s;
}
