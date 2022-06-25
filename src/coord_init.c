/*
** EPITECH PROJECT, 2022
** coord init file
** File description:
** coord_init
*/

#include "my_sokoban.h"
#include <stdlib.h>

void coord_x(char **map, map_info_t *map_info, int y, int n)
{
    if (map[y] == NULL)
        return;
    for (int i = 0; map[y][i] != '\0'; i++) {
        if (map[y][i] == 'X') {
            map_info->x_x[n] = i;
            map_info->x_y[n] = y;
            n++;
        }
    }
    return (coord_x(map, map_info, y + 1, n));
}

void coord_o(char **map, map_info_t *map_info, int y, int n)
{
    if (map[y] == NULL)
        return;
    for (int i = 0; map[y][i] != '\0'; i++) {
        if (map[y][i] == 'O') {
            map_info->o_x[n] = i;
            map_info->o_y[n] = y;
            n++;
        }
    }
    return (coord_o(map, map_info, y + 1, n));
}

void coord_init_o(char **map, map_info_t *map_info)
{
    map_info->o_x = malloc(sizeof(int) * (map_info->nb_o));
    map_info->o_y = malloc(sizeof(int) * (map_info->nb_o));

    coord_o(map, map_info, 0, 0);
}

void coord_init_x(char **map, map_info_t *map_info)
{
    map_info->x_x = malloc(sizeof(int) * (map_info->nb_x));
    map_info->x_y = malloc(sizeof(int) * (map_info->nb_x));

    coord_x(map, map_info, 0, 0);
}
