#include "ft_utils.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *new_s = (char *)malloc(sizeof(s));
    size_t sz = ft_strlen(s);
    for (size_t i = 0; i < sz; i++)
        new_s[i] = f(i, s[i]);
    new_s[sz] = '\0';
    return new_s;
}
