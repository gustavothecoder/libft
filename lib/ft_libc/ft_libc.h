#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

void *ft_memset(void *dest, int ch, size_t count);
void ft_bzero(void *dest, size_t count);
void *ft_memcpy(void *restrict dest, const void *restrict src, size_t count);
void *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t count);
