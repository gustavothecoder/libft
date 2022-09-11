#include "tests.h"

void run_ft_lstadd_tests()
{
    char content[] = "test";
    size_t content_size = sizeof(content);
    t_list *current_first = ft_lstnew(content, content_size);
    t_list *new_first = ft_lstnew(content, content_size);

    ft_lstadd(&current_first, new_first);

    assert(current_first == new_first);
}
