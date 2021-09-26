#include <stddef.h>

void *g_memset(void *dest, int ch, size_t count);
void g_bzero(void *dest, size_t count);
void *g_memcpy(void *restrict dest, const void *restrict src, size_t count);
