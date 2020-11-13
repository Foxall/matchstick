/*
** EPITECH PROJECT, 2020
** match.h
** File description:
** include of match
*/

#include "struct.h"
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

void my_putchar(char c);
void print_star(char **str, int nbl, int star);
int give_map(int nb, char **map);
void print_stick(char **map, int nb, int i);
int my_getnbr(char *str);
char *my_malloc(char *str, int size);
int my_putstr(char const *str);
int table_game(char **map, int space, int i, int nb_ligne);
char **dd_malloc(int nb);
void print_map(char **map, int nb);
int my_game(char *nbligne, char *nbstick, char **map, in integ);
int read_nb(char *nbligne, char *nbstick, int nb);
int number_stick(char **map, int nb);
void free_dd(char **map, int nb);
int print_update_board(int ligne, int nbstick, in integ, char **map);
int str_is_nb(char *str);
int read_gestion(char *nbstick, char *nbligne);
int nb_remove_stick(int nbstick, int lstick, int rmvstick);
int size_ligne(char *nbligne, int nb, int i);
int error_management(char **av);
int my_ia(char **map, in integ);
int winner_is(int count);
int first_line(char **map);
int my_put_nbr(int nb);
int stick_rmv(in integ, int fline, int nbstick);
int nb_of_stick_rmv(char **map, in integ, int fline);
void put_rmv_match(char *, int, int);
void print_rtl(int nbstick);