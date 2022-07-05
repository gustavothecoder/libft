#include "ft_utils/tests.h"
#include "../libft.h"

int main()
{
    run_ft_memalloc_tests();
    run_ft_memdel_tests();
    run_ft_strnew_tests();
    run_ft_strdel_tests();
    run_ft_strclr_tests();
    run_ft_striter_tests();
    run_ft_striteri_tests();
    run_ft_strmap_tests();
    run_ft_strmapi_tests();
    run_ft_strequ_tests();
    run_ft_strnequ_tests();
    run_ft_strsub_tests();
    run_ft_strjoin_tests();
    run_ft_strtrim_tests();
    run_ft_strsplit_tests();
    run_ft_itoa_tests();

    print_report();

    return 0;
}
