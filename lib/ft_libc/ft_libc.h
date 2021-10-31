#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

void *ft_memset(void *dest, int ch, size_t count);
void ft_bzero(void *dest, size_t count);
void *ft_memcpy(void *restrict dest, const void *restrict src, size_t count);
void *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t count);
void *ft_memmove(void *dest, const void *src, size_t count);
int ft_memcmp(const void *lhs, const void *rhs, size_t count);
void *ft_memchr(const void *ptr, int ch, size_t count);
size_t ft_strlen(const char *str);
char *ft_strdup(const char *str1);
