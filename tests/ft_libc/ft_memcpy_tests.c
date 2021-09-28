#include <stdio.h>
#include <stdlib.h>
#include "tests.h"

static void when_trying_to_copy_elements_from_char_array();
static void when_trying_to_copy_elements_from_int_array();

void run_ft_memcpy_tests() {
    when_trying_to_copy_elements_from_char_array();
    when_trying_to_copy_elements_from_int_array();
}

static void when_trying_to_copy_elements_from_char_array() {
    char source[] = "once upon a midnight dreary...", dest[4];

    void *result = ft_memcpy(dest, source, sizeof dest);

    assert_array(dest, "once", sizeof dest);
    assert(result == dest);
}

static void when_trying_to_copy_elements_from_int_array() {
    int sz = 3*sizeof(int);
    int *p = malloc(sz);
    int arr[3] = {1,2,3};

    void *result = ft_memcpy(p, arr, sz);

    assert_array(p, arr, sz);
    assert(result == p);
}
