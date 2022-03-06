#include "ft_libc.h"

char *ft_strncat(char *dest, const char *src, size_t count)
{
    size_t initial_index = ft_strlen(dest);
    size_t dest_index = initial_index;
    size_t copy_counter = 0;
    for (; *src != '\0' && copy_counter < count; dest_index++, copy_counter++, src++)
        dest[dest_index] = *src;
    dest[++dest_index] = '\0';
    return dest;
}
