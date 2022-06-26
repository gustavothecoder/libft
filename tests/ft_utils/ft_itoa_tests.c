#include "tests.h"

static void when_n_is_positive();
static void when_n_is_negative();

void run_ft_itoa_tests()
{
    when_n_is_positive();
    when_n_is_negative();
}

static void when_n_is_positive()
{
    int n1 = 3;
    int n2 = 837;
    int n3 = 39841;

    char *result1 = ft_itoa(n1);
    char *result2 = ft_itoa(n2);
    char *result3 = ft_itoa(n3);

    assert_array(result1, "3\0", 2);
    assert_array(result2, "837\0", 4);
    assert_array(result3, "39841\0", 6);
}

static void when_n_is_negative()
{
    int n1 = -3;
    int n2 = -837;
    int n3 = -39841;

    char *result1 = ft_itoa(n1);
    char *result2 = ft_itoa(n2);
    char *result3 = ft_itoa(n3);

    assert_array(result1, "-3\0", 3);
    assert_array(result2, "-837\0", 5);
    assert_array(result3, "-39841\0", 7);
}
