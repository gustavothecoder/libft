#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#define DIGITS "0123456789"
#define UPPERCASE_ALPHABET "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define LOWERCASE_ALPHABET "abcdefghijklmnopqrstuvwxyz"
#define PUNCTUATION_CHARS "!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~"

void *ft_memset(void *dest, int ch, size_t count);
void ft_bzero(void *dest, size_t count);
void *ft_memcpy(void *restrict dest, const void *restrict src, size_t count);
void *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t count);
void *ft_memmove(void *dest, const void *src, size_t count);
int ft_memcmp(const void *lhs, const void *rhs, size_t count);
void *ft_memchr(const void *ptr, int ch, size_t count);
size_t ft_strlen(const char *str);
char *ft_strdup(const char *str1);
char *ft_strcpy(char *dest, const char *src);
char *ft_strncpy(char *dest, const char *src, size_t count);
char *ft_strcat(char *dest, const char *src);
char *ft_strncat(char *dest, const char *src, size_t count);
size_t ft_strlcat(char *dest, const char *src, size_t size);
char *ft_strchr(const char *str, int ch);
char *ft_strrchr(const char *str, int ch);
char *ft_strstr(const char *str, const char *substr);
char *ft_strnstr(const char *str, const char *substr, size_t count);
int ft_strcmp(const char *lhs, const char *rhs);
int ft_strncmp(const char *lhs, const char *rhs, size_t count);
int ft_atoi(const char *str);
int ft_isalpha(int ch);
int ft_isdigit(int ch);
int ft_isalnum(int ch);
int ft_isascii(int ch);
int ft_isprint(int ch);
int ft_toupper(int ch);
