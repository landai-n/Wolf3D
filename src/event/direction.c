/*
** direction.c for wolf3d in /home/landai_n/rendu/Igraph/Wolf3D/src/event
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Sun Jan 12 01:10:41 2014 Nathanael Landais
** Last update Sun Jan 12 16:30:07 2014 Nathanael Landais
*/

#include "wolf3d.h"

void	forward(t_wolf *wolf, t_coordfl *pos)
{
  wolf->player.x += pos->x * collid(wolf, *pos, 1);
  wolf->player.y += pos->y * collid(wolf, *pos, 1);
}

void	backward(t_wolf *wolf, t_coordfl *pos)
{
  wolf->player.x -= pos->x * collid(wolf, *pos, 0);
  wolf->player.y -= pos->y * collid(wolf, *pos, 0);
}
