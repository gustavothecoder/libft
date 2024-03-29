
# libft

This is my implementation of some standard C library functions. I made this just
for fun, so I don't recommend you to use it on a real project. The idea (and the name)
of this project come from the [42](https://www.42.us.org/) and I put the challenge
instructions in the repo, so you can
[check it out](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf).

## What was done

### Standard C library functions

| Function     | Original lib | Description                                                             |
| :----------- | :----------- | :---------------------------------------------------------------------- |
| `ft_memset`  | `<string.h>` | [Click me](https://en.cppreference.com/w/c/string/byte/memset)          |
| `ft_bzero`   | `----------` | [Click me](https://man7.org/linux/man-pages/man3/bzero.3.html)          |
| `ft_memcpy`  | `<string.h>` | [Click me](https://en.cppreference.com/w/c/string/byte/memcpy)          |
| `ft_memccpy` | `<string.h>` | [Click me](https://en.cppreference.com/w/c/string/byte/memccpy)         |
| `ft_memmove` | `<string.h>` | [Click me](https://en.cppreference.com/w/c/string/byte/memmove)         |
| `ft_memcmp`  | `<string.h>` | [Click me](https://en.cppreference.com/w/c/string/byte/memcmp)          |
| `ft_memchr`  | `<string.h>` | [Click me](https://en.cppreference.com/w/c/string/byte/memchr)          |
| `ft_strlen`  | `<string.h>` | [Click me](https://en.cppreference.com/w/c/string/byte/strlen)          |
| `ft_strdup`  | `<string.h>` | [Click me](https://en.cppreference.com/w/c/string/byte/strdup)          |
| `ft_strcpy`  | `<string.h>` | [Click me](https://en.cppreference.com/w/c/string/byte/strcpy)          |
| `ft_strncpy` | `<string.h>` | [Click me](https://en.cppreference.com/w/c/string/byte/strncpy)         |
| `ft_strcat`  | `<string.h>` | [Click me](https://en.cppreference.com/w/c/string/byte/strcat)          |
| `ft_strncat` | `<string.h>` | [Click me](https://en.cppreference.com/w/c/string/byte/strncat)         |
| `ft_strlcat` | `----------` | [Click me](https://linux.die.net/man/3/strlcat)                         |
| `ft_strchr`  | `<string.h>` | [Click me](https://en.cppreference.com/w/c/string/byte/strchr)          |
| `ft_strrchr` | `<string.h>` | [Click me](https://en.cppreference.com/w/c/string/byte/strrchr)         |
| `ft_strstr`  | `<string.h>` | [Click me](https://en.cppreference.com/w/c/string/byte/strstr)          |
| `ft_strnstr` | `----------` | [Click me](https://www.freebsd.org/cgi/man.cgi?query=strnstr&sektion=3) |
| `ft_strcmp`  | `<string.h>` | [Click me](https://en.cppreference.com/w/c/string/byte/strcmp)          |
| `ft_strncmp` | `<string.h>` | [Click me](https://en.cppreference.com/w/c/string/byte/strncmp)         |
| `ft_atoi`    | `<stdlib.h>` | [Click me](https://en.cppreference.com/w/c/string/byte/atoi)            |
| `ft_isalpha` | `<ctype.h>`  | [Click me](https://en.cppreference.com/w/c/string/byte/isalpha)         |
| `ft_isdigit` | `<ctype.h>`  | [Click me](https://en.cppreference.com/w/c/string/byte/isdigit)         |
| `ft_isalnum` | `<ctype.h>`  | [Click me](https://en.cppreference.com/w/c/string/byte/isalnum)         |
| `ft_isascii` | `---------`  | [Click me](https://linux.die.net/man/3/isascii)                         |
| `ft_isprint` | `---------`  | [Click me](https://en.cppreference.com/w/c/string/byte/isprint)         |
| `ft_toupper` | `<ctype.h>`  | [Click me](https://en.cppreference.com/w/c/string/byte/toupper)         |
| `ft_tolower` | `<ctype.h>`  | [Click me](https://en.cppreference.com/w/c/string/byte/tolower)         |

### Additional functions

| Function      | Description                                                                 |
| :------------ | :-------------------------------------------------------------------------- |
| `ft_memalloc`  | [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_memdel`    | [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_strnew`    | [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_strdel`    | [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_strclr`    | [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_striter`   | [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_striteri`  | [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_strmap`    | [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_strmapi`   | [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_strequ`    | [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_strnequ`   | [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_strsub`    | [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_strjoin`   | [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_strtrim`   | [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_strsplit`  | [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_itoa`      | [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_putchar`   | [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_putstr`    | [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_putendl`   | [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_putnbr`    | [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_putchar_fd`| [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_putstr_fd` | [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_putendl_fd`| [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_putnbr_fd` | [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |

### Bonus

| Function      | Description                                                                 |
| :------------ | :-------------------------------------------------------------------------- |
| `ft_lstnew`   | [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_lstdelone`| [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_lstdel   `| [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_lstadd   `| [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_lstiter  `| [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |
| `ft_lstmap   `| [Click me](https://github.com/gustavothecoder/libft/blob/main/libft.en.pdf) |

## How to use

Once you have the lib in your project, you can use the functions like in
[examples.c](https://github.com/gustavothecoder/libft/blob/main/examples.c).

## Running Tests

To run tests, run the following command:

```bash
  make tests && ./ft_libc_tests.out && ./ft_utils_tests.out && ./ft_list_tests.out
```

## Makefile

Running the examples:
```bash
  make examples && ./examples.out
```
Removing generated files:
```bash
  make clean
```
