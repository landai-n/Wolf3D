/*
** rgb.c for my_graph in /home/landai_n/Test/Lib/my_lib/src/graph
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Tue Dec  3 23:08:28 2013 Nathanael Landais
** Last update Mon Dec  9 16:44:08 2013 Nathanael Landais
*/

int	rgb(int red, int green, int blue)
{
  red = (red > 255) ? 255 : red;
  green = (green > 255) ? 255 : green;
  blue = (blue > 255) ? 255 : blue;
  red = (red < 0) ? 0 : red;
  green = (green < 0) ? 0 : green;
  blue = (blue < 0) ? 0 : blue;
  green = green << 8;
  red = red << 16;
  return (red + green + blue);
}
