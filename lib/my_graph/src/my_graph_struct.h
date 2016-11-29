/*
** my_graph_struct.h for my_graph in /home/landai_n/Test/Lib/my_lib/src/graph
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Tue Dec  3 22:56:13 2013 Nathanael Landais
** Last update Fri Jan 10 18:20:33 2014 Nathanael Landais
*/

#ifndef		__MY_GRAPH_STRUCT_H__
# define	__MY_GRAPH_STRUCT_H__

typedef struct	s_coord
{
  int		x;
  int		y;
}               t_coord;

typedef struct	s_coordfl
{
  float		x;
  float		y;
}               t_coordfl;

typedef struct  s_line
{
  int	x1;
  int	y1;
  int	x2;
  int	y2;
}               t_line;

typedef struct	s_image
{
  char		*data;
  int		bpp;
  int		size;
  int		endian;
  void		*img;
  int		width;
  int		height;
}		t_image;

typedef struct	s_shape
{
  t_line	coord;
  void		*img;
}		t_shape;

#endif
