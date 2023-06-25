NAME = push_swap
FLAGS = -Wall -Wextra -Werror
CC = gcc
SRC = push_swap.c movements.c movements2.c movements3.c sorting.c sorting2.c utils.c utils2.c errors.c ./libft/*.c

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean : 
		rm -rf $(NAME)
fclean : clean
re : fclean all