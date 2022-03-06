#include "ft_libc.h"

char *ft_strcat(char *dest, const char *src)
{
    size_t total_src_size = ft_strlen(src) + 1;
    return ft_strncat(dest, src, total_src_size);
}
