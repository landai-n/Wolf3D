/*
** get_dist.c for wolf3d in /run/media/landai_n/c4a01266-1ec6-4f48-a4d8-b6dd4913bf48/landai_n/rendu/Igraph/Wolf3D/src/get_world
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Fri Jan 10 17:15:11 2014 Nathanael Landais
** Last update Sun Feb  2 18:06:37 2014 Nathanael Landais
*/

#include <stdio.h>
#include "wolf3d.h"

float		get_dist(t_wolf *wolf, t_coordfl *player, int *color, int x)
{
  t_coordfl	vect;
  t_coord	pos;
  float		k;

  get_realpos(wolf, &vect, x);
  k = 0.1;
  pos.x = player->x + k * vect.x;
  pos.y = player->y + k * vect.y;
  while (wolf->world.data[pos.y][pos.x] == 0)
    {
      pos.x = player->x + k * vect.x;
      pos.y = player->y + k * vect.y;
      k += 0.01;
    }
  *color = pos.x * 50 / wolf->world.size.x;
  *color += pos.y * 10 / wolf->world.size.y;
  *color -= 110;
  if (*color < 0)
    *color = -*color;
  *color = rgb(*color, *color, *color);
  if (wolf->world.data[pos.y][pos.x] == 2)
    *color = SKY_COLOR;
  if (wolf->world.data[pos.y][pos.x] == 3)
    *color = 0x779955;
  return (k);
}
