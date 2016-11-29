/*
** get_realpos.c for wolf3d in /run/media/landai_n/c4a01266-1ec6-4f48-a4d8-b6dd4913bf48/landai_n/rendu/Igraph/Wolf3D/src/get_world
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Fri Jan 10 17:36:19 2014 Nathanael Landais
** Last update Sat Jan 11 21:07:36 2014 Nathanael Landais
*/

#include <math.h>
#include "wolf3d.h"

void		get_realpos(t_wolf *wolf, t_coordfl *vect, int x)
{
  float		temp;

  temp = (WIDTH / 2 - x);
  temp /= WIDTH;
  vect->x = cos(rad(wolf->angle)) * CONST - temp * sin(rad(wolf->angle));
  vect->y = sin(rad(wolf->angle)) * CONST + temp * cos(rad(wolf->angle));
}
