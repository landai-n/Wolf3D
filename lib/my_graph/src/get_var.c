/*
** get_var.c for my_graph in /home/landai_n/Test/Lib/my_graph/src
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Wed Dec  4 15:17:48 2013 Nathanael Landais
** Last update Sun Dec  8 17:41:04 2013 Nathanael Landais
*/

#include "my_graph.h"

t_coord		get_coord(int x, int y)
{
  t_coord	coord;

  coord.x = x;
  coord.y = y;
  return (coord);
}
