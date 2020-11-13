/*
** EPITECH PROJECT, 2020
** victori
** File description:
** victorie of ia or player
*/

#include "include/match.h"

int winner_is(int count)
{
    if (count % 2 == 0)
        my_putstr("You lost, too bad...\n");
    else
        my_putstr("I lost... snif... but I'll get you next time!!\n");
}

void put_rmv_match(char *str, int innbligne, int innbstick)
{
    my_putstr(str);
    my_putstr("removed ");
    my_put_nbr(innbstick);
    my_putstr(" match(es) from line ");
    my_put_nbr(innbligne);
    my_putchar('\n');
}

void print_rtl(int nbstick)
{
    if (nbstick > 0)
        my_putchar('\n');
}