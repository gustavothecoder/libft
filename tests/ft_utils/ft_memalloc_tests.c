#include "tests.h"

static void when_successfully_allocate();
static void when_allocation_fails();

void run_ft_memalloc_tests()
{
    when_successfully_allocate();
    when_allocation_fails();
}

static void when_successfully_allocate()
{
    char *result = (char *)ft_memalloc(3);

    assert_array(result, "\0\0\0", 3);

    result = "Yes";

    assert_array(result, "Yes", 3);
}

static void when_allocation_fails()
{
    char *result = (char *)ft_memalloc(-1);

    assert(result == NULL);
}
