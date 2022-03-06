#include "tests.h"

static void when_all_parameters_are_right();
static void when_a_null_pointer_are_sent();
static void when_count_is_greater_than_size_max();

void run_ft_memset_tests()
{
    when_all_parameters_are_right();
    when_a_null_pointer_are_sent();
    when_count_is_greater_than_size_max();
}

static void when_all_parameters_are_right()
{
    char str[] = "ghghghghghghghghghghgh";

    char *result = (char *)ft_memset(&str, 'a', 5);

    assert_array(str, "aaaaahghghghghghghghgh", 22);
    assert_array(result, "aaaaahghghghghghghghgh", 22);
    assert(result == str);
}

static void when_a_null_pointer_are_sent()
{
    char *null_pointer = NULL;

    char *result = (char *)ft_memset(&null_pointer, 'a', 5);

    assert(null_pointer == NULL);
    assert(result == NULL);
}

static void when_count_is_greater_than_size_max()
{
    char str[] = "ghghghghghghghghghghgh";

    char *result = (char *)ft_memset(&str, 'a', SIZE_MAX + 1);

    assert_array(str, "ghghghghghghghghghghgh", 22);
    assert(result != str);
}
