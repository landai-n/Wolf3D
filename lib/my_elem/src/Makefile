##
## Makefile for libmy in /home/landai_n/Bistromatique/lib
## 
## Made by Nathanael Landais
## Login   <landai_n@epitech.net>
## 
## Started on  Sat Nov  2 03:12:57 2013 Nathanael Landais
## Last update Fri Jan 24 17:18:57 2014 Nathanael Landais
##

SRC	=	my_putchar.c		\
		my_putstr.c		\
		my_putnbr.c		\
		my_strcat.c		\
		my_putcolor.c		\
		my_realloc.c		\
		to_nbr.c		\
		to_str.c		\
		my_strcpy.c		\
		my_swap.c		\
		my_putnbr_base.c	\
		my_memset.c		\
		my_strlen.c		\
		get_nxtline.c		\
		my_str_to_nbrtab.c	\
		my_show_wordtab.c	\
		my_printf.c

OBJ	=	$(SRC:.c=.o)

INCLUDE	=	.

NAME	=	libmy_elem.a

all:	$(NAME)

$(NAME):
	cc -c $(SRC) -I $(INCLUDE)
	ar rvs $(NAME) $(OBJ)
	ranlib $(NAME)
	mv $(NAME) ../bin/
	cp my_elem.h ../includes/

clean:
	rm $(OBJ)

fclean: clean
	rm -f ../bin/$(NAME)

re:	fclean all
