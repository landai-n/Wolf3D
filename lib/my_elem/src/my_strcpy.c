/*
** my_strcpy.c for my_strcpy in /home/landai_n/rendu/Piscine-C-Jour_06
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Mon Oct  7 09:30:34 2013 Nathanael Landais
** Last update Wed Dec  4 22:16:06 2013 Nathanael Landais
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  if (!dest || !src)
    return (0);
  while (dest[i] && src[i])
    dest[i] = src[i++];
  dest[i] = 0;
  return (dest);
}
