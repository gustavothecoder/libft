#include "../../libft.h"

char *ft_strcpy(char *dest, const char *src)
{
    size_t total_src_size = ft_strlen(src) + 1;
    return ft_strncpy(dest, src, total_src_size);
}
