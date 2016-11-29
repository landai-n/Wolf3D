/*m'
** get_view.c for wolf3d in /home/landai_n/rendu/Igraph/Wolf3D/src/get_world
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Mon Dec  9 16:01:04 2013 Nathanael Landais
** Last update Sun Jan 12 02:52:11 2014 Nathanael Landais
*/

#include "wolf3d.h"

void		get_view(t_coordfl *player, t_wolf *wolf)
{
  int		x;

  x = 0;
  while (x < WIDTH)
    {
      draw_world(player, x, wolf);
      x++;
    }
}
