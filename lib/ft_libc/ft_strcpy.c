#include "ft_libc.h"

char *ft_strcpy(char *dest, const char *src) {
    int i = 0;
    while (1) {
        dest[i] = src[i];
        if (src[i] == '\0') return dest;
        i++;
    }
}
