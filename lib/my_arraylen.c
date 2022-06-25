/*
** EPITECH PROJECT, 2022
** return the len of an array of strings
** File description:
** my_arraylen
*/

#include <stdlib.h>

int my_arraylen(char **str)
{
    int i = 0;

    while (str[i] != NULL)
        i++;
    return (i);
}
