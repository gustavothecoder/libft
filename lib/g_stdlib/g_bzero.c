#include "g_stdlib.h"

void g_bzero(void *dest, size_t count) {
    g_memset(dest, '\0', count);
}
