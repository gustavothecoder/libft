#include "tests.h"

void run_ft_strdel_tests()
{
    char *str = malloc(5);

    assert(str != NULL);

    ft_strdel(&str);

    assert(str == NULL);
}
