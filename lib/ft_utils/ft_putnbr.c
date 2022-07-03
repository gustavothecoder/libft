#include "ft_utils.h"

void ft_putnbr(int n)
{
    char *n_str = ft_itoa(n);
    ft_putstr(n_str);
}