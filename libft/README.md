# libft
libft is a library of useful C function

## Installation
1. Download this repository to your working directory
2. 'make -C libft'
3. 'make -C libft clean'

## Usage
Include 'libft/libft.a' in your compile command

## Note
- Most of the functions are protected agains 'NULL' inputs, which can make debugging stage a little confusing

## Known Bugs
- ft_cryptor does not work for binary files or files containing unicode
- ft_strjoin may cause memory, use a 'temp' string

## Table of Content

### linkedlist
- ft_lstadd adds the element _new_ at the beginning of the list
- ft_lstdel free the entire list and sets it to 'NULL'
- ft_lstdelone finds the one corresponding link and deletes it
- ft_lstiter iterates the list _lst_ and applies the function _f_ to each link
- ft_lstnew allocates and returns a new link
- ft_lstputstr iterates the list and display each link's content

### memory
- ft_memalloc allocates and returns a new memory area
- ft_memccpy 'man memccpy'
- ft_memchr 'man memchr'
- ft_memcmp 'man memcmp'
- ft_memcpy 'man memcpy'
- ft_memdel free the memmory area and set it to 'NULL'
- ft_memmove 'man memmove'
- ft_memset 'man memset'

### string
- ft_strcat 'man strcat'
- ft_strcheckch chech for character _ch_, returns the location of _ch_ or -1 if _ch_ is not found
- ft_strchr 'man strchr'
- ft_strclr 'man strclr'
- ft_strcmp 'man strcmp'
- ft_strcpy 'man strcpy'
- ft_strdel frees the string and sets it to 'NULL'
- ft_strdup 'man strdup'
- ft_strequ compares _s1_ and _s2_
- ft_striter applies function _f_ to each character of the string
- ft_striteri same as ft_striter, but different _f_ format
- ft_strjoin allocates and returns the result of the concatenation of _s1_ and _s2_
- ft_strlcat 'man strlcat'
- ft_strlen 'man strlen'
- ft_strmap same as ft_striter, but different _f_ format
- ft_strmapi same as ft_strmap, but different _f_ format
- ft_strncat 'man strncat'
- ft_strncmp 'man strncmp'
- ft_strncpy 'man strncpy'
- ft_strnequ compares _s1_ and _s2_ up to _n_ characters or until a '\0' is reached
- ft_strnew allocates and returns a new string
- ft_strnstr 'man strnstr'
- ft_strrchr 'man strrchr'
- ft_strrev reverses the string
- ft_strsplit allocates and returns an array of new strings obtained by splitting _s_ using the character _c_ as a delimiter
- ft_strstr 'man strstr'
- ft_strsub allocates and returns a new substring from the string given as argument where the substring begins at _start_ and is of size _len_
- ft_strtrim allocates and returns a copy of the string given as argument without whitespaces at the beginning and the end or the string

### twodarray
- ft_freetab frees the 2D array and sets it to 'NULL'
- ft_printtab displays each string in the array
- ft_tabinit allocates and returns a new 2D array

### utility
- ft_atoi 'man atoi'
- ft_bzero 'man bzero'
- ft_cryptor makes the string unreadable, using it again reverse the affect
- ft_isalnum 'man isalnum'
- ft_isalpha 'man isalpha'
- ft_isascii 'man isascii'
- ft_isdigit 'man isdigit'
- ft_isprint 'man isprint'
- ft_itoa allocates and returns a string converted from a integer
- ft_itoa_base same as ft_itoa but can choose which base (2 - 16) to convert the integer into
- ft_putchar outputs character _c_ to the standard output
- ft_putchar_fd outputs character _c_ to the file descriptor _fd_
- ft_putendl outputs the string _s_ to the standard output followed by a '\n'
- ft_putendl_fd outputs the string _s_ to the file descriptor _fd_ followed by a '\n'
- ft_putnbr outputs the integer _n_ to the standard output
- ft_putnbr_fd outputs the integer _n_ to the file descriptor _fd_
- ft_putstr outputs the string _s_ to the standard output
- ft_putstr_fd outputs the string _s_ to the file descriptor _fd_
- ft_tolower 'man tolower'
- ft_toupper 'man toupper'
- get_next_line returns a line read from a file descriptor and is able to manage multiple file descriptors