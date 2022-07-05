#include "../../libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t dest_index = ft_strlen(dest);
    for (; dest_index < size && *src != '\0'; dest_index++, src++)
        dest[dest_index] = *src;
    dest[++dest_index] = '\0';
    return dest_index;
}
