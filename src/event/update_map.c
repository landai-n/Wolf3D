/*
** update_map.c for wolf3d in /home/landai_n/rendu/Igraph/MUL_2013_wolf3d/src/event
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Fri Jan 24 17:24:46 2014 Nathanael Landais
** Last update Fri Jan 24 17:50:04 2014 Nathanael Landais
*/

#include "wolf3d.h"

void	update_map(t_wolf *wolf)
{
  char	*path_map;

  path_map = get_path(wolf->world.map, wolf);
  wolf->world.data = read_map(path_map, wolf);
  init_coordfl(&wolf->player, 2, 2);
  wolf->angle = 0;
  free(path_map);
}
