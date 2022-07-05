#include "../../libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    size_t sz = ft_strlen(s);
    for (size_t i = 0; i < sz; i++)
        f(i, s);
}
