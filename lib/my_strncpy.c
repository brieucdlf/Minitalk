/*
** my_strncpy.c for strncpy in /afs/epitech.net/users/all/delafo_b/rendu/lib/my
** 
** Made by brieuc delafouchardiere
** Login   <delafo_b@epitech.net>
** 
** Started on  Mon Oct 22 15:31:22 2012 brieuc delafouchardiere
** Last update Thu Feb 28 16:10:40 2013 brieuc delafouchardiere
*/

char	*my_strncpy(char *d, char *s, int n)
{
  int   c;

  c = -1;
  while (s[++c] && c < n)
    d[c] = s[c];
  if (c == 0 || n == 0)
    d[c] = 0;
  return (d);
}
