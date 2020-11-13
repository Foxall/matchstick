/*
** EPITECH PROJECT, 2020
** print_map.c
** File description:
** print map of game
*/

#include "include/match.h"

void print_star(char **str, int nbl, int star)
{
    int i = 0;
    while (i < star){
        str[nbl][i] = '*';
        i++;
    }
    str[nbl][star] = '\n';
}

void print_stick(char **map, int nb, int i)
{
    int nb_stick = 1 + 2 * i;
    int space = nb;
    int l = 0;

    i++;
    map[i][l] = '*';
    l = table_game(map, space, i, nb_stick);
    map[i][l] = '*';
    l++;
    map[i][l] = '\n';
}

int table_game(char **map, int space, int i, int nb_stick)
{
    int l = 1;
    for (int j = 0; j < space - i; j++) {
        map[i][l] = ' ';
        l++;
    }
    for (int k = 0; k < nb_stick; k++){
        map[i][l] = '|';
        l++;
    }
    for (int j = 0; j < space - i; j++){
        map[i][l] = ' ';
        l++;
    }
    return (l);
}

int print_update_board(int ligne, int nbstick, in integ, char **map)
{
    int lstick = 0;
    if (ligne < 1 || ligne > integ.nb)
        return (84);
    int i = 0;
    while (map[ligne][i]) {
        if (map[ligne][i] == '|')
            lstick++;
        i++;
    }
    if (nb_remove_stick(nbstick, lstick, integ.rmvstick) == 84)
        return (84);
    while (nbstick > 0){
        if (map[ligne][i] == '|'){
            map[ligne][i] = ' ';
            nbstick--;
        }
        i--;
    }
    return (0);
}

int nb_remove_stick(int nbstick, int lstick, int rmvstick)
{
    if (nbstick > lstick) {
        my_putstr("Error: not enough matches on this line\n");
        return (84);
    }
    if (nbstick > rmvstick) {
        my_putstr("Error: you cannot remove more than ");
        my_put_nbr(rmvstick);
        my_putstr(" matches per turn\n");
        return (84);
    }
    if (nbstick == 0) {
        my_putstr("Error: you have to remove at least one match\n");
        return (84);
    }
}