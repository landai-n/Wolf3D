/*
** my_graph.h for my_graph in /home/landai_n/Test/Lib/my_lib/src/graph
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Tue Dec  3 23:07:18 2013 Nathanael Landais
** Last update Sat Jan 11 12:41:11 2014 Nathanael Landais
*/

#ifndef		__MY_GRAPH_H__
# define	__MY_GRAPH_H__
# include	"my_graph_struct.h"
# include	"mlx.h"

t_line	get_line(t_coord begin, t_coord end);
void	invert_axes(t_line *line);
void	draw_rect(t_line diagonal, int color, t_image *img, void *mlx);
int	rgb(int red, int green, int blue);
void	draw_line(t_line line, int color, t_image *img, void *mlx);
void	draw_vertical(t_line line, int color, t_image *img, void *mlx);
t_image	new_image(void *mlx, int width, int height);
t_coord	get_coord(int x, int y);
void    pxl_to_img(t_image *img, int color, t_coord coord, void *mlx);
void    init_coord(t_coord *coord, int x, int y);
void    init_coordfl(t_coordfl *coord, float x, float y);
t_coord invert_coord(t_coord get);

#endif
