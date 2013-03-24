/*
** my_strstr.c for exo 4 - Jour 06 in /home/delafo_b//C
** 
** Made by brieuc delafouchardiere
** Login   <delafo_b@epitech.net>
** 
** Started on  Mon Oct  8 21:53:34 2012 brieuc delafouchardiere
** Last update Tue Oct  9 15:14:29 2012 brieuc delafouchardiere
*/

#include <stdlib.h>

int	my_strcheck(char *str, char *to_find)
{
  int	chk;

  chk = 0;
  while (to_find[chk] != '\0' && str[chk] != '\0')
    {
      if (str[chk] != to_find[chk])
	{
	  return (0);
	}
      chk = chk + 1;
    }
  return (1);
}

char	*my_strstr(char *str, char *to_find)
{
  int	ct;

  ct = 0;
  while (str[ct] != '\0')
    {
      if (my_strcheck(&str[ct], to_find) == 1)
	{
	  return (&str[ct]);
	}
      ct = ct + 1;
    }
  return (NULL);
}
