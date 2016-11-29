/*
** to_case.c for wolf3d in /home/landai_n/rendu/Igraph/Wolf3D/src/tools
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Wed Dec 11 14:45:39 2013 Nathanael Landais
** Last update Sat Jan 11 12:42:11 2014 Nathanael Landais
*/

#include "wolf3d.h"

t_coord		to_case(t_coordfl coord, t_wolf *wolf)
{
  t_coord	coord_case;

  coord_case.x = coord.x / wolf->world.size.x;
  coord_case.y = coord.y / wolf->world.size.y;
  return (coord_case);
}
