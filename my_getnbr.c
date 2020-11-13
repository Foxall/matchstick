/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** lib
*/

#include "include/match.h"

int my_getnbr(char *str)
{
    int minus = 0;
    int nb = 0;
    int string = 0;

    if (str[string] == '-') {
        minus = 1;
        string++;
    }
    while (str[string] >= '0' && str[string] <= '9') {
        nb *= 10;
        nb += (str[string] - '0');
        string++;
    }
    if (minus == 1)
        nb *= (-1);
    return (nb);
}