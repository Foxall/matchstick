/*
** EPITECH PROJECT, 2020
** value_struct.c
** File description:
** value in my struct
*/

#include "include/match.h"

void value_of_int(in integ, char **av)
{
    integ.count = 0;
    integ.nb = my_getnbr(av[1]);
    integ.rmvstick = my_getnbr(av[2]);
}