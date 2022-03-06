#include "tests.h"

static void when_an_empty_string_is_sent();
static void when_a_common_string_is_sent();

void run_ft_strdup_tests()
{
    when_an_empty_string_is_sent();
    when_a_common_string_is_sent();
}

static void when_an_empty_string_is_sent()
{
    const char *str1 = "";

    char *str2 = ft_strdup(str1);

    assert(str2 == NULL);
    free(str2);
}

static void when_a_common_string_is_sent()
{
    const char *str1 = "Duplicate me!";

    char *str2 = ft_strdup(str1);

    assert_array(str2, str1, ft_strlen(str1));
    free(str2);
}
