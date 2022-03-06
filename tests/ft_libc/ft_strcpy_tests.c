#include "tests.h"

static void when_dest_points_to_the_start();

void run_ft_strcpy_tests()
{
    when_dest_points_to_the_start();
}

static void when_dest_points_to_the_start()
{
    char *src = "Take the test";
    size_t src_size = ft_strlen(src) + 1; // + 1 for the null terminator byte
    char dest[src_size];

    char *result = ft_strcpy(dest, src);

    assert_array(dest, src, src_size);
    assert(result == dest);
}
