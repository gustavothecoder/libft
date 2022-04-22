#include "tests.h"

static void when_the_concatenation_is_done_successfully();

void run_ft_strjoin_tests()
{
    when_the_concatenation_is_done_successfully();
}

static void when_the_concatenation_is_done_successfully()
{
    char s1[6] = "Hello", s2[9] = ", World!";

    char *result = ft_strjoin(s1, s2);

    assert_array(s1, "Hello\0", 6);
    assert_array(s2, ", World!\0", 9);
    assert_array(result, "Hello, World!\0", 14);
}
