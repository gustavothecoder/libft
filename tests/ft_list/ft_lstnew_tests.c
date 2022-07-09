#include "tests.h"

static void when_content_is_null();
static void when_content_is_an_int();
static void when_content_is_a_float();
static void when_content_is_a_string();

void run_ft_lstnew_tests()
{
    when_content_is_null();
    when_content_is_an_int();
    when_content_is_a_float();
    when_content_is_a_string();
}

static void when_content_is_an_int()
{
    int content = 21;
    size_t content_size = sizeof(content);

    t_list *link = ft_lstnew(&content, content_size);

    assert(*((int *)link->content) == content);
    assert(link->content_size == content_size);
    assert(link->next == NULL);
}

static void when_content_is_null()
{
    void *content = NULL;
    size_t content_size = sizeof(content);

    t_list *link = ft_lstnew(content, content_size);

    assert(link->content == NULL);
    assert(link->content_size == 0);
    assert(link->next == NULL);
}

static void when_content_is_a_float()
{
    float content = 3.14;
    size_t content_size = sizeof(content);

    t_list *link = ft_lstnew(&content, content_size);

    assert(*((float *)link->content) == content);
    assert(link->content_size == content_size);
    assert(link->next == NULL);
}

static void when_content_is_a_string()
{
    char content[] = "string";
    size_t content_size = sizeof(content);

    t_list *link = ft_lstnew(content, content_size);

    assert_array((char *)link->content, content, 7);
    assert(link->content_size == content_size);
    assert(link->next == NULL);
}
