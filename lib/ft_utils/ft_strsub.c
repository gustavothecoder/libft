#include "ft_utils.h"

char *ft_strsub(const char *s, unsigned int start, size_t len)
{
    size_t len_including_final_char = len + 1;
    char *sub = ft_strnew(len_including_final_char);
    if (sub == NULL)
        return NULL;

    ft_strncpy(sub, &s[start], len);

    return sub;
}
