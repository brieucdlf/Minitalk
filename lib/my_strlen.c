/*
** my_strlen.c for exo03 in /home/delafo_b//DAY03
** 
** Made by brieuc delafouchardiere
** Login   <delafo_b@epitech.net>
** 
** Started on  Thu Oct  4 17:58:14 2012 brieuc delafouchardiere
** Last update Thu Oct  4 18:16:40 2012 brieuc delafouchardiere
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
