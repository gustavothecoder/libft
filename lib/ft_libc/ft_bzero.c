#include "../../libft.h"

void ft_bzero(void *dest, size_t count)
{
    ft_memset(dest, '\0', count);
}
