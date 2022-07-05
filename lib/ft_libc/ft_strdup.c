#include "../../libft.h"

char *ft_strdup(const char *str1)
{
    size_t str1_sz = ft_strlen(str1);
    if (str1_sz == 0)
    {
        return NULL;
    }
    else
    {
        char *str2 = (char *)malloc(sizeof str1);
        for (size_t i = 0; i < str1_sz; i++)
            str2[i] = str1[i];
        str2[str1_sz] = '\0';
        return str2;
    }
}
