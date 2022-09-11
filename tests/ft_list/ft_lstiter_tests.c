#include "tests.h"

static const char NEW_CONTENT[] = "new";
static const size_t NEW_CONTENT_SIZE = sizeof(NEW_CONTENT);

static void change_content(t_list *elem);

void run_ft_lstiter_tests()
{
    char content[] = "test";
    size_t content_size = sizeof(content);
    t_list *first_item = ft_lstnew(content, content_size);
    t_list *second_item = ft_lstnew(content, content_size);
    t_list *third_item = ft_lstnew(content, content_size);
    first_item->next = second_item;
    second_item->next = third_item;

    ft_lstiter(first_item, change_content);

    assert_array(first_item->content, NEW_CONTENT, NEW_CONTENT_SIZE);
    assert_array(second_item->content, NEW_CONTENT, NEW_CONTENT_SIZE);
    assert_array(third_item->content, NEW_CONTENT, NEW_CONTENT_SIZE);
}

static void change_content(t_list *elem)
{
    ft_memcpy(elem->content, NEW_CONTENT, NEW_CONTENT_SIZE);
}
