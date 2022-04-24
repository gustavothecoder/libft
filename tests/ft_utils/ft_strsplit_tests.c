#include "tests.h"

static void when_c_is_not_present();
static void when_c_is_present();

void run_ft_strsplit_tests()
{
    when_c_is_not_present();
    when_c_is_present();
}

static void when_c_is_not_present()
{
    char s[] = "*hello*fellow***programmers*";

    char **result = ft_strsplit(s, ',');

    assert_array(result[0], s, 29);
}

static void when_c_is_present()
{
    char s[] = "*hello*fellow***programmers*";

    char **result = ft_strsplit(s, '*');

    assert_array(result[0], "hello\0", 6);
    assert_array(result[1], "fellow\0", 7);
    assert_array(result[2], "programmers\0", 12);
}
