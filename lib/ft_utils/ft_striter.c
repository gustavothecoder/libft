#include "ft_utils.h"

void ft_striter(char *s, void (*f)(char *))
{
    for(; *s != '\0'; s++)
        f(s);
}
