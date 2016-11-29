/*
** new_img.c for my_graph in /home/landai_n/Test/Lib/my_graph/src
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Wed Dec  4 12:18:18 2013 Nathanael Landais
** Last update Wed Dec 11 12:35:50 2013 Nathanael Landais
*/

#include "my_graph.h"

t_image		new_image(void *mlx, int width, int height)
{
  t_image	img;

  img.img = mlx_new_image(mlx, width, height);
  img.data = mlx_get_data_addr(img.img, &img.bpp, &img.size, &img.endian);
  img.height = height;
  img.width = width;
  return (img);
}
