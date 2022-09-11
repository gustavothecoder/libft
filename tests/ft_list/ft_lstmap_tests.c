#include "tests.h"

static const char NEW_CONTENT[] = "new";
static const size_t NEW_CONTENT_SIZE = sizeof(NEW_CONTENT);

static void change_content(t_list *elem);

void run_ft_lstmap_tests()
{
    char content[] = "test";
    size_t content_size = sizeof(content);
    t_list *first_item = ft_lstnew(content, content_size);
    t_list *second_item = ft_lstnew(content, content_size);
    t_list *third_item = ft_lstnew(content, content_size);
    first_item->next = second_item;
    second_item->next = third_item;

    t_list *new_list = ft_lstmap(first_item, change_content);
    t_list *new_list_second = new_list->next;
    t_list *new_list_third = new_list_second->next;

    assert_array(first_item->content, content, content_size);
    assert_array(second_item->content, content, content_size);
    assert_array(third_item->content, content, content_size);
    assert_array(new_list->content, NEW_CONTENT, NEW_CONTENT_SIZE);
    assert_array(new_list_second->content, NEW_CONTENT, NEW_CONTENT_SIZE);
    assert_array(new_list_third->content, NEW_CONTENT, NEW_CONTENT_SIZE);
}

static void change_content(t_list *elem)
{
    ft_memcpy(elem->content, NEW_CONTENT, NEW_CONTENT_SIZE);
}
