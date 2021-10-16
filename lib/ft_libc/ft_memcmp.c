#include "ft_libc.h"

int ft_memcmp(const void* lhs, const void *rhs, size_t count) {
    unsigned char *parsed_lhs = (unsigned char *)lhs;
    unsigned char *parsed_rhs = (unsigned char *)rhs;
    for(size_t i = 0; i < count; i++) {
        if (parsed_lhs[i] < parsed_rhs[i]) return -1;
        else if (parsed_lhs[i] > parsed_rhs[i]) return 1;
    }
    return 0;
}
