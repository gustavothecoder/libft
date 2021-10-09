#include "ft_libc.h"

void *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t count) {
    unsigned char *parsed_dest = (unsigned char *)dest;
    unsigned char *parsed_src = (unsigned char *)src;
    unsigned char parsed_c = (unsigned char)c;
    for (size_t i = 0; i <= count; i++) {
        parsed_dest[i] = parsed_src[i];
        if (parsed_src[i] == parsed_c) {
            parsed_dest[i + 1] = '\0';
            return parsed_src + (i + 1);
        }
    }
    parsed_dest[count] = '\0';
    return NULL;
}
