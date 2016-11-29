/*
** pxl_to_img.c for my_graph in /home/landai_n/Test/Lib/my_graph/src
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Wed Dec  4 15:25:49 2013 Nathanael Landais
** Last update Wed Dec  4 16:06:33 2013 Nathanael Landais
*/

#include "my_graph.h"

void	pxl_to_img(t_image *img, int color, t_coord coord, void *mlx)
{
  int	pos;

  if (coord.x > img->width || coord.y > img->height)
    return ;
  if (coord.x < 0 || coord.y < 0)
    return ;
  pos = (coord.y * img->size) + coord.x * (img->bpp/8);
  img->data[pos] = mlx_get_color_value(mlx, color);
  img->data[pos + 1] = mlx_get_color_value(mlx, color >> 8);
  img->data[pos + 2] = mlx_get_color_value(mlx, color >> 16);
}
