/*
** EPITECH PROJECT, 2020
** main
** File description:
** main of matchstick
*/

#include "include/match.h"

int main(int ac, char **av)
{
    in integ;
    char *nbligne = my_malloc(nbligne, 10);
    char *nbstick = my_malloc(nbstick, 10);
    if (ac < 3)
        return (84);
    if (error_management(av) == 84)
        return (84);
    integ.count = 0;
    integ.nb = my_getnbr(av[1]);
    integ.rmvstick = my_getnbr(av[2]);
    char **map = dd_malloc(integ.nb);
    give_map(integ.nb, map);
    print_map(map, integ.nb);
    my_putchar('\n');
    my_game(nbligne, nbstick, map, integ);
    free_dd(map, integ.nb);
    free(nbligne);
    free(nbstick);
}

void free_dd(char **map, int nb)
{
    for (int i = 0; i < nb + 2; i++)
        free(map[i]);
    free(map);
}

void print_map(char **map, int nb)
{
    for (int i = 0; i < nb + 2; i++)
        my_putstr(map[i]);
}

int give_map(int nb, char **map)
{
    int i = 0;
    int star = nb * 2 + 1;
    print_star(map, 0, star);
    while (i < nb)
    {
        print_stick(map, nb, i);
        i++;
    }
    print_star(map, nb + 1, star);
}

int my_game(char *nbligne, char *nbstick, char **map, in integ)
{
    int i = 0;
    while (number_stick(map, integ.nb) > 0) {
        if (i % 2 == 1) {
            my_putstr("Your turn:\n");
            if (read_nb(nbligne, nbstick, integ.nb) == 0)
                return (0);
            int innbligne = my_getnbr(nbligne);
            int innbstick = my_getnbr(nbstick);
            if (print_update_board(innbligne, innbstick, integ, map) == 0) {
                put_rmv_match("Player ", innbligne, innbstick);
                print_map(map, integ.nb);
                print_rtl(number_stick(map, integ.nb));
            } else
                i++;
        }else
            my_ia(map, integ);
        i++;
    }
    winner_is(i);
}