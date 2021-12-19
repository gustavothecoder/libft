#include "ft_libc.h"

int ft_isalnum(int ch) {
    if (ft_isdigit(ch) || ft_isalpha(ch)) return 1;
    return 0;
}
