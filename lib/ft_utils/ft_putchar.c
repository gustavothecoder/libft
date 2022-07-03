#include "ft_utils.h"

void ft_putchar(char c)
{
    ft_putchar_fd(c, STDOUT_FILENO);
}
