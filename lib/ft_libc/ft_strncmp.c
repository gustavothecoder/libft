#include "../../libft.h"

int ft_strncmp(const char *lhs, const char *rhs, size_t count)
{
    unsigned char *unsigned_lhs = (unsigned char *)lhs;
    unsigned char *unsigned_rhs = (unsigned char *)rhs;
    int result = 0;

    for (int counter = 1;
         *unsigned_lhs == *unsigned_rhs && *unsigned_lhs != '\0' && counter < count;
         unsigned_lhs++, unsigned_rhs++, counter++)
        ;

    if (*unsigned_lhs < *unsigned_rhs)
        result = -1;
    else if (*unsigned_lhs > *unsigned_rhs)
        result = 1;

    return result;
}