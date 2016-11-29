/*
** draw_rect.c for my_graph in /home/landai_n/Test/Lib/my_lib/src/graph
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Tue Dec  3 23:04:27 2013 Nathanael Landais
** Last update Mon Dec  9 16:38:18 2013 Nathanael Landais
*/

#include "my_graph.h"

void		draw_rect(t_line diagonal, int color, t_image *img, void *mlx)
{
  t_coord	coord;

  coord.x = diagonal.x1;
  coord.y = diagonal.y1;
  while (coord.x < diagonal.x2)
    {
      while (coord.y < diagonal.y2)
	{
	  pxl_to_img(img, color, coord, mlx);
          coord.y++;
	}
      coord.y = diagonal.y1;
      coord.x++;
    }
}
