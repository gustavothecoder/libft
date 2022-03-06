#include "tests.h"

static void when_substr_is_found();
static void when_substr_is_not_found();
static void when_substr_is_an_empty_string();

void run_ft_strnstr_tests()
{
    when_substr_is_found();
    when_substr_is_not_found();
    when_substr_is_an_empty_string();
}

static void when_substr_is_found()
{
    char *str = "one two three";

    char *result = ft_strnstr(str, "two", 8);

    assert(result == &str[4]);
    assert(*result == str[4]);
}

static void when_substr_is_not_found()
{
    char *str = "one two three";

    char *result = ft_strnstr(str, "two", 4);

    assert(result == NULL);
}

static void when_substr_is_an_empty_string()
{
    char *str = "one two three";

    char *result = ft_strnstr(str, "", 4);

    assert(result == &str[0]);
    assert(*result == str[0]);
}
