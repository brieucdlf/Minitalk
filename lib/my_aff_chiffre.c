 st/*
** my_aff_chiffre.c for exo03 in /home/delafo_b//DAY03
** 
** Made by brieuc delafouchardiere
** Login   <delafo_b@epitech.net>
** 
** Started on  Wed Oct  3 15:43:12 2012 brieuc delafouchardiere
** Last update Thu Nov 22 23:09:05 2012 brieuc delafouchardiere
*/

int	my_aff_chiffre()
{
  char c;

  c = 48;
  while (c <= 57)
    {
      my_putchar(c);
      c = c + 1;
    }
}
