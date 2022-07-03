#include "ft_utils.h"

void ft_putstr(char const *s)
{
    int number_of_chars = ft_strlen(s);
    write(STDOUT_FILENO, s, number_of_chars);
}
