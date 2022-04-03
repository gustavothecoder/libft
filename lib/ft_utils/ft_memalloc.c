#include "ft_utils.h"

void *ft_memalloc(size_t size)
{
    void *allocation = malloc(size);
    if (allocation == NULL)
        return NULL;
    ft_bzero(allocation, size);
    return allocation;
}

