#include "ft_utils.h"

void ft_putendl(char const *s)
{
    ft_putendl_fd(s, STDOUT_FILENO);
}