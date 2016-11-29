/*
** my_putstr.c for my_putstr in /home/landai_n/rendu/Piscine-c-Jour_04
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Thu Oct  3 08:48:06 2013 Nathanael Landais
** Last update Tue Dec  3 22:33:34 2013 Nathanael Landais
*/

int	my_putstr(char *str)
{
  while (*str)
    write(1, str++, 1);
  return (0);
}
