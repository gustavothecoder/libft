#include "ft_libc.h"

int ft_isdigit(int ch) {
    char *digits = "0123456789";
    char ch_array[1] = {ch + '0'};
    if (ft_strstr(digits, ch_array) != NULL) return 1;
    return 0;
}
