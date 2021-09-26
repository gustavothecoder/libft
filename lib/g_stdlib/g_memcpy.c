#include <stdio.h>
#include "g_stdlib.h"

void *g_memcpy(void *restrict dest, const void *restrict src, size_t count) {
    unsigned char *converted_src = (unsigned char*)src;
    unsigned char *converted_dest = (unsigned char*)dest;
    for (size_t i = 0; i < count; i++) converted_dest[i] = converted_src[i];
    return dest;
}
