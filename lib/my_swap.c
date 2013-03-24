/*
** my_swap.c for exo01 in /home/delafo_b//DAY03
** 
** Made by brieuc delafouchardiere
** Login   <delafo_b@epitech.net>
** 
** Started on  Thu Oct  4 14:35:43 2012 brieuc delafouchardiere
** Last update Thu Oct  4 15:54:01 2012 brieuc delafouchardiere
*/

int	my_swap(int *a, int *b)
{
  int	d;

  d = *a;
  *a = *b;
  *b = d;
}
