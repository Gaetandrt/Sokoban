/*
** EPITECH PROJECT, 2022
** file for error handling of sokoban
** File description:
** error_handling
*/

#include "my_sokoban.h"
#include <stdlib.h>

void error_handling(int ac)
{
    if (ac != 2)
        exit(84);
}

void map_error(char **map, int y)
{
    if (map[y] == NULL)
        return;
    for (int x = 0; map[y][x] != '\0'; x++) {
        char c = map[y][x];
        if (c != ' ' && c != '\n' && c != 'X' && c != '#' && c != 'O' \
        && c != 'P')
            exit(84);
    }
    return (map_error(map, y + 1));
}

void change_x_coord(map_info_t *map, int y, int x, int n)
{
    int i = 0;

    while (map->x_y[i] != y && map->x_x[i] != x)
        i++;
    map->x_x += n;
}

void change_y_coord(map_info_t *map, int y, int x, int n)
{
    int i = 0;

    while (map->x_y[i] != y && map->x_x[i] != x)
        i++;
    map->x_y += n;
}
