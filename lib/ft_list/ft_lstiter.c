#include "../../libft.h"


void ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
    f(lst);
    if (lst->next == NULL)
        return;

    ft_lstiter(lst->next, f);
}
