/*
** my_power_rec.c for power rec in /afs/epitech.net/users/all/delafo_b/rendu/lib/my
** 
** Made by brieuc delafouchardiere
** Login   <delafo_b@epitech.net>
** 
** Started on  Mon Oct 22 15:20:43 2012 brieuc delafouchardiere
** Last update Sun Mar 24 16:19:01 2013 Brieuc de La Fouchardière
*/

#include <stdio.h>

int	my_power_rec(int nb, int power)
{
  if (power > 0)
    return nb *= my_power_rec(nb, power - 1);
  return (1);
}
