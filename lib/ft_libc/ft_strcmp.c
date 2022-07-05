#include "../../libft.h"

int ft_strcmp(const char *lhs, const char *rhs)
{
    int biggest_sz = ft_strlen(lhs);
    int rhs_sz = ft_strlen(rhs);

    if (rhs_sz > biggest_sz)
        biggest_sz = rhs_sz;

    return ft_strncmp(lhs, rhs, biggest_sz);
}
