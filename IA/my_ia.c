/*
** EPITECH PROJECT, 2020
** my_ia.c
** File description:
** my ia for matchstick
*/

#include"../include/match.h"

int my_ia(char **map, in integ)
{
    int fline = first_line(map);
    int stick = 0;

    stick = nb_of_stick_rmv(map, integ, fline);
    print_update_board(fline, stick, integ, map);
    my_putstr("AI's turn...\n");
    put_rmv_match("AI ", fline, stick);
    print_map(map, integ.nb);
    print_rtl(number_stick(map, integ.nb));
}

int first_line(char **map)
{
    for (int i = 0; map[i] != NULL; i++){
        for (int k = 0; map[i][k] != '\n'; k++){
            if (map[i][k] == '|')
                return (i);
        }
    }
}

int nb_of_stick_rmv(char **map, in integ, int fline)
{
    int nbstick = 0;
    int nbstickrmv = 0;
    for (int i = 0; map[fline][i] != '\n'; i++) {
        if (map[fline][i] == '|')
            nbstick++;
    }
    nbstickrmv = stick_rmv(integ, fline, nbstick);
    if (nbstickrmv != 0)
        return (nbstickrmv);
    if (nbstick > integ.rmvstick)
        return (integ.rmvstick);
    return (1);
}

int stick_rmv(in integ, int fline, int nbstick)
{
    if (nbstick <= integ.rmvstick && fline == integ.nb)
        return (nbstick - 1);
    if (nbstick < integ.rmvstick)
        return (nbstick);
    return (0);
}