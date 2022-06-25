/*
** EPITECH PROJECT, 2022
** file for checking if all box are stuck
** File description:
** check_if_box_stuck
*/

#include "my_sokoban.h"
#include <stdio.h>
#include <ncurses.h>

void box_stuck_up(char **map, map_info_t *map_info, int i)
{
    if (map[map_info->x_y[i] + 1][map_info->x_x[i]] == '#' && (map[map_info->x_y[i]] \
    [map_info->x_x[i] + 1] == '#' || map[map_info->x_y[i]][map_info->x_x[i] - 1] == '#'))
        map_info->tmp += 1;
    else if (map[map_info->x_y[i]][map_info->x_x[i] + 1] == '#' && (map[map_info->x_y[i] + 1] \
    [map_info->x_x[i]] == '#' || map[map_info->x_y[i] - 1][map_info->x_x[i]] == '#'))
        map_info->tmp += 1;
    else if (map[map_info->x_y[i]][map_info->x_x[i] - 1] == '#' && (map[map_info->x_y[i] + 1] \
    [map_info->x_x[i]] == '#' || map[map_info->x_y[i] - 1][map_info->x_x[i]] == '#'))
        map_info->tmp += 1;
    else if (map[map_info->x_y[i] - 1][map_info->x_x[i]] == '#' && (map[map_info->x_y[i]] \
    [map_info->x_x[i] + 1] == '#' || map[map_info->x_y[i]][map_info->x_x[i] - 1] == '#'))
        map_info->tmp += 1;
}

void check_if_box_stuck(char **map, map_info_t *map_info)
{
    map_info->tmp = 0;
    for (int i = 0; i < map_info->nb_x; i++) {
        box_stuck_up(map, map_info, i);
        if (map_info->tmp > map_info->nb_x_stuck)
            map_info->nb_x_stuck = map_info->tmp;
    }
    map_info->tmp = 0;
}