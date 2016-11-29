/*
** draw_rect.c for draw_rect.c in /home/landai_n/Test/src
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Mon Dec  2 16:38:40 2013 Nathanael Landais
** Last update Sun Dec  8 22:13:43 2013 Nathanael Landais
*/

#include "my_graph.h"
#include "mlx.h"

void		draw_line(t_line line, int color, t_image *img, void *mlx)
{
  t_coord	actual;
  int		invert;

  invert = ((line.x2 - line.x1) <= (line.y2 - line.y1));
  if (invert)
    invert_axes(&line);
  actual.x = line.x1;
  while (actual.x < line.x2)
    {
      actual.y = line.y1 + ((line.y2 - line.y1)*(actual.x-line.x1))
	/ (line.x2 - line.x1);
      if (!invert)
	pxl_to_img(img, color, actual, mlx);
      else
	pxl_to_img(img, color, invert_coord(actual), mlx);
      actual.x++;
    }
}
