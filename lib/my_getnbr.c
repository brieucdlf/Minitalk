/*
** my_getnbr.c for getnbr in /home/delafo_b//C
** 
** Made by brieuc delafouchardiere
** Login   <delafo_b@epitech.net>
** 
** Started on  Sat Oct 13 20:15:49 2012 brieuc delafouchardiere
** Last update Mon Oct 22 22:24:26 2012 brieuc delafouchardiere
*/

int	my_getnbr(char *str)
{
  int	nbr;
  int	cnt;
  int	unit;

  cnt = 0;
  nbr = 0;
  unit = 1;
  while (str[cnt] != 0)
    {
      if (str[cnt] == '-' && str[cnt + 1] >= '0' && str[cnt + 1] <= '9')
	{
	  unit = -unit;
	  cnt = cnt + 1;
	}
      if (str[cnt] >= '0' && str[cnt] <= '9')
	{
	  nbr = (nbr * 10) + (str[cnt] - '0');
	  cnt = cnt + 1;
	}
    }
  return (nbr * unit);
}
