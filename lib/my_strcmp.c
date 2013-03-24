/*
** my_strcmp.c for exo 6 - Jour_06 in /home/delafo_b//C
** 
** Made by brieuc delafouchardiere
** Login   <delafo_b@epitech.net>
** 
** Started on  Mon Oct  8 21:54:30 2012 brieuc delafouchardiere
** Last update Mon Oct  8 22:21:55 2012 brieuc delafouchardiere
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
      i = i + 1;
    }
  return (*s1 - *s2);
}
