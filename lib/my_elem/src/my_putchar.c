/*
** my_putchar.c for main in /home/landai_n/rendu/Piscine-c-Jour_04
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Sat Oct  5 14:22:31 2013 Nathanael Landais
** Last update Tue Dec  3 23:29:22 2013 Nathanael Landais
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}
