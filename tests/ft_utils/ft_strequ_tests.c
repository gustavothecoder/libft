#include "tests.h"

static void when_s1_precedes();
static void when_s1_follows();
static void when_s1_is_equal();

void run_ft_strequ_tests()
{
    when_s1_precedes();
    when_s1_follows();
    when_s1_is_equal();
}

static void when_s1_precedes()
{
    const char *s1 = "Hello World!";
    const char *s2 = "Hello!";

    int result = ft_strequ(s1, s2);

    assert(result == 0);
}

static void when_s1_follows()
{
    const char *s1 = "Hello World!";
    const char *s2 = "Hello";

    int result = ft_strequ(s1, s2);

    assert(result == 0);
}

static void when_s1_is_equal()
{
    const char *s1 = "Hello World!";
    const char *s2 = "Hello World!";

    int result = ft_strequ(s1, s2);

    assert(result == 1);
}