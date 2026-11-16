*This project has been created as part of the 42 curriculum by ommorali.*

# Libft

## Description
This project was about making our very first toolbox that we will use in the next projects, as it is about data types, memory allocation, and linked lists.

## Instructions
- To compile the library:
  ```make```
- Clean-up Rules
- Remove object files (.o):
```make clean```
- Remove object files and the compiled static library (libft.a):
```make fclean```
- Recompile the entire project from scratch:
```make re```
## Library Overview
### Part 1 - Standard Libc Functions

Re-implementations of classic C standard library routines:

**Memory Management:** ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp, ft_calloc.

**String Analysis & Manipulation:** ft_strlen, ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr, ft_strdup, ft_strlcpy, ft_strlcat.

**Character Inspection & Conversion:** ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_toupper, ft_tolower, ft_atoi.

### Part 2 - Additional Functions
**Custom non-standard utilities for daily string and stream processing:**

**ft_substr:** Extracts a substring from a string given a starting index and maximum length.

**ft_strjoin:** Allocates and returns a new string resulting from concatenating two strings.

**ft_strtrim:** Trims a specified set of target characters from the start and end of a string.

**ft_split:** Splits a string into an array of substrings using a character delimiter.

**ft_itoa:** Converts an integer value into its ASCII string representation.

**ft_strmapi:** Applies a function to each character of a string to create a new mapped string.

**ft_striteri:** Applies a function to each character of a string in-place using its index.

**ft_putchar_fd:** Writes a single character to a given file descriptor.

**ft_putstr_fd:** Writes a string to a given file descriptor.

**ft_putendl_fd:** Writes a string followed by a newline to a given file descriptor.

**ft_putnbr_fd:** Writes an integer to a given file descriptor.

### Linked List Functions
**Utilities for manipulating single-linked list structures (t_list):**

**ft_lstnew:** Creates and initializes a new list node.

**ft_lstadd_front:** Adds a new node at the beginning of the list.

**ft_lstsize:** Counts the total number of nodes in a list.

**ft_lstlast**: Returns the last node of the list.

**ft_lstadd_back:** Adds a new node at the end of the list.

**ft_lstdelone:** Frees the content of a single node using a custom deletion function.

**ft_lstclear:** Deletes and frees an entire list and its contents.

**ft_lstiter:** Iterates through a list and applies a function to each node's content.

**ft_lstmap:** Creates a new list resulting from applying a function to each node's content.

### Resources
- GNU C Library Reference Manual
- Linux Manual Pages (man7.org)
- w3schools
- stack overflow

AI Usage Disclosure:
AI was used as a tool to find the best resources and compare between them, as it was used to explain some ambiguous topics or points. Also, AI was used to help debug codes by explaining some errors and pointing to multiple edge cases.
Finally, AI was used heavily as a tool to simulate a defense scenario.