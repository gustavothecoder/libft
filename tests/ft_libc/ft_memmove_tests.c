#include "tests.h"

static void when_a_char_array_is_sent();
static void when_a_int_array_is_sent();

void run_ft_memmove_tests() {
    when_a_char_array_is_sent();
    when_a_int_array_is_sent();
}

static void when_a_char_array_is_sent() {
    char src[] = "1234567890";
    char dest[] = "1234567890";

    char *result = (char *)ft_memmove(dest+4, src+3, 3);

    assert_array(dest, "1234456890", sizeof dest);
    assert(result == dest+4);
}

static void when_a_int_array_is_sent() {
    int src[] = {1,2,3};
    int sz = 3*sizeof(int);
    int *dest = malloc(sz);

    int *result = (int *)ft_memmove(dest, src, sz);

    assert_array(dest, src, sz);
    assert(result == dest);
}
