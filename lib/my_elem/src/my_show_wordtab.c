/*
** my_show_wordtab.c for my_show_wordtab in /home/landai_n/rendu/Piscine-C-Jour_08
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Thu Oct 10 11:19:48 2013 Nathanael Landais
** Last update Sat Dec  7 16:18:17 2013 Nathanael Landais
*/

int	my_show_wordtab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != 0)
    {
      my_printf("tab[%d] = %s\t", i, tab[i]);
      i++;
    }
}
