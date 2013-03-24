/*
** my_strncat.c for ex02 - Jour07 in /home/delafo_b//C
** 
** Made by brieuc delafouchardiere
** Login   <delafo_b@epitech.net>
** 
** Started on  Wed Oct 10 21:35:36 2012 brieuc delafouchardiere
** Last update Wed Oct 10 21:41:13 2012 brieuc delafouchardiere
*/

int     my_strlen(char *str)
{
  int   m;

  m = 0;
  while (str[m] != '\0')
    {
      m = m + 1;
    }
  return (m);
}

char	*my_strncat(char *dest, char *src, int nb)
{
  char  dest_len = my_strlen(dest);
  char  counter;

  counter = 0;
  while (counter < nb && src[counter] != '\0')
    {
      dest[dest_len + counter] = src[counter];
      counter = counter + 1;
    }
  dest[dest_len + counter] = '\0';
  return (dest);
}
