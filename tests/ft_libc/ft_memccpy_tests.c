#include "tests.h"

static void when_c_is_not_found();
static void when_c_is_found_at_the_start();
static void when_c_is_found_at_the_middle();
static void when_c_is_found_at_the_end();

void run_ft_memccpy_tests()
{
    when_c_is_not_found();
    when_c_is_found_at_the_start();
    when_c_is_found_at_the_middle();
    when_c_is_found_at_the_end();
}

static void when_c_is_not_found()
{
    const char src[] = "Stars: Altair, Sun, Vega.";
    const char c = '!';
    size_t sz = sizeof src;
    char dest[sz];

    int *result = ft_memccpy(dest, src, c, sz);

    assert_array(dest, src, sz);
    assert(result == NULL);
}

static void when_c_is_found_at_the_start()
{
    const char src[] = "Stars: Altar, Sun, Vega.";
    const char c = 'S';
    size_t sz = sizeof src;
    char dest[sz];

    char *result = (char *)ft_memccpy(dest, src, c, sz);

    assert_array(dest, "S", 1);
    assert(*result == 't');
}

static void when_c_is_found_at_the_middle()
{
    const char src[] = "Stars: Altar, Sun, Vega.";
    const char c = ',';
    size_t sz = sizeof src;
    char dest[sz];

    char *result = (char *)ft_memccpy(dest, src, c, sz);

    assert_array(dest, "Stars: Altar,", 13);
    assert(*result == ' ');
}

static void when_c_is_found_at_the_end()
{
    const char src[] = "Stars: Altar, Sun, Vega.";
    const char c = '.';
    size_t sz = sizeof src;
    char dest[sz];

    char *result = (char *)ft_memccpy(dest, src, c, sz);

    assert_array(dest, src, sz);
    assert(*result == '\0');
}
