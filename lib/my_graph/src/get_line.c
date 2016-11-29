/*
** get_line.c for graph in /home/landai_n/Test/Lib/my_lib/src/graph
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Tue Dec  3 22:50:58 2013 Nathanael Landais
** Last update Sun Dec  8 20:09:24 2013 Nathanael Landais
*/

#include "my_graph.h"

t_line          get_line(t_coord begin, t_coord end)
{
  t_line        line;

  line.x1 = (begin.x < end.x) ? begin.x : end.x;
  line.y1 = (begin.y < end.y) ? begin.y : end.y;
  line.x2 = (begin.x < end.x) ? end.x : begin.x;
  line.y2 = (begin.y < end.y) ? end.y : begin.y;
  return (line);
}
