/*
** key.c for wolf3d in /home/landai_n/rendu/Igraph/Wolf3D/src
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Mon Dec  9 15:28:35 2013 Nathanael Landais
** Last update Sun Jan 12 21:37:51 2014 Nathanael Landais
*/

#include <math.h>
#include "wolf3d.h"
#include "key.h"

void		key(int keycode, t_wolf *wolf)
{
  t_coordfl	pos;

  pos.x = (cos(rad(wolf->angle)) * CONST) / 4;
  pos.y = (sin(rad(wolf->angle)) * CONST) / 4;
  if (wolf->camera.y < 0)
    wolf->camera.y = 0;
  if (keycode == KEY_ESC)
    exit(mlx_destroy_window(wolf->mlx, wolf->win));
  if (keycode == KEY_UP)
    forward(wolf, &pos);
  if (keycode == KEY_DOWN)
    backward(wolf, &pos);
  if (keycode == KEY_LEFT)
    wolf->angle = (wolf->angle < 360) ? wolf->angle + 4 : 0;
  if (keycode == KEY_RIGHT)
    wolf->angle = (wolf->angle > 0) ? wolf->angle - 4 : 360;
  if (keycode == KEY_Z)
    wolf->camera.y += (wolf->camera.y < 300) ? 12 : 0;
  if (keycode == KEY_S)
    wolf->camera.y -= (wolf->camera.y > 0) ? 12 : 0;
  if (keycode == KEY_X)
    wolf->fog = !wolf->fog;
  update(wolf);
}
