#include "ft_utils.h"

void ft_putnbr(int n)
{
    ft_putnbr_fd(n, STDOUT_FILENO);
}