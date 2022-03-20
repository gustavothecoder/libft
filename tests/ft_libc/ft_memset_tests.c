#include "tests.h"

static void when_all_parameters_are_right();

void run_ft_memset_tests()
{
    when_all_parameters_are_right();
}

static void when_all_parameters_are_right()
{
    char str[] = "ghghghghghghghghghghgh";

    char *result = (char *)ft_memset(&str, 'a', 5);

    assert_array(str, "aaaaahghghghghghghghgh", 22);
    assert_array(result, "aaaaahghghghghghghghgh", 22);
    assert(result == str);
}
