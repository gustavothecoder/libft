#include "tests.h"

static void when_s_does_not_have_whitespaces();
static void when_s_have_whitespaces_at_the_beginning();
static void when_s_have_whitespaces_at_the_end();
static void when_s_have_whitespaces_at_the_beginning_and_end();

void run_ft_strtrim_tests()
{
    when_s_does_not_have_whitespaces();
    when_s_have_whitespaces_at_the_beginning();
    when_s_have_whitespaces_at_the_end();
    when_s_have_whitespaces_at_the_beginning_and_end();
}

static void when_s_does_not_have_whitespaces()
{
    char s[] = "string";

    char *result = ft_strtrim(s);

    assert_array(s, "string", sizeof(s));
    assert_array(result, s, sizeof(s));
}

static void when_s_have_whitespaces_at_the_beginning()
{
    char s[] = " at the beginning";

    char *result = ft_strtrim(s);

    assert_array(s,  " at the beginning", sizeof(s));
    assert_array(result,  "at the beginning\0", sizeof(result));
}

static void when_s_have_whitespaces_at_the_end()
{
    char s[] = "at the end\n";

    char *result = ft_strtrim(s);

    assert_array(s,  "at the end\n", sizeof(s));
    assert_array(result,  "at the end\0", sizeof(result));
}

static void when_s_have_whitespaces_at_the_beginning_and_end()
{
    char s[] = "\tat the beginning and end \n";

    char *result = ft_strtrim(s);

    assert_array(s,  "\tat the beginning and end \n", sizeof(s));
    assert_array(result,  "at the beginning and end\0", sizeof(result));
}
