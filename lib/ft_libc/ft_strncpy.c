#include "ft_libc.h"

char *ft_strncpy(char *dest, const char *src, size_t count)
{
    size_t src_last_index = ft_strlen(src) - 1;
    for (size_t i = 0; i < count; i++)
        dest[i] = i <= src_last_index ? src[i] : '\0';
    return dest;
}
