#include "tests.h"

static void when_lhs_precedes_rhs();
static void when_lhs_follows_rhs();
static void when_lhs_is_equal_to_rhs();

void run_ft_memcmp_tests()
{
    when_lhs_precedes_rhs();
    when_lhs_follows_rhs();
    when_lhs_is_equal_to_rhs();
}

static void when_lhs_precedes_rhs()
{
    char lhs[] = {'a', 'b', 'c'};
    char rhs[] = {'a', 'b', 'd'};

    int result = ft_memcmp(lhs, rhs, sizeof lhs);

    assert(result < 0);
}

static void when_lhs_follows_rhs()
{
    char lhs[] = {'a', 'b', 'd'};
    char rhs[] = {'a', 'b', 'c'};

    int result = ft_memcmp(lhs, rhs, sizeof lhs);

    assert(result > 0);
}

static void when_lhs_is_equal_to_rhs()
{
    char lhs[] = {'a', 'b', 'c'};
    char rhs[] = {'a', 'b', 'c'};

    int result = ft_memcmp(lhs, rhs, sizeof lhs);

    assert(result == 0);
}
