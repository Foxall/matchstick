##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile for matchstick
##

SRC		=	print_map.c				\
			my_putchar.c			\
			my_getnbr.c				\
			my_malloc.c				\
			my_putstr.c				\
			main.c					\
			interaction_player.c	\
			my_strlen.c				\
			victori.c				\
			IA/my_ia.c				\
			error_management.c		\
			value_struct.c			\
			my_put_nbr.c

NAME	=	matchstick

CC		=	gcc

O		=	-o

RM		=	rm -f

all :
	$(CC) $(O) $(NAME) $(SRC)

clean :
	$(RM) $(NAME)

fclean : clean

re : fclean all