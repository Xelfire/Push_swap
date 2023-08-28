NAME = push_swap

SRC = *.c

OBJECTS = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: 
	gcc $(SRC) -o $(NAME) $(CFLAGS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re
