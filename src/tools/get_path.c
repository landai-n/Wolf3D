/*
** get_path.c for wolf3d in /home/landai_n/rendu/Igraph/MUL_2013_wolf3d/src/tools
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Fri Jan 24 17:10:21 2014 Nathanael Landais
** Last update Fri Jan 24 17:54:24 2014 Nathanael Landais
*/

#include "wolf3d.h"

char	*get_path(int mapnbr, t_wolf *wolf)
{
  char	*map;
  char	*temp;

  temp = to_str(mapnbr);
  map = my_strcat(MAP_FILE, temp);
  free(temp);
  is_winning(map, wolf);
  return (map);
}
