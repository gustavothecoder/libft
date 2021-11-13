#include "ft_libc.h"

char *ft_strcat(char *dest, const char *src) {
    size_t dest_sz = ft_strlen(dest);
    for (size_t i = dest_sz; *src != '\0'; i++, src++) dest[i] = *src;
    return dest;
}
