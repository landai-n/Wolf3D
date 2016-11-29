/*
** my_putnbr_base.c for my_putnbr_base in /home/landai_n/rendu/Piscine-C-Jour_06
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Mon Oct  7 19:07:31 2013 Nathanael Landais
** Last update Wed Nov 13 16:18:30 2013 Nathanael Landais
*/

int     my_putnbr_base(unsigned int nbr, char *base)
{
  if (nbr > my_strlen(base))
    my_putnbr_base(nbr / my_strlen(base), base);
  my_putchar(base[nbr % my_strlen(base)]);
  return (0);
}
