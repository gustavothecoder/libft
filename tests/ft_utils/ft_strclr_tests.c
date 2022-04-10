#include "tests.h"

void run_ft_strclr_tests()
{
    char str[9] = "to clear";

    ft_strclr(str);

    assert_array(str, "\0\0\0\0\0\0\0\0\0", 9);
}
