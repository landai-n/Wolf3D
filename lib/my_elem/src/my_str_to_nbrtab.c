/*
** my_str_to_nbrtab.c for my_str_to_nbrtab in /home/landai_n/rendu/Piscine-C-Jour_08/ex_04
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Thu Oct 10 10:22:44 2013 Nathanael Landais
** Last update Sun Jan 12 18:43:22 2014 Nathanael Landais
*/

#include <stdlib.h>

int	is_separator(char c)
{
  if (!(c >= 'A' && c <= 'Z') && !(c >= 'a' && c <= 'z') && c != '-')
    if (!(c >= '0' && c <= '9'))
      return (1);
  return (0);
}

int	count_nbr(char *str)
{
  int	nbr;
  int	i;

  nbr = 0;
  i = 0;
  if (str[0] == 0)
    return (0);
  if (!is_separator(str[0]))
    {
      nbr++;
      i++;
    }
  while (str[i] != 0)
    {
      if (!is_separator(str[i]) && is_separator(str[i - 1]))
	nbr++;
      i++;
    }
  return (nbr);
}

int	*my_str_to_nbrtab(char *str, int *nbr_elem)
{
  int	i;
  int	j;
  int	*nbrtab;

  *nbr_elem = count_nbr(str);
  nbrtab = malloc((*nbr_elem + 1) * sizeof(*nbrtab) + 1);
  i = 1;
  j = 1;
  if (str[0] == 0)
    return (0);
  if (!is_separator(str[0]))
    nbrtab[0] = to_nbr(str);
  else
    j = 0;
  while (str[i] != 0)
    {
      if (!is_separator(str[i]) && is_separator(str[i - 1]))
	nbrtab[j++] = to_nbr(str + i);
      i++;
      if (j && nbrtab[j - 1] < 0 && nbrtab[j - 1] > 4)
	return (NULL);
    }
  return (nbrtab);
}
