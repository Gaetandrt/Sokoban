/*
** EPITECH PROJECT, 2022
** file for deplacement handle
** File description:
** deplacement
*/

#include "my_sokoban.h"
#include <stdlib.h>

char **deplacement_down(char **map, map_info_t *map_info)
{
    if (map[map_info->p_y + 1][map_info->p_x] == ' ') {
        map[map_info->p_y][map_info->p_x] = ' ';
        map[map_info->p_y + 1][map_info->p_x] = 'P';
        map_info->p_y += 1;
        return (map);
    }
    if (map[map_info->p_y + 1][map_info->p_x] == 'O') {
        map[map_info->p_y][map_info->p_x] = ' ';
        map[map_info->p_y + 1][map_info->p_x] = 'P';
        map_info->p_y += 1;
        return (map);
    }
    return (dep_down_bis(map, map_info));
}

char **deplacement_up(char **map, map_info_t *map_info)
{
    if (map[map_info->p_y - 1][map_info->p_x] == ' ') {
        map[map_info->p_y][map_info->p_x] = ' ';
        map[map_info->p_y - 1][map_info->p_x] = 'P';
        map_info->p_y -= 1;
        return (map);
    }
    if (map[map_info->p_y - 1][map_info->p_x] == 'O') {
        map[map_info->p_y][map_info->p_x] = ' ';
        map[map_info->p_y - 1][map_info->p_x] = 'P';
        map_info->p_y -= 1;
        return (map);
    }
    return (dep_up_bis(map, map_info));
}

char **deplacement_right(char **map, map_info_t *map_info)
{
    if (map[map_info->p_y][map_info->p_x + 1] == ' ') {
        map[map_info->p_y][map_info->p_x] = ' ';
        map[map_info->p_y][map_info->p_x + 1] = 'P';
        map_info->p_x += 1;
        return (map);
    }
    if (map[map_info->p_y][map_info->p_x + 1] == 'O') {
        map[map_info->p_y][map_info->p_x] = ' ';
        map[map_info->p_y][map_info->p_x + 1] = 'P';
        map_info->p_x += 1;
        return (map);
    }
    return (dep_right_bis(map, map_info));
}

char **deplacement_left(char **map, map_info_t *map_info)
{
    if (map[map_info->p_y][map_info->p_x - 1] == ' ') {
        map[map_info->p_y][map_info->p_x] = ' ';
        map[map_info->p_y][map_info->p_x - 1] = 'P';
        map_info->p_x -= 1;
        return (map);
    }
    if (map[map_info->p_y][map_info->p_x - 1] == 'O') {
        map[map_info->p_y][map_info->p_x] = ' ';
        map[map_info->p_y][map_info->p_x - 1] = 'P';
        map_info->p_x -= 1;
        return (map);
    }
    return (dep_left_bis(map, map_info));
}
