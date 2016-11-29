/*
** read_map.c for fdf in /home/landai_n/rendu/Igraph/fdf/src
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Wed Dec  4 16:36:56 2013 Nathanael Landais
** Last update Sun Jan 12 20:15:06 2014 Nathanael Landais
*/

#include "wolf3d.h"

t_coord		get_dimensions(char *path)
{
  int		file;
  t_coord	dimensions;
  char		*str;

  if ((file = open(path, O_RDONLY)) == -1)
    exit(is_error(OPN_ERROR));
  dimensions.x = 0;
  dimensions.y = 0;
  while ((str = get_nxtline(file)) != NULL)
    {
      dimensions.y++;
      free(str);
    }
  close(file);
  return (dimensions);
}

int		**read_map(char *path, t_wolf *wolf)
{
  int		file;
  t_coord	dimension;
  int		**map;
  char		*str;
  int		i;

  i = 0;
  dimension = get_dimensions(path);
  if ((file = open(path, O_RDONLY)) == -1)
    exit(is_error(OPN_ERROR));
  if ((map = malloc((dimension.y + 1) * sizeof(*map))) == NULL)
    exit(is_error(MALLOC_ERROR));
  map[0] = NULL;
  while ((str = get_nxtline(file)) != NULL)
    {
      map[i++] = my_str_to_nbrtab(str, &dimension.x);
      free(str);
      if (map[i - 1] == NULL)
	exit(is_error(INVALID_MAP));
    }
  if (map[0] == NULL)
    exit(is_error(OPN_ERROR));
  wolf->world.size = dimension;
  close(file);
  return (map);
}
