/*
** my_strdup.c for exo01 - Jour08 in /home/delafo_b//lib
** 
** Made by brieuc delafouchardiere
** Login   <delafo_b@epitech.net>
** 
** Started on  Thu Oct 11 10:31:41 2012 brieuc delafouchardiere
** Last update Thu Oct 11 11:36:30 2012 brieuc delafouchardiere
*/

#include <stdlib.h>

char	*my_strdup(char *src);
{
  char	*str;
  int	 counter;

  counter = 0;
  while (str[counter])
    {
      str[counter] = src[counter];
    }
  str = malloc(my_strlen(src));
  return (str);
}
