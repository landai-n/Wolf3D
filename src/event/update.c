/*
** update.c for Wolf3D in /home/landai_n/rendu/Igraph/Wolf3D/src
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Mon Dec  9 15:49:44 2013 Nathanael Landais
** Last update Fri Jan 24 17:57:19 2014 Nathanael Landais
*/
#include <time.h>
#include "wolf3d.h"

void	update(t_wolf *wolf)
{
  static int	actual_map = -1;

  if (actual_map == -1 || actual_map != wolf->world.map)
    update_map(wolf);
  actual_map = wolf->world.map;
  get_view(&wolf->player, wolf);
  mlx_put_image_to_window(wolf->mlx, wolf->win, wolf->world.view.img, 0, 0);
  mlx_string_put(wolf->mlx, wolf->win, 10, 15, 0xFFFF00, \
		 "Wolf3d 2014 - landai_n");
  mlx_string_put(wolf->mlx, wolf->win, 10, 35, 0xFFFF00, fps_counter());
}
