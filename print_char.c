/*
** print_char.c for my_printf in /home/chapui_s/travaux/my_printf/new
**
** Made by chapui_s
** Login   <chapui_s@epitech.net>
**
** Started on  Sat Nov 16 18:53:44 2013 chapui_s
** Last update Sun Nov 17 17:32:17 2013 chapui_s
*/

#include "my_printf.h"
#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

unsigned int	print_percent(void)
{
  my_putchar('%');
  return (1);
}

unsigned int	print_char(t_tmp_arg *tmp, t_params *params,
			   unsigned int s_to_add,
			   unsigned int s_to_print)
{
  unsigned int	chars_written;

  chars_written = 0;
  tmp->t_int = (unsigned char)tmp->t_int;
  s_to_print = 1;
  if (s_to_print < params->width)
    s_to_add = params->width - s_to_print;
  chars_written = s_to_print + s_to_add;
  if (params->less == 1)
    my_putchar(tmp->t_int);
  if (params->width >= s_to_print)
    add_space(s_to_add);
  if (params->less == 0)
    my_putchar(tmp->t_int);
  return (chars_written);
}
