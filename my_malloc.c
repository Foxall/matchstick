/*
** EPITECH PROJECT, 2020
** my_malloc
** File description:
** my malloc
*/

#include<stdlib.h>

char *my_malloc(char *str, int size)
{
    str = malloc(sizeof(char) * size);
    for (int i = 0; i < size - 1; i++){
        str[i] = '\0';
    }
    return (str);
}

char **dd_malloc(int nb)
{
    char **map = malloc(sizeof(char *) * (nb + 4));
    for (int i = 0; i < nb + 2; i++)
        map[i] = my_malloc(map[i], (4 + nb * 2));
    map[nb + 2] = NULL;
    return (map);
}