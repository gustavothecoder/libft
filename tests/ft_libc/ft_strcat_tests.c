#include "tests.h"

void run_ft_strcat_tests() {
    char str[50] = "Hello ";
    char str2[50] = "World!";

    ft_strcat(str, str2);
    ft_strcat(str, " ...");
    char *result = ft_strcat(str, " Goodbye World!");

    assert_array(str, "Hello World! ... Goodbye World!", 32);
    assert(result == str);
}
