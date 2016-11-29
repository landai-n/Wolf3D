/*
** my_swap.c for graph in /home/landai_n/Test/Lib/my_lib/src/elem
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Tue Dec  3 22:47:59 2013 Nathanael Landais
** Last update Tue Dec  3 23:31:35 2013 Nathanael Landais
*/

void    my_swap(void *var1, void *var2)
{
  void  *temp;

  temp = var1;
  var1 = var2;
  var2 = temp;
}
