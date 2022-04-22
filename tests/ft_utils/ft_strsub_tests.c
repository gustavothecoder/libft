#include "tests.h"

static void when_the_substring_is_created_successfully();
static void when_the_allocation_fails();

void run_ft_strsub_tests()
{
    when_the_substring_is_created_successfully();
    when_the_allocation_fails();
}

static void when_the_substring_is_created_successfully()
{
    char s[14] = "Hello, world!";

    char *result = ft_strsub(s, 7, 6);

    assert_array(s, "Hello, world!\0", 13);
    assert_array(result, "world!\0", 7);
}

static void when_the_allocation_fails()
{
    char s[14] = "Hello, world!";

    char *result = ft_strsub(s, 7, -6);

    assert_array(s, "Hello, world!\0", 13);
    assert(result == NULL);
}
