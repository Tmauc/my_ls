##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

SRC	=	src/main.c	\
		src/ls.c	\
		src/lsa.c	\
		src/lsl.c	\
		src/lsla.c	\
		src/date.c	\
		src/name.c	\
		src/arg.c	\
		src/charpath.c	\
		src/flags.c	\
		src/total.c	\
		src/perm.c	\
		src/totala.c

OBJ     =       $(SRC:.c=.o)

NAME	=	my_ls

CFLAGS	=	-Wextra -Wall -Werror

CPPFLAGS=	-I include

LDFLAGS	=	-L./lib/my -lmy -lm -g

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	ar rc $(NAME) $(OBJ)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $(NAME) $(SRC) $(LDFLAGS)

clean:
	$(RM) $(OBJ)
	make clean -C lib/my

fclean:	clean
	make fclean -C lib/my
	$(RM) $(NAME)

re:	fclean all
