NAME = libft.a
CC = gcc
SRCS =  ./srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c srcs/ft_putchar.c
OBJ = ./ft_putchar.o ./ft_putstr.o ./ft_strcmp.o ./ft_strlen.o ./ft_swap.o
HEADERS = ./includes/

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -c -I $(HEADERS) $(SRCS)
		ar rc $(NAME) $(OBJ)


clean:
	/bin/rm -f $(OBJ)

fclean: clean
		/bin/rm -f $(NAME)

re: 	fclean all
