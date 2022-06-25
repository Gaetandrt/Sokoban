/*
** EPITECH PROJECT, 2022
** file to handle the deplacement of box
** File description:
** box_moove
*/

#include "my_sokoban.h"

char **moove_box_up(char **map, map_info_t *map_info)
{
    if (map[map_info->p_y + 1][map_info->p_x] == 'O') {
        map_info->x_on_o += 1;
    }
    map[map_info->p_y + 1][map_info->p_x] = 'X';
    return (map);
}

char **moove_box_down(char **map, map_info_t *map_info)
{
    if (map[map_info->p_y - 1][map_info->p_x] == 'O') {
        map_info->x_on_o += 1;
    }
    map[map_info->p_y - 1][map_info->p_x] = 'X';
    return (map);
}

char **moove_box_right(char **map, map_info_t *map_info)
{
    if (map[map_info->p_y][map_info->p_x + 1] == 'O') {
        map_info->x_on_o += 1;
    }
    map[map_info->p_y][map_info->p_x + 1] = 'X';
    return (map);
}

char **moove_box_left(char **map, map_info_t *map_info)
{
    if (map[map_info->p_y][map_info->p_x - 1] == 'O') {
        map_info->x_on_o += 1;
    }
    map[map_info->p_y][map_info->p_x - 1] = 'X';
    return (map);
}
