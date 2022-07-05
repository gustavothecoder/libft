#include "../../libft.h"

void ft_putchar_fd(char c, int fd)
{
    int number_of_chars = 1;
    write(fd, &c, number_of_chars);
}