/*
** my_strcpy.c for exo 1 - strcpy in /afs/epitech.net/users/all/delafo_b/rendu/piscine/Jour_06/ex_01
** 
** Made by brieuc delafouchardiere
** Login   <delafo_b@epitech.net>
** 
** Started on  Mon Oct  8 09:34:26 2012 brieuc delafouchardiere
** Last update Mon Oct  8 11:20:01 2012 brieuc delafouchardiere
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0' || dest[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
