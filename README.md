# libft

A re-implementation of a subset of the C standard library, based on the **42 School libft project**.

## Context

I'm not a 42 School student, but I follow parts of their curriculum on my own time as a personal learning path to deepen my understanding of the C programming language.

## What is libft?

`libft` is the foundational project of the 42 cursus. The goal is to recode a set of standard C library functions from scratch — no shortcuts, no calling the originals. It forces you to understand what's actually happening under the hood when you call something like `memcpy` or `atoi`.

## What I learned

- Manual memory management with `malloc` and `free`
- Pointer arithmetic and string manipulation at a low level
- Implementing linked list operations from scratch
- Writing clean, reusable C code without relying on standard library helpers

## Project structure

```
libft/
├── ft_*.c       # Individual function implementations
├── libft.h      # Header with prototypes and the t_list struct
└── Makefile     # Builds the static library (libft.a)
```

## Functions implemented

### Libc functions
`ft_memset` · `ft_memcpy` · `ft_memmove` · `ft_memchr` · `ft_memcmp`
`ft_strlen` · `ft_strlcpy` · `ft_strlcat` · `ft_strchr` · `ft_strrchr`
`ft_strncmp` · `ft_strnstr` · `ft_strdup`
`ft_atoi` · `ft_isalpha` · `ft_isdigit` · `ft_isalnum` · `ft_isascii`
`ft_isprint` · `ft_toupper` · `ft_tolower` · `ft_calloc`

### Additional functions
`ft_substr` · `ft_strjoin` · `ft_strtrim` · `ft_split`
`ft_itoa` · `ft_strmapi` · `ft_striteri`
`ft_putchar_fd` · `ft_putstr_fd` · `ft_putendl_fd` · `ft_putnbr_fd`

### Bonus — linked lists
`ft_lstnew` · `ft_lstadd_front` · `ft_lstadd_back` · `ft_lstsize`
`ft_lstlast` · `ft_lstdelone` · `ft_lstclear` · `ft_lstiter` · `ft_lstmap`

## Build

```bash
make        # builds libft.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # fclean + make
```

## Notes

This project is done purely for learning purposes, following the 42 cursus as a self-study resource. I am not affiliated with 42 School.
