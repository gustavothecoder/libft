#include "../../libft.h"

t_list *ft_lstnew(void const *content, size_t content_size)
{
    t_list *link = (t_list *)ft_memalloc(sizeof(t_list));
    if (link == NULL)
        return NULL;

    if (content == NULL)
    {
        link->content = NULL;
        link->content_size = 0;
    }
    else
    {
        link->content = (void *)ft_memalloc(content_size);
        if (link->content == NULL)
        {
            free(link);
            return NULL;
        }

        ft_memcpy(link->content, content, content_size);
        link->content_size = content_size;
        link->next = NULL;
    }
    return link;
}
