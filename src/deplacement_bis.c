/*
** EPITECH PROJECT, 2022
** deplacement bis file
** File description:
** deplacement_bis
*/

#include "my_sokoban.h"

char **dep_down_bis(char **map, map_info_t *map_info)
{
    if (map[map_info->p_y + 1][map_info->p_x] == 'X') {
        if (map[map_info->p_y + 2][map_info->p_x] == '#')
            return (map);
        if (map[map_info->p_y + 2][map_info->p_x] == 'X')
            return (map);
        else {
            map[map_info->p_y][map_info->p_x] = ' ';
            map[map_info->p_y + 1][map_info->p_x] = 'P';
            map_info->p_y += 1;
            return (moove_box_up(map, map_info));
        }
    }
    return (map);
}

char **dep_up_bis(char **map, map_info_t *map_info)
{
    if (map[map_info->p_y - 1][map_info->p_x] == 'X') {
        if (map[map_info->p_y - 2][map_info->p_x] == '#')
            return (map);
        if (map[map_info->p_y - 2][map_info->p_x] == 'X')
            return (map);
        else {
            map[map_info->p_y][map_info->p_x] = ' ';
            map[map_info->p_y - 1][map_info->p_x] = 'P';
            map_info->p_y -= 1;
            return (moove_box_down(map, map_info));
        }
    }
    return (map);
}

char **dep_right_bis(char **map, map_info_t *map_info)
{
    if (map[map_info->p_y][map_info->p_x + 1] == 'X') {
        if (map[map_info->p_y][map_info->p_x + 2] == '#')
            return (map);
        if (map[map_info->p_y][map_info->p_x + 2] == 'X')
            return (map);
        else {
            map[map_info->p_y][map_info->p_x] = ' ';
            map[map_info->p_y][map_info->p_x + 1] = 'P';
            map_info->p_x += 1;
            return (moove_box_right(map, map_info));
        }
    }
    return (map);
}

char **dep_left_bis(char **map, map_info_t *map_info)
{
    if (map[map_info->p_y][map_info->p_x - 1] == 'X') {
        if (map[map_info->p_y][map_info->p_x - 2] == '#')
            return (map);
        if (map[map_info->p_y][map_info->p_x - 2] == 'X')
            return (map);
        else {
            map[map_info->p_y][map_info->p_x] = ' ';
            map[map_info->p_y][map_info->p_x - 1] = 'P';
            map_info->p_x -= 1;
            return (moove_box_left(map, map_info));
        }
    }
    return (map);
}
