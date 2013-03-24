/*
** strncmp.c for ex06 - Jour_06 in /home/delafo_b//C
** 
** Made by brieuc delafouchardiere
** Login   <delafo_b@epitech.net>
** 
** Started on  Mon Oct  8 22:26:16 2012 brieuc delafouchardiere
** Last update Mon Oct  8 23:13:22 2012 brieuc delafouchardiere
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (i < n && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
      i = i + 1;
    }
  return (*s1 - *s2);
}
