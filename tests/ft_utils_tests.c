#include "ft_utils/tests.h"
#include "../lib/ft_utils/ft_utils.h"

int main()
{
    run_ft_memalloc_tests();
    run_ft_memdel_tests();
    print_report();
    return 0;
}
