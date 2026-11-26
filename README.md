# libft

> My own **C standard library**: string, memory, character and conversion functions, plus a linked-list toolkit.

![C](https://img.shields.io/badge/C-00599C?style=flat&logo=c&logoColor=white)

## About

libft is the first project of the 42 curriculum. It recreates a set of libc functions and adds some
extra ones, all written from scratch without using the standard library. The result is a static
library, `libft.a`, that later projects (push_swap, minitalk, cub3d, ...) build on.

## Contents

**libc functions**

| Category | Functions |
|---|---|
| Characters | `isalpha` `isdigit` `isalnum` `isascii` `isprint` `toupper` `tolower` |
| Strings | `strlen` `strchr` `strrchr` `strncmp` `strnstr` `strlcpy` `strlcat` `strdup` |
| Memory | `memset` `bzero` `memcpy` `memmove` `memchr` `memcmp` `calloc` |
| Conversion | `atoi` |

**Additional functions**

| Function | Description |
|---|---|
| `ft_substr` `ft_strjoin` `ft_strtrim` | build new strings |
| `ft_split` | split a string into an array by a delimiter |
| `ft_itoa` | integer to string |
| `ft_strmapi` `ft_striteri` | apply a function to every character |
| `ft_putchar_fd` `ft_putstr_fd` `ft_putendl_fd` `ft_putnbr_fd` | write to a file descriptor |

**Linked lists (bonus)**

`ft_lstnew` `ft_lstadd_front` `ft_lstadd_back` `ft_lstsize` `ft_lstlast` `ft_lstdelone` `ft_lstclear` `ft_lstiter` `ft_lstmap`

All functions are prefixed with `ft_`.

## Build & use

```bash
make            # builds libft.a
make bonus      # adds the linked-list functions
```

```bash
cc main.c -I. libft.a -o app
```

---

<sub>Part of the <a href="https://www.codam.nl/">Codam</a> (42 network) curriculum.</sub>
