/*
** main.c for wolf3d in /home/landai_n/rendu/Igraph/Wolf3D/src
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Mon Dec  9 11:40:14 2013 Nathanael Landais
** Last update Fri Jan 24 17:31:42 2014 Nathanael Landais
*/

#include "wolf3d.h"

int		main(int argc, char **argv)
{
  t_wolf	wolf;

  if (argc < 2)
    wolf.world.map = 1;
  else
    wolf.world.map = to_nbr(argv[1]);
  if ((wolf.mlx = mlx_init()) == NULL)
    return (is_error(ENV_ERROR));
  wolf.win = mlx_new_window(wolf.mlx, WIDTH, HEIGHT, NAME);
  wolf3d(&wolf);
  mlx_destroy_window(wolf.mlx, wolf.win);
  return (0);
}
