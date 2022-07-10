#include "tests.h"

static void del(void *content, size_t content_size);

static void when_there_is_a_single_link();

void run_ft_lstdel_tests()
{
    when_there_is_a_single_link();
}

static void when_there_is_a_single_link()
{
    char content[] = "test";
    size_t content_size = sizeof(content);
    t_list *link = ft_lstnew(content, content_size);

    assert(link != NULL);

    ft_lstdel(&link, del);

    assert(link == NULL);
}

static void del(void *content, size_t content_size)
{
    ft_bzero(content, content_size);
}
