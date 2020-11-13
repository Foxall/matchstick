/*
** EPITECH PROJECT, 2020
** interaction_player.c
** File description:
** player
*/

#include"include/match.h"

int read_nb(char *nbligne, char *nbstick, int nb)
{
    int i = 1;
    while (i == 1) {
        my_putstr("Line: ");
        if (read(0, nbligne, 9) == 0) {
            return (0);
        }
        i = str_is_nb(nbligne);
        i = size_ligne(nbligne, nb, i);
    }
    i++;
    while (i == 1) {
        my_putstr("Match: ");
        if (read(0, nbstick, 9) == 0) {
            return (0);
        }
        i = str_is_nb(nbstick);
    }
    return (1);
}

int number_stick(char **map, int nb)
{
    int stick = 0;
    for (int i = 1; map[i]; i++) {
        for (int k = 0; map[i][k]; k++){
            if (map[i][k] == '|')
                stick++;
        }
    }
    return (stick);
}

int str_is_nb(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9' || str[i] == '\n'){
        }else{
            my_putstr("Error: invalid input (positive number expected)\n");
            return (1);
        }
    }
    return (0);
}

int size_ligne(char *nbligne, int nb, int i)
{
    if (i == 1)
        return (1);
    int nbl = my_getnbr(nbligne);
    if (nbl > nb || nbl == 0){
        my_putstr("Error: this line is out of range\n");
        return (1);
    }
    return (0);
}