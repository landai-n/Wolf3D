/*
** draw_world.c for wolf3d in /home/landai_n/rendu/Igraph/Wolf3D/src/get_world
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Mon Dec  9 16:19:24 2013 Nathanael Landais
** Last update Fri Jan 24 16:47:47 2014 Nathanael Landais
*/

#include "wolf3d.h"

void		draw_world(t_coordfl *player, int x, t_wolf *wolf)
{
  float		wall_dist;
  float		wall_sz;
  t_coord	actual;
  int		color;

  wall_dist = get_dist(wolf, player, &color, x);
  wall_sz = get_halfheight(wall_dist);
  init_coord(&actual, x, 0);
  if (wolf->fog == 1)
    color = rgb(actual.y, actual.y / 2, actual.y / 4);
  draw_sky(wolf, &actual, wall_sz, &color);
  draw_wall(wolf, &actual, wall_sz, &color);
  draw_path(wolf, &actual, &color);
}
