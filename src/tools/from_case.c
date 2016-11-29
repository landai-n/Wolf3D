/*
** from_case.c for wolf3d in /home/landai_n/rendu/Igraph/Wolf3D/src
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Mon Dec  9 16:11:18 2013 Nathanael Landais
** Last update Wed Dec 11 15:06:08 2013 Nathanael Landais
*/

int	from_case(int grid, int size)
{
  if (grid == 0)
    return (0);
  return (size / grid);
}
