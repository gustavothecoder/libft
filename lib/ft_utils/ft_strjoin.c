#include "ft_utils.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *concatenation = ft_strnew((sizeof(s1) + sizeof(s2)) - 1);

    ft_strcat(concatenation, s1);
    ft_strcat(concatenation, s2);

    return concatenation;
}
