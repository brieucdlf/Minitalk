/*
** get_next_line.h for get next line h in /home/delafob/delafo_b/SVN/minishell2-2017-delafo_b/lib
** 
** Made by Brieuc de La Fouchardière
** Login   <delafob@epitech.net>
** 
** Started on  Sun Mar 10 22:00:32 2013 Brieuc de La Fouchardière
** Last update Sun Mar 10 22:00:47 2013 Brieuc de La Fouchardière
*/

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

# define MAX_READ 10

char	*my_gnl_strcat(char *file_buffer, char *buffer);
char	*gimme_good_line(char *file_buffer);
int	check_buffer(char *file_buffer);
char	*get_next_line(const int fd);

#endif /* !GET_NEXT_LINE_H_ */
