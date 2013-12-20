/*
** utils.c for my_printf in /home/chapui_s/travaux/my_printf
**
** Made by chapui_s
** Login   <chapui_s@epitech.net>
**
** Started on  Thu Nov 14 16:34:06 2013 chapui_s
** Last update Sun Nov 17 12:27:46 2013 chapui_s
*/

#include "my_printf.h"
#include <unistd.h>

void	add_space(unsigned int size_to_add)
{
  while (size_to_add > 0)
  {
    write(1, " ", 1);
    size_to_add = size_to_add - 1;
  }
}

void	add_zero(unsigned int size_to_add)
{
  while (size_to_add > 0)
  {
    write(1, "0", 1);
    size_to_add = size_to_add - 1;
  }
}

unsigned int	my_strlen(char *str)
{
  unsigned int	i;

  i = 0;
  while (str[i])
    i = i + 1;
  return (i);
}

int	my_atoi(const char *str)
{
  int	i;
  int	number;

  i = 0;
  number = 0;
  while (str[i] >= '0' && str[i] <= '9')
  {
    number = number * 10;
    number = number + ((int)str[i] - '0');
    i = i + 1;
  }
  return (number);
}
