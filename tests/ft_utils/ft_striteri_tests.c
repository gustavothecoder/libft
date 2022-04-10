#include "tests.h"

static void to_b(unsigned int index, char *ch);

void run_ft_striteri_tests()
{
    char str[3] = "aaa";

    ft_striteri(str, to_b);

    assert_array(str, "bbb", 3);
}

static void to_b(unsigned int index, char *ch)
{
    ch[index] = 'b';
}
