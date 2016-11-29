/*
** my_putcolor.c for my_elem in /home/landai_n/rendu/Igraph/Wolf3D/lib/my_elem/src
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Mon Dec  9 12:53:38 2013 Nathanael Landais
** Last update Mon Dec  9 12:55:10 2013 Nathanael Landais
*/

#include "my_elem.h"

int	my_putcolor(char *str, char *color)
{
  my_putstr(color);
  my_putstr(str);
  my_putstr("\033[0m");
}
