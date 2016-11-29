/*
** init_var.c for my_graph in /home/landai_n/rendu/Igraph/fdf/Lib/my_graph/src
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Sun Dec  8 17:02:15 2013 Nathanael Landais
** Last update Sat Jan 11 12:40:36 2014 Nathanael Landais
*/

#include "my_graph.h"

void	init_coord(t_coord *coord, int x, int y)
{
  coord->x = x;
  coord->y = y;
}

void	init_coordfl(t_coordfl *coord, float x, float y)
{
  coord->x = x;
  coord->y = y;
}
