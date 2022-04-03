#include "tests.h"

void run_ft_memdel_tests()
{
    char *pointer = malloc(3);

    assert(pointer != NULL);

    ft_memdel((void **)&pointer);

    assert(pointer == NULL);
}
