#include "tests.h"

static void when_all_parameters_are_right();

void run_ft_bzero_tests()
{
    when_all_parameters_are_right();
}

static void when_all_parameters_are_right()
{
    char str[] = "ghghghghghghghghghghgh";
    int str_size = sizeof(str);

    ft_bzero(&str, str_size);

    assert(*str == '\0');
}
