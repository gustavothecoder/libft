#include "ft_utils.h"

void ft_putchar(char c)
{
    int number_of_chars = 1;
    write(STDOUT_FILENO, &c, number_of_chars);
}
