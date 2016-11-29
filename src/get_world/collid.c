/*
** collid.c for wolf3d in /home/landai_n/rendu/Igraph/Wolf3D/src/get_world
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Wed Dec 11 22:28:08 2013 Nathanael Landais
** Last update Fri Jan 24 17:44:24 2014 Nathanael Landais
*/

#include "wolf3d.h"

int	collid(t_wolf *wolf, t_coordfl coord, int direction)
{
  if (direction == 1)
    {
      coord.x += wolf->player.x;
      coord.y += wolf->player.y;
    }
  else
    {
      coord.x = wolf->player.x - coord.x;
      coord.y = wolf->player.y - coord.y;
    }
  if (wolf->world.data[(int)coord.y][(int)coord.x] == 2)
    {
      wolf->world.data[(int)coord.y][(int)coord.x] = 1;
      return (wolf->world.map = wolf->world.map + 1);
    }
  if (wolf->world.data[(int)coord.y][(int)coord.x] == 1)
    return (0);
  if (wolf->world.data[(int)coord.y][(int)coord.x] == 3)
    wolf->world.data[(int)coord.y][(int)coord.x] = 0;
  return (1);
}
