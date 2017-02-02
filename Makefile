CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = gnldemo

SRCS = ./*.c

LIB = libft/*.c

$(NAME): 
	@$(CC) $(CFLAGS) $(LIB) $(SRCS) -o $(NAME)

all: $(NAME)

fclean:
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all fclean re
