/*
** my_elem.h for my_elem in /home/landai_n/Test/Lib/my_lib/src/elem
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Tue Dec  3 23:40:21 2013 Nathanael Landais
** Last update Fri Jan 24 17:19:14 2014 Nathanael Landais
*/

#ifndef		__MY_ELEM_H__
# define	__MY_ELEM_H__
# include	<stdarg.h>
# include	<stdlib.h>
# include	<unistd.h>
# include	<sys/types.h>
# include	<sys/stat.h>
# include	<fcntl.h>
# define	MEMSIZE	64

int	my_putchar(char c);
int	my_putstr(char *str);
int	my_putnbr_base(unsigned int nbr, char *base);
char*	my_strcpy(char *dest, char *src);
void    my_swap(void *var1, void *var2);
int	my_putnbr(int nb);
void	my_printf(char *str, ...);
char	*my_realloc(char *str, int new_size);
int	to_nbr(char *str);
char    *to_str(int nbr);
void	my_memset(char *var, int value, int size);
int	my_strlen(char *str);
char	*get_nxtline(int file);
int	*my_str_to_nbrtab(char *str, int *nbr_word);
int     my_show_wordtab(char **tab);
int     my_putcolor(char *str, char *color);
char    *my_strcat(char *str1, char *str2);

#endif
