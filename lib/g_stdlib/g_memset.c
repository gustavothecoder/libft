#include <stdbool.h>
#include <stdint.h>
#include "g_stdlib.h"

bool is_valid(void *dest, size_t count);

void *g_memset(void *dest, int ch, size_t count) {
    if (is_valid(dest, count)) {
        unsigned char converted_ch = (unsigned char) ch;
        unsigned char *dest_pointer = (unsigned char *) dest;
        for (int i = 0; i < count; i++) dest_pointer[i] = ch;
        return dest;
    }
}

bool is_valid(void *dest, size_t count) {
    return *(int *)dest != 0 && (count > 0 && count < SIZE_MAX);
}
