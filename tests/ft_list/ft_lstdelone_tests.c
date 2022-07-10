#include "tests.h"

static void del(void *content, size_t content_size);

void run_ft_lstdelone_tests()
{
    char content[] = "test";
    size_t content_size = sizeof(content);
    t_list *link = ft_lstnew(content, content_size);

    assert(link != NULL);

    ft_lstdelone(&link, del);

    assert(link == NULL);
}

static void del(void *content, size_t content_size)
{
    ft_bzero(content, content_size);
}
