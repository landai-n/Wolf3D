/*
** is_error.c for wolf3d in /home/landai_n/rendu/Igraph/Wolf3D/src
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Mon Dec  9 11:48:27 2013 Nathanael Landais
** Last update Mon Dec  9 13:19:51 2013 Nathanael Landais
*/

#include "wolf3d.h"

int	is_error(int error)
{
  if (error == OPN_ERROR)
    my_putcolor("-- Error : Unable to open the map --\n", RED);
  if (error == NBR_ARG_ERROR)
    my_putcolor("-- Error : Incorrect number of argument --\n", RED);
  if (error == ENV_ERROR)
    my_putcolor("-- Error : Environment is empty --\n", RED);
  if (error == MALLOC_ERROR)
    my_putcolor("-- Error : Unable to load the map in memory --\n", RED);
  if (error == INVALID_MAP)
    my_putcolor("-- Error : Invalid map --\n", RED);
  return (1);
}
