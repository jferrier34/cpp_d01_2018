##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	main.c \
		menger.c

OBJ	=	$(SRC:.c=.o)

NAME	=	menger

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -ggdb3 -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
