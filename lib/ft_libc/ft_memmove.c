#include "ft_libc.h"

void *ft_memmove(void *dest, const void *src, size_t count) {
    unsigned char *parsed_dest = (unsigned char *)dest;
    unsigned char *parsed_src = (unsigned char *)src;
    unsigned char temp[count];
    for (size_t i = 0; i < count; i++) {
        temp[i] = parsed_src[i];
        parsed_dest[i] = temp[i];
    }
    return dest;
}
