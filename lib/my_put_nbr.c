/*
** my_put_nbr.c for exo07 in /home/delafo_b//DAY03
** 
** Made by brieuc delafouchardiere
** Login   <delafo_b@epitech.net>
** 
** Started on  Thu Oct  4 10:59:35 2012 brieuc delafouchardiere
** Last update Wed Oct 10 15:47:47 2012 brieuc delafouchardiere
*/

int	 my_put_nbr(int nb)
{
  int	unit;
  int	div;

  if (nb < 0)
    {
      nb = -nb;
      my_putchar('-');
    }
  if (nb < 0 || nb >= 10)
    {
      unit = nb % 10;
      div = nb / 10;
      my_put_nbr(div);
      my_putchar(unit + '0');
    }
  else
    {
      my_putchar(nb + '0');
    }
}
