#include "ft_libc.h"

char *ft_strchr(const char *str, int ch) {
    unsigned char *unsigned_str = (unsigned char *)str;
    char converted_ch = (char)ch;
    for (; *unsigned_str != '\0' && *unsigned_str != converted_ch; unsigned_str++);
    return *unsigned_str != '\0' ? unsigned_str : NULL;
}
