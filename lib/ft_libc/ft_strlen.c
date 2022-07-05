#include "../../libft.h"

size_t ft_strlen(const char *str)
{
    char current_char;
    size_t counter = 0;
    while (true)
    {
        current_char = str[counter];
        if (current_char == '\0')
            return counter;
        counter++;
    }
}
