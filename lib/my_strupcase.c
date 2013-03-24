/*
** my_strupcase.c for ex_07 - Jour06 in /home/delafo_b//C
** 
** Made by brieuc delafouchardiere
** Login   <delafo_b@epitech.net>
** 
** Started on  Tue Oct  9 15:49:53 2012 brieuc delafouchardiere
** Last update Tue Oct  9 17:42:10 2012 brieuc delafouchardiere
*/

char	*my_strupcase(char *str)
{
  char	count;

  count = 0;
  while (str[count] != '\0')
    {
      if (str[count] >= 97 && str[count] <= 122)
	{
	  str[count] = str[count] - 32;
	}
      count = count + 1;
    }
  return (str);
}
