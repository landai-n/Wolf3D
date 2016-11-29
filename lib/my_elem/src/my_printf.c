/*
** my_printf.c for my_printf in /home/landai_n/rendu/PSU_2013_my_printf
** 
** Made by Nathanael Landais
** Login   <landai_n@epitech.net>
** 
** Started on  Tue Nov 12 15:48:23 2013 Nathanael Landais
** Last update Tue Dec  3 23:36:27 2013 Nathanael Landais
*/

#include "my_elem.h"

int     check_str(char *str, int *i, va_list *ap)
{
  if (str[*i] == 's')
    return (my_putstr(va_arg(*ap, char *)));
  if (str[*i] == 'c')
    return (my_putchar(va_arg(*ap, int)));
  if (str[*i] == 'd' || str[*i] == 'i')
    return (my_putnbr(va_arg(*ap, int)));
  if (str[*i] == 'x')
    return (my_putnbr_base(va_arg(*ap, unsigned int), "0123456789abcdef"));
  if (str[*i] == 'X')
    return (my_putnbr_base(va_arg(*ap, unsigned int), "0123456789ABCDEF"));
  if (str[*i] == 'b')
    return (my_putnbr_base(va_arg(*ap, unsigned int), "01"));
  if (str[*i] == 'o')
    return (my_putnbr_base(va_arg(*ap, unsigned int), "01234567"));
  else
    return (1);
}

void		my_printf(char *str, ...)
{
  va_list	ap;
  char		prev_charac;
  int		i;
  int		to_print;
  int		escape;

  prev_charac = 0;
  i = 0;
  escape = 0;
  va_start(ap, str);
  while (str[i])
    {
      to_print = 1;
      if (prev_charac == '%' && !escape)
	to_print = check_str(str, &i, &ap);
      if (prev_charac == '%' && to_print == 1 && !escape)
	my_putchar('%');
      if (to_print && str[i] != '%')
	my_putchar(str[i]);
      escape = (prev_charac == '%' && str[i] == '%' && !escape);
      prev_charac = str[i++];
    }
  va_end(ap);
}
