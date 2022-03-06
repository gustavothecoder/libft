#include "tests.h"

static void when_lhs_precedes();
static void when_lhs_follows();
static void when_lhs_is_equal();

void run_ft_strncmp_tests()
{
    when_lhs_precedes();
    when_lhs_follows();
    when_lhs_is_equal();
}

static void when_lhs_precedes()
{
    const char *lhs = "Hello World!";
    const char *rhs = "Hello!";

    int result = ft_strncmp(lhs, rhs, 6);

    assert(result == -1);
}

static void when_lhs_follows()
{
    const char *lhs = "Hello World!";
    const char *rhs = "Hello";

    int result = ft_strncmp(lhs, rhs, 6);

    assert(result == 1);
}

static void when_lhs_is_equal()
{
    const char *lhs = "Hello World!";
    const char *rhs = "Hello";

    int result = ft_strncmp(lhs, rhs, 5);

    assert(result == 0);
}
