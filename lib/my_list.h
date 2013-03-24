/*
** my_list.h for Jour 12 in /afs/epitech.net/users/all/delafo_b/rendu/lib/my
** 
** Made by brieuc delafouchardiere
** Login   <delafo_b@epitech.net>
** 
** Started on  Wed Oct 24 10:57:07 2012 brieuc delafouchardiere
** Last update Wed Oct 24 10:58:52 2012 brieuc delafouchardiere
*/

#ifndef MY_LIST_H_
#define MY_LIST_H_

typedef struct s_list
{
  void *data;
  struct s_list *next;
} t_list;

#endif
