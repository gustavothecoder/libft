#include <stddef.h>
#include <stdlib.h>
#include "../ft_libc/ft_libc.h"

void *ft_memalloc(size_t size);
void ft_memdel(void **ap);
char *ft_strnew(size_t size);
void ft_strdel(char **as);
void ft_strclr(char *s);
void ft_striter(char *s, void (*f)(char *));
void ft_striteri(char *s, void (*f)(unsigned int, char *));
char *ft_strmap(char const *s, char (*f)(char));
