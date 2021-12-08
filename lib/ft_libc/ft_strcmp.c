#include "ft_libc.h"

int ft_strcmp(const char *lhs, const char *rhs) {
    unsigned char *unsigned_lhs = (unsigned char *)lhs;
    unsigned char *unsigned_rhs = (unsigned char *)rhs;
    int result = 0;
    for (; *unsigned_lhs == *unsigned_rhs && *unsigned_lhs != '\0'; unsigned_lhs++, unsigned_rhs++);
    if (*unsigned_lhs < *unsigned_rhs) result = -1;
    else if (*unsigned_lhs > *unsigned_rhs) result = 1;
    return result;
}
