##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

SRC	=	my_putchar.c	\
		my_putstr.c	\
		my_put_nbr.c	\
		my_strlen.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS	=	-Wextra -Wall -Werror -I ../../include -g3

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
