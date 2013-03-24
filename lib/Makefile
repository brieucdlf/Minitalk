##
## Makefile for Makefile in /home/delafo_b//lib
## 
## Made by brieuc delafouchardiere
## Login   <delafo_b@epitech.net>
## 
## Started on  Mon Oct 22 10:26:59 2012 brieuc delafouchardiere
## Last update Thu Feb 28 16:27:31 2013 brieuc delafouchardiere
##

CC	=	gcc

RM	=	rm -f

SRC	=	get_next_line.c \
		my_putchar.c \
		my_isneg.c \
		my_put_nbr.c \
		my_swap.c \
		my_putstr.c \
		my_strlen.c \
		my_getnbr.c \
		my_sort_int_tab.c \
		my_power_rec.c \
		my_square_root.c \
		my_is_prime.c \
		my_find_prime_sup.c \
		my_strcpy.c \
		my_strncpy.c \
		my_revstr.c \
		my_strstr.c \
		my_strcmp.c \
		my_strncmp.c \
		my_strupcase.c \
		my_strlowcase.c \
		my_strcapitalize.c \
		my_str_isalpha.c \
		my_str_isnum.c \
		my_str_islower.c \
		my_str_isupper.c \
		my_str_isprintable.c \
		my_showstr.c \
		my_showmem.c \
		my_strcat.c \
		my_strncat.c \
		my_strlcat.c \

MY	=	my.h

NAME	=	libmy.a

OBJ	=	$(SRC:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	$(RM) $(OBJ) 

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
