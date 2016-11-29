/*
** invert_line.c for my_graph in /home/landai_n/Test/Lib/my_lib/src/graph
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Tue Dec  3 23:00:38 2013 Nathanael Landais
** Last update Sun Dec  8 19:34:40 2013 Nathanael Landais
*/

#include "my_graph.h"

void    swap_coord(int *var1, int *var2)
{
  int  temp;

  temp = *var1;
  *var1 = *var2;
  *var2 = temp;
}

void	invert_axes(t_line *line)
{
  swap_coord(&line->x1, &line->y1);
  swap_coord(&line->x2, &line->y2);
}
