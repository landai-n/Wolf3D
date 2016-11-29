/*
** to_str.c for my_elem in /home/landai_n/rendu/MUL_2013_wolf3d/lib/my_elem/src
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Mon Jan 13 16:05:48 2014 Nathanael Landais
** Last update Mon Jan 13 16:24:06 2014 Nathanael Landais
*/

#include "my_elem.h"

int	get_nbrdigit(int nbr)
{
  int	i;

  i = 0;
  while (nbr > 0)
    {
      nbr /= 10;
      i++;
    }
  return (i);
}

char	*to_str(int nbr)
{
  char	*str;
  int	i;

  i = get_nbrdigit(nbr);
  if ((str = malloc((i + 1) * sizeof(*str))) == NULL)
    return (NULL);
  str[i--] = 0;
  while (i >= 0)
    {
      str[i--] = (nbr % 10) + '0';
      nbr /= 10;
    }
  return (str);
}
