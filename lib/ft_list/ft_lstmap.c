#include "../../libft.h"

t_list *ft_lstmap(t_list *lst, void (*f)(t_list *elem))
{
    t_list *current = lst;
    t_list *prev = NULL;
    t_list *new = NULL;
    t_list *first = NULL;

    while (current)
    {
        new = ft_lstnew(current->content, current->content_size);
        f(new);
        if (!first)
            first = new;

        if (prev)
            prev->next = new;

        current = current->next;
        prev = new;
    }

    return first;
}
