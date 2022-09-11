#include "ft_list/tests.h"
#include "../libft.h"

int main()
{
    run_ft_lstnew_tests();
    run_ft_lstdelone_tests();
    run_ft_lstdel_tests();
    run_ft_lstadd_tests();
    run_ft_lstiter_tests();
    run_ft_lstmap_tests();

    print_report();

    return 0;
}
