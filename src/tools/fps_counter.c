/*
** fps_counter.c for wolf3d in /home/landai_n/rendu/MUL_2013_wolf3d
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Mon Jan 13 16:00:14 2014 Nathanael Landais
** Last update Mon Jan 13 16:31:25 2014 Nathanael Landais
*/

#include <time.h>
#include "wolf3d.h"

char			*fps_counter()
{
  static clock_t	last_time = 0;
  float			current_time;
  char			*fps;

  current_time = clock();
  fps = to_str((int)(1000000 / ((current_time - last_time))));
  last_time = current_time;
  return (fps);
}
