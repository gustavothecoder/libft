#include "tests.h"

static void when_ch_is_found();
static void when_ch_is_not_found();

void run_ft_strchr_tests()
{
    when_ch_is_found();
    when_ch_is_not_found();
}

static void when_ch_is_found()
{
    const char *str = "Try not. Do, or do not. There is no try.";
    char ch = 'd';

    char *result = ft_strchr(str, ch);

    assert(result == &str[16]);
    assert(*result == str[16]);
}

static void when_ch_is_not_found()
{
    const char *str = "Try not. Do, or do not. There is no try.";
    char ch = '`';

    char *result = ft_strchr(str, ch);

    assert(result == NULL);
}
