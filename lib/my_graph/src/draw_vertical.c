/*
** draw_rect.c for draw_rect.c in /home/landai_n/Test/src
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Mon Dec  2 16:38:40 2013 Nathanael Landais
** Last update Sat Dec  7 22:50:59 2013 Nathanael Landais
*/

#include "my_graph.h"
#include "mlx.h"

void		draw_vertical(t_line line, int color, t_image *img, void *mlx)
{
  t_coord	actual;

  actual.y = line.y2;
  actual.x = line.x2;
  my_printf("line.y1 : %d - line.y2 : %d\n", line.y1, line.y2);
  while (actual.y < line.y1)
    {
      pxl_to_img(img, color, actual, mlx);
      actual.y++;
    }
}
