/*
** my_evil_str.c for exo03bis in /home/delafo_b//DAY03
** 
** Made by brieuc delafouchardiere
** Login   <delafo_b@epitech.net>
** 
** Started on  Thu Oct  4 18:30:57 2012 brieuc delafouchardiere
** Last update Wed Oct 10 09:55:38 2012 brieuc delafouchardiere
*/

int	my_evil_str(char *str)
{
  int	a;
  int	b;
  char	*c;

  a = 0;
  b = my_strlen(str) - 1;
  while (a < b)
    {
      c[a] = str[a];
      str[a] = str[b];
      str[b] = c[a];
      a = a + 1;
      b = b - 1;
    }
  my_putstr(str);
}

