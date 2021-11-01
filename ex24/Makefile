NAME =  libft.a

SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
OBJ = ./srcs/ft_putchar.o ./srcs/ft_putstr.o ./srcs/ft_strcmp.o ./srcs/ft_strlen.o ./src/ft_swap.o
HEADERS = ./includes/
OPTION = -c -I $(HEADER)

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(OPTION) $(SRCS) 
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
