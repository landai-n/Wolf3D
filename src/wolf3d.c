/*
** wolf3d.c for wolf3d in /home/landai_n/rendu/Igraph/Wolf3D/src
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Mon Dec  9 15:17:42 2013 Nathanael Landais
** Last update Fri Jan 24 17:31:02 2014 Nathanael Landais
*/

#include <X11/Xlib.h>
#include "wolf3d.h"

int		wolf3d(t_wolf *wolf)
{
  wolf->fog = 0;
  wolf->camera = get_coord(0, 0);
  mlx_do_key_autorepeaton(wolf->mlx);
  mlx_hook(wolf->win, 2, (1L<<0), (void *)key, (void *)wolf);
  mlx_expose_hook(wolf->win, (void *)&update, (void *)wolf);
  wolf->world.view = new_image(wolf->mlx, WIDTH, HEIGHT);
  mlx_loop(wolf->mlx);
  return (0);
}
