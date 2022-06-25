/*
** EPITECH PROJECT, 2022
** some utility
** File description:
** utility
*/

#include "my_sokoban.h"
#include <stdlib.h>
#include <stdio.h>
#include <ncurses.h>

void is_loose(map_info_t *map_info, char **map)
{
    check_if_box_stuck(map, map_info);
    if (map_info->nb_x == map_info->nb_x_stuck) {
        refresh();
        endwin();
        exit(1);
    }
}

void is_win(map_info_t *map_info, char **map)
{
    if (is_o_placed(map_info, map) == 0) {
        o_display(map, map_info);
        refresh();
        endwin();
        exit(0);
    }
}


char **o_display(char **map, map_info_t *map_info)
{
    for (int i = 0; i < map_info->nb_o; i++) {
        if (map[map_info->o_y[i]][map_info->o_x[i]] == ' ')
            map[map_info->o_y[i]][map_info->o_x[i]] = 'O';
    }
    return (map);
}

char **check_game_state(char **map, map_info_t *map_info)
{
    map = o_display(map, map_info);
    return (map);
}
