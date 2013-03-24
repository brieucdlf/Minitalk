/*
** my_revstr.c for exo0 - Jour06 in /home/delafo_b//C
** 
** Made by brieuc delafouchardiere
** Login   <delafo_b@epitech.net>
** 
** Started on  Mon Oct  8 18:20:32 2012 brieuc delafouchardiere
** Last update Wed Oct 10 09:51:47 2012 brieuc delafouchardiere
*/

int	my_strlen(char *str)
{
  int	m;

  m = 0;
  while (str[m] != '\0')
    {
      m = m + 1;
    }
  return (m);
}

char	*my_revstr(char *str)
{
  char	c;
  int	b;
  int	a;

  a = 0;
  b = my_strlen(str) - 1;
  while (a < b)
    {
      c = str[a];
      str[a] = str[b];
      str[b] = c;
      a = a + 1;
      b = b - 1;
    }
  return (str);
}
