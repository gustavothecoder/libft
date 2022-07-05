#include "../../libft.h"

char *ft_strstr(const char *str, const char *substr)
{
    return ft_strnstr(str, substr, ft_strlen(str));
}
