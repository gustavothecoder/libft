#include "ft_utils.h"

void ft_putstr_fd(char const *s, int fd)
{
    int number_of_chars = ft_strlen(s);
    write(fd, s, number_of_chars);
}
