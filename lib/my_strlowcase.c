/*
** my_strlowcase.c for exo 08 - Jour06 in /home/delafo_b//C
** 
** Made by brieuc delafouchardiere
** Login   <delafo_b@epitech.net>
** 
** Started on  Tue Oct  9 17:45:06 2012 brieuc delafouchardiere
** Last update Wed Oct 10 09:49:35 2012 brieuc delafouchardiere
*/

char	*my_strlowcase(char *str)
{
  char	count;

  count = 0;
  while (str[count] != '\0')
    {
      if (str[count] >= 65 && str[count] <= 90)
	{
	  str[count] = str[count] + 32;
	}
      count = count + 1;
    }
  return (str);
}
