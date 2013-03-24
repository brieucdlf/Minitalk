/*
** main.c for main client in /home/delafob/delafo_b/SVN/minitalk/client
** 
** Made by Brieuc de La Fouchardière
** Login   <delafob@epitech.net>
** 
** Started on  Mon Mar 11 13:17:37 2013 Brieuc de La Fouchardière
** Last update Sun Mar 24 18:28:43 2013 Brieuc de La Fouchardière
*/

#include "client.h"

void	converting(int pid, char *str)
{
  int	i;
  int	j;

  j = 0;
  while (str[j])
    {
      i = 7;
      while (i >= 0)
	{
	  usleep(4000);
          if (((str[j] >> i) % 2) == 0)
            kill(pid, SIGUSR1);
          else
            kill(pid, SIGUSR2);
          i--;
	}
      j++;
    }
}

void	sending(int pid, char *str)
{
  my_putstr("\n\033[2msending message...\033[0m");
  converting(pid, str);
  converting(pid, "\n\033[33m*****************\033[0m\n");
  my_putstr("\n\n\033[33mMessage Sent\033[0m\n\n");
}

int	main(int argc, char **argv)
{
  int	pid_serv;

  if (argc > 2)
    {
      my_putstr("\033[33mACTUAL CLIENT PID : \033[0m");
      my_put_nbr(getpid());
      my_putchar('\n');
      sending(my_getnbr(argv[1]), argv[2]);
    }
  else
    {
      my_putstr("\033[33mError: enter the pid and characters..\033[0m");
      exit(1);
    }
  return (0);
}
