#include "tests.h"

static char next_char(char ch);

void run_ft_strmap_tests()
{
    char str[3] = "abc";

    char *result = ft_strmap(str, next_char);

    assert_array(str, "abc\0", 4);
    assert_array(result, "bcd\0", 4);

    free(result);
}

static char next_char(char ch)
{
    return (char)((int)ch + 1);
}
