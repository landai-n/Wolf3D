/*
** is_winning.c for wolf3d.c in /home/landai_n/rendu/Igraph/MUL_2013_wolf3d/src/tools
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Fri Jan 24 17:51:53 2014 Nathanael Landais
** Last update Fri Jan 24 17:54:20 2014 Nathanael Landais
*/

#include <unistd.h>
#include "wolf3d.h"

void	is_winning(char *map, t_wolf *wolf)
{
  if (access(map, R_OK) == -1)
    {
      free(map);
      mlx_destroy_window(wolf->mlx, wolf->win);
      my_putcolor("You win\n", GREEN);
      exit(0);
    }
}
