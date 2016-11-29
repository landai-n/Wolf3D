/*
** my_strlen.c for my_printf in /home/landai_n/rendu/PSU_2013_my_printf/lib/src
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Tue Nov 12 19:22:43 2013 Nathanael Landais
** Last update Tue Nov 12 19:23:23 2013 Nathanael Landais
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}
