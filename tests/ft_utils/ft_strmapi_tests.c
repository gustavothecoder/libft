#include "tests.h"

static char next_char(unsigned int index, char str);

void run_ft_strmapi_tests()
{
    char str[4] = "abc";

    char *result = ft_strmapi(str, next_char);

    assert_array(result, "ace\0", 4);
    assert_array(str, "abc\0", 4);

    free(result);
}

static char next_char(unsigned int index, char str)
{
    return (char)((int)str + index);
}
