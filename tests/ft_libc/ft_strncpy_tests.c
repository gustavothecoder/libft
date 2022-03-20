#include "tests.h"

static void when_count_is_less_than_src_size();
static void when_count_is_the_same_size_as_src();
static void when_count_is_greater_than_src_size();

void run_ft_strncpy_tests()
{
    when_count_is_less_than_src_size();
    when_count_is_the_same_size_as_src();
    when_count_is_greater_than_src_size();
}

static void when_count_is_less_than_src_size()
{
    char src[] = "abcdef";
    char dest[7] = "";

    char *result = ft_strncpy(dest, src, 3);

    assert_array(dest, "abc\0\0\0\0", 7);
    assert(result == dest);
}

static void when_count_is_the_same_size_as_src()
{
    char src[] = "abcdef";
    char dest[7];

    char *result = ft_strncpy(dest, src, 7);

    assert_array(dest, src, 7);
    assert(result == dest);
}

static void when_count_is_greater_than_src_size()
{
    char src[] = "abcdef";
    char dest[9];

    char *result = ft_strncpy(dest, src, 9);

    assert_array(dest, "abcdef\0\0\0", 9);
    assert(result == dest);
}
