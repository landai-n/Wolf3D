/*
** get_halfheight.c for wolf3d in /home/landai_n/rendu/Igraph/Wolf3D/src/get_world
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Wed Dec 11 14:10:01 2013 Nathanael Landais
** Last update Sun Jan 26 16:20:45 2014 Nathanael Landais
*/

#include "wolf3d.h"

float	get_halfheight(float k)
{
  if (k < 1)
    return (HEIGHT / 1.5);
  return (HEIGHT / (1.5 * k));
}
