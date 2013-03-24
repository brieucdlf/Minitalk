/*
** get_next_line.c for get next line in /home/delafob/delafo_b/SVN/minishell2-2017-delafo_b/lib
** 
** Made by Brieuc de La Fouchardière
** Login   <delafob@epitech.net>
** 
** Started on  Sun Mar 10 22:01:02 2013 Brieuc de La Fouchardière
** Last update Sun Mar 10 22:01:35 2013 Brieuc de La Fouchardière
*/

#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

char	*my_strcat(char *file_buffer, char *buffer)
{
  int	i;
  int	j;
  char	*new_file_buffer;

  i = 0;
  j = 0;
  new_file_buffer = malloc (my_strlen(file_buffer) + MAX_READ + 1);
  if (new_file_buffer == NULL)
    return (NULL);
  while (file_buffer[i])
    new_file_buffer[i] = file_buffer[i++];
  while (buffer[j])
    new_file_buffer[i++] = buffer[j++];
  new_file_buffer[i] = '\0';
  free (file_buffer);
  return (new_file_buffer);
}

char		*gimme_good_line(char *file_buffer)
{
  static int	i;
  int		j;
  char		*line_to_return;

  j = 0;
  line_to_return = malloc(my_strlen(file_buffer) + 1);
  if (!file_buffer[i])
    {
      my_putstr("exit\n");
      exit(1);
    }
  if (line_to_return == NULL)
    return (NULL);
  if (i >= my_strlen(file_buffer))
    return (NULL);
  while (file_buffer[i] != '\n' && file_buffer[i])
    line_to_return[j++] = file_buffer[i++];
  i = i + 1;
  line_to_return[j] = '\0';
  return (line_to_return);
}

int		check_buffer(char *file_buffer)
{
  static int	i;

  while (file_buffer[i])
    if (file_buffer[i] == '\n' || !file_buffer[i++])
      {
	i = i + 1;
	return (1);
      }
  return (0);
}

char		*get_next_line(const int fd)
{
  static char	*file_buffer;
  char		*buffer;
  int		ret;

  if (MAX_READ < 0 || fd < 0)
    return (NULL);
  if (!file_buffer)
    file_buffer = malloc(1);
  buffer = malloc(MAX_READ + 1);
  if (buffer == NULL || file_buffer == NULL)
    return (NULL);
  while (!check_buffer(file_buffer) && (ret = read(fd, buffer, MAX_READ)))
    {
      if (ret == -1)
	return (NULL);
      buffer[ret] = '\0';
      file_buffer = my_strcat(file_buffer, buffer);
      if (file_buffer == NULL)
	return (NULL);
    }
  free(buffer);
  return (gimme_good_line(file_buffer));
}
