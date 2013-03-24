/*
** main.c for main server in /home/delafob/delafo_b/SVN/minitalk/server
** 
** Made by Brieuc de La Fouchardière
** Login   <delafob@epitech.net>
** 
** Started on  Mon Mar 11 13:19:09 2013 Brieuc de La Fouchardière
** Last update Sun Mar 24 16:29:13 2013 Brieuc de La Fouchardière
*/

#include "serv.h"

void		convert_back(char *buffer)
{
  int		i;
  int		power;
  char		c;

  i = 0;
  c = 0;
  power = 7;
  while (i < 8)
    c = c + (buffer[i++] * my_power_rec(2, power--));
  my_putchar(c);
}

void		serv_handler(int serv_sig)
{
  static int	i;
  static char	buffer[8];

  if (serv_sig == SIGUSR1)
    {
      buffer[i++] = 0;
    }
  if (serv_sig == SIGUSR2)
    {
      buffer[i++] = 1;
    }
  if (i == 8)
    {
      convert_back(buffer);
      i = 0;
      while (i < 7)
	buffer[i++] = 0;
      i = 0;
    }
}

void		serv_waiting()
{
  while (1)
    {
      usleep(1000);
      signal(SIGUSR1, serv_handler);
      signal(SIGUSR2, serv_handler);
    }
}

int		main()
{
  my_putstr("\033[33mSERVER PID : \033[0m");
  my_put_nbr(getpid());
  my_putstr("\n\n\033[2mWaiting client messages...\n\n\033[0m");
  serv_waiting();
  return (0);
}
