#include "tests.h"

static void to_a(char *ch);

void run_ft_striter_tests()
{
    char str[4] = "bbb";

    ft_striter(str, to_a);

    assert_array(str, "aaa", 3);
}

static void to_a(char *ch)
{
    *ch = 'a';
}
