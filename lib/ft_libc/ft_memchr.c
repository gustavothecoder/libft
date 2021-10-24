#include "ft_libc.h"

void *ft_memchr(const void *ptr, int ch, size_t count) {
    unsigned char *parsed_ptr = (unsigned char *)ptr;
    unsigned char parsed_ch = (unsigned char)ch;
    for (size_t i = 0; i < count; i++) {
        if (parsed_ptr[i] == parsed_ch) return parsed_ptr + i;
    }
    return NULL;
}
