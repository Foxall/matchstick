/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** count chara in str
*/

#include "include/match.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
