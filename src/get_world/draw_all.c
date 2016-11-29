/*
** draw_all.c for wolf3d in /home/landai_n/rendu/Igraph/MUL_2014_wolf3d_bonus/src/get_world
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Sun Jan 12 20:56:00 2014 Nathanael Landais
** Last update Fri Jan 24 17:03:55 2014 Nathanael Landais
*/

#include "wolf3d.h"

void	draw_sky(t_wolf *wolf, t_coord *actual, float wall_sz, int *color)
{
  while (actual->y < (HEIGHT / 2) + wolf->camera.y - wall_sz)
    {
      if (wolf->fog == 1)
        {
          *color = rgb(actual->y, actual->y / 2, actual->y / 4);
	  pxl_to_img(&wolf->world.view, *color, *actual, wolf->mlx);
        }
      else
	pxl_to_img(&wolf->world.view, SKY_COLOR, *actual, wolf->mlx);
      actual->y++;
    }
}

void	draw_wall(t_wolf *wolf, t_coord *actual, float wall_sz, int *color)
{
  while (actual->y < (HEIGHT / 2) + wall_sz)
    {
      pxl_to_img(&wolf->world.view, *color, *actual, wolf->mlx);
      actual->y++;
    }
}

void	draw_path(t_wolf *wolf, t_coord *actual, int *color)
{
  while (actual->y < HEIGHT)
    {
      if (wolf->fog == 1)
        {
          *color -= 1;
          pxl_to_img(&wolf->world.view, *color, *actual, wolf->mlx);
        }
      else
        pxl_to_img(&wolf->world.view, PATH_COLOR, *actual, wolf->mlx);
      actual->y++;
    }
}
