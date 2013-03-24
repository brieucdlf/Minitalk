/*
** my_putnbr_base.c for Jour_06 in /home/delafo_b
**
** Made by Brieuc de La Fouchardiere
** Login   <delafo_b@epitech.net>
**
** Started on  Tue Oct  9 10:05:22 2012 brieuc de la fouchardiere
** Last update Sun Nov 18 21:30:27 2012 brieuc delafouchardiere
*/

#include "my.h"

int     my_putnbr_base(unsigned int nbr, char *base)
{
  int   base_len;

  base_len = my_strlen(base);
  if (nbr == 0)
    return (nbr);
  else
    my_putnbr_base((nbr / base_len), base);
  my_putchar(base[nbr % base_len]);
  return (nbr);
}
