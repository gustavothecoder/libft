#include "ft_libc.h"

char *ft_strcat(char *dest, const char *src) {
    size_t dest_sz = ft_strlen(dest);
    size_t i = dest_sz;
    for (i; *src != '\0'; i++, src++) dest[i] = *src;
    dest[++i] = '\0';
    return dest;
}
