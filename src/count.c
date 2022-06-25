/*
** EPITECH PROJECT, 2022
** file for count
** File description:
** count
*/

#include "my_sokoban.h"
#include <stdlib.h>
#include <stdio.h>

int count_x(char *buf)
{
    int x = 0;

    for (int i = 0; buf[i] != '\0'; i++)
        if (buf[i] == 'X')
            x++;
    return (x);
}

int rows_count(char **map)
{
    int max = 0;

    for (int i = 0; map[i] != NULL; i++)
        if (my_strlen(map[i]) > max)
            max = my_strlen(map[i]);
    return (max);
}

void find_p(char **map, map_info_t *map_info, int y)
{
    if (y == map_info->nb_cols)
        return;
    for (int x = 0; map[y][x] != '\0'; x++) {
        if (map[y][x] == 'P') {
            map_info->p_x = x;
            map_info->p_y = y;
            return;
        }
    }
    find_p(map, map_info, y + 1);
}

int is_o_placed(map_info_t *map, char **buf)
{
    int cpt = map->nb_o;

    for (int i = 0; i < map->nb_o; i++) {
        if (buf[map->o_y[i]][map->o_x[i]] == 'X' && map->nb_o == 1)
            return (0);
        if (buf[map->o_y[i]][map->o_x[i]] == 'X')
            cpt--;
    }
    return (cpt);
}

int count_o(char **buf, int y, int o)
{
    if (buf[y] == NULL)
        return (o);
    for (int i = 0; buf[y][i] != '\0'; i++)
        if (buf[y][i] == 'O')
            o++;
    return (count_o(buf, y + 1, o));
}
