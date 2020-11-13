/*
** EPITECH PROJECT, 2020
** error_management
** File description:
** management error
*/

#include"include/match.h"

int error_management(char **av)
{
    if (str_is_nb(av[1]) == 1)
        return (84);
    else if (str_is_nb(av[2]) == 1)
        return (84);
    return (0);
}