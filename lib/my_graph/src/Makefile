##
## Makefile for libmy in /home/landai_n/Bistromatique/lib
## 
## Made by Nathanael Landais
## Login   <landai_n@epitech.net>
## 
## Started on  Sat Nov  2 03:12:57 2013 Nathanael Landais
## Last update Sun Dec  8 19:52:54 2013 Nathanael Landais
##

SRC	=	get_line.c		\
		invert_axes.c		\
		invert_coord.c		\
		draw_rect.c		\
		draw_line.c		\
		draw_vertical.c		\
		pxl_to_img.c		\
		get_var.c		\
		new_img.c		\
		init_var.c		\
		rgb.c

OBJ	=	$(SRC:.c=.o)

INCLUDE	=	.

NAME	=	libmy_graph.a

all:	$(NAME)

$(NAME):
	cc -c $(SRC) -I $(INCLUDE)
	ar rvs $(NAME) $(OBJ)
	ranlib $(NAME)
	cp my_graph.h ../includes/
	cp my_graph_struct.h ../includes/
	mv $(NAME) ../bin/

clean:
	rm $(OBJ)

fclean: clean
	rm -f ../bin/$(NAME)

re:	fclean all
