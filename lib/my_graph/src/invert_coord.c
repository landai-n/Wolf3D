/*
** invert_coord.c for my_graph in /home/landai_n/Test/src
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Sun Dec  8 19:43:20 2013 Nathanael Landais
** Last update Mon Dec  9 18:23:22 2013 Nathanael Landais
*/

#include "my_graph.h"

t_coord		invert_coord(t_coord get)
{
  t_coord	coord;

  coord.x = get.y;
  coord.y = get.x;
  return (coord);
}
