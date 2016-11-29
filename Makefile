##
## Makefile for Wolf3D in /home/landai_n/rendu/Igraph/Wolf3D
## 
## Made by Nathanael Landais
## Login   <landai_n@epitech.net>
## 
## Started on  Mon Dec  9 10:49:28 2013 Nathanael Landais
## Last update Fri Jan 24 17:53:10 2014 Nathanael Landais
##

SRC		=	src/main.c			\
			src/tools/rad.c			\
			src/wolf3d.c			\
			src/tools/is_error.c		\
			src/get_world/draw_world.c	\
			src/get_world/get_dist.c	\
			src/get_world/get_realpos.c	\
			src/get_world/get_halfheight.c	\
			src/get_world/get_view.c	\
			src/get_world/read_map.c	\
			src/tools/get_path.c		\
			src/tools/fps_counter.c		\
			src/tools/is_winning.c		\
			src/event/update_map.c		\
			src/event/key.c			\
			src/event/direction.c		\
			src/get_world/collid.c		\
			src/event/update.c		\
			src/get_world/draw_all.c	\

OBJS		=	$(SRC:.c=.o)

INCLUDES	=	-I includes/			\
			-I lib/minilibx/		\
			-I lib/my_graph/includes/	\
			-I lib/my_elem/includes/

LIB		=	-L lib/minilibx/		\
			-L lib/my_graph/bin/		\
			-L lib/my_elem/bin/

LFLAGS		=	-lmy_elem -lmy_graph -lmlx -lX11 -lXext -lm

CFLAGS		=	-W -Wall -Wextra -Wshadow -ansi -O1 -O2 -O3 $(INCLUDES)

NAME		=	wolf3d

all:	$(NAME)

$(NAME):	$(OBJS)
	cc -o $(NAME) $(OBJS) $(INCLUDES) $(LIB) $(LFLAGS) $(CFLAGS)

clean:
	rm -f $(NAME)

fclean:	clean
	rm -f $(OBJS)

re:	fclean all
