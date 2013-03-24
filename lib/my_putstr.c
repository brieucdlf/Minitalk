/*
** my_putstr.c for exo2 in /home/delafo_b//DAY03
** 
** Made by brieuc delafouchardiere
** Login   <delafo_b@epitech.net>
** 
** Started on  Thu Oct  4 16:06:51 2012 brieuc delafouchardiere
** Last update Thu Oct 25 15:49:31 2012 brieuc delafouchardiere
*/

int	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}
