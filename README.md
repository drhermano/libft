*This project has been created as part of the 42 curriculum by drocha-h.*

# libft

## Description

**libft** is the first project of the 42 Common Core. The goal is to reimplement a set of standard C library functions from scratch, building a personal library (`libft.a`) that will be reused throughout the entire 42 curriculum.

The project is divided into three parts:

- **Part 1 — Libc functions:** reimplementations of standard functions such as `ft_strlen`, `ft_memcpy`, `ft_atoi`, and others, following their original `man` page behavior.
- **Part 2 — Additional functions:** functions not present in libc or that exist in a different form, such as `ft_substr`, `ft_split`, `ft_itoa`, and others focused on string manipulation and output.
- **Part 3 — Linked list:** a set of functions to create and manipulate singly linked lists using the `t_list` structure.

## Instructions

### Compilation

```bash
make
```

This will compile all source files and generate `libft.a` at the root of the repository.

### Makefile rules

| Rule | Description |
|------|-------------|
| `make` / `make all` | Compiles the library |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and `libft.a` |
| `make re` | Runs `fclean` then `all` |

### Using the library in another project

```bash
gcc -Wall -Wextra -Werror your_file.c -L. -lft -o your_program
```

## Library

### Part 1 — Libc functions

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks if character is alphabetic |
| `ft_isdigit` | Checks if character is a digit |
| `ft_isalnum` | Checks if character is alphanumeric |
| `ft_isascii` | Checks if character is in ASCII range |
| `ft_isprint` | Checks if character is printable |
| `ft_strlen` | Returns the length of a string |
| `ft_memset` | Fills memory with a constant byte |
| `ft_bzero` | Zeroes a memory area |
| `ft_memcpy` | Copies memory area |
| `ft_memmove` | Copies memory area, handling overlaps |
| `ft_strlcpy` | Size-bounded string copy |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_toupper` | Converts character to uppercase |
| `ft_tolower` | Converts character to lowercase |
| `ft_strchr` | Locates first occurrence of character in string |
| `ft_strrchr` | Locates last occurrence of character in string |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_memchr` | Locates byte in memory area |
| `ft_memcmp` | Compares memory areas |
| `ft_strnstr` | Locates substring within length-limited string |
| `ft_atoi` | Converts string to integer |
| `ft_calloc` | Allocates zero-initialized memory |
| `ft_strdup` | Duplicates a string |

### Part 2 — Additional functions

| Function | Description |
|----------|-------------|
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim` | Trims characters from both ends of a string |
| `ft_split` | Splits a string by a delimiter character |
| `ft_itoa` | Converts an integer to a string |
| `ft_strmapi` | Applies a function to each character, returning a new string |
| `ft_striteri` | Applies a function to each character in place |
| `ft_putchar_fd` | Outputs a character to a file descriptor |
| `ft_putstr_fd` | Outputs a string to a file descriptor |
| `ft_putendl_fd` | Outputs a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Outputs an integer to a file descriptor |

### Part 3 — Linked list

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning of a list |
| `ft_lstsize` | Returns the number of nodes in a list |
| `ft_lstlast` | Returns the last node of a list |
| `ft_lstadd_back` | Adds a node at the end of a list |
| `ft_lstdelone` | Deletes a single node |
| `ft_lstclear` | Deletes and frees an entire list |
| `ft_lstiter` | Iterates through a list applying a function |
| `ft_lstmap` | Creates a new list by applying a function to each node |

### AI usage

AI (Claude) was used exclusively to clarify conceptual doubts during the development of this project — for example, understanding edge cases in function behavior and standard C memory management concepts. No code was generated or copied from AI.
