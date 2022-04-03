#include "tests.h"

static void when_allocation_is_successful();
static void when_allocation_fails();

void run_ft_strnew_tests()
{
    when_allocation_is_successful();
    when_allocation_fails();
}

static void when_allocation_is_successful()
{
    char *new_str = ft_strnew(16);

    assert_array(new_str, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 16);

    new_str = "A fresh string!";

    assert_array(new_str, "A fresh string!\0", 16);
}

static void when_allocation_fails()
{
    char *new_str = ft_strnew(-1);

    assert(new_str == NULL);
}
