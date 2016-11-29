/*
** my_put_nbr.c for my_put_nbr in /home/houdu_l/rendu/Piscine-C-Jour_03
** 
** Made by Houdu Loic
** Login   <houdu_l@epitech.net>
** 
** Started on  Wed Oct  2 16:38:31 2013 Houdu Loic
** Last update Tue Nov 12 19:15:55 2013 Nathanael Landais
*/

int	display(int nb)
{
  if (nb / 10 != 0)
    display(nb / 10);
  my_putchar(-(nb % 10) + 48);
}

int	my_putnbr(int nb)
{
  if (nb < 0)
    my_putchar('-');
  else
    nb = -nb;
  display(nb);
  return (0);
}
