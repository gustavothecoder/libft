#include "../../libft.h"

int ft_isdigit(int ch)
{
    char ch_array[1] = {ch + '0'};
    if (ft_strstr(DIGITS, ch_array) != NULL)
        return 1;
    return 0;
}
