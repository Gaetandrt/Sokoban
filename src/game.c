/*
** EPITECH PROJECT, 2022
** game file
** File description:
** game
*/

#include "my_sokoban.h"
#include <ncurses.h>

int terminal_size(char **map)
{
    if (LINES < my_arraylen(map) || COLS < my_strlen(map[0])) {
        clear();
        mvprintw(LINES / 2, (COLS / 2) - 13, "Your terminal is too small");
        return (1);
    }
    return (0);
}

int game_engine(char **map, map_info_t *map_info)
{
    int ch = 0;

    ch = getch();
    if (ch == 27)
        return (1);
    if (terminal_size(map) == 1)
        return (0);
    else {
        clear();
        map = check_game_state(map, map_info);
        map = game_loop(map, map_info, ch);
        map = check_game_state(map, map_info);
        is_win(map_info, map);
        coord_init_x(map, map_info);
        is_loose(map_info, map);
        o_display(map, map_info);
        print_map(map, map_info);
        refresh();
    }
    return (0);
}

void init_window(map_info_t *map_info, char **map)
{
    initscr();
    raw();
    noecho();
    keypad(stdscr, TRUE);
    curs_set(0);
    if (terminal_size(map) == 0)
        print_map(map, map_info);
    while (1) {
        if (game_engine(map, map_info) == 1)
            break;
    }
    endwin();
}

void print_map(char **map, map_info_t *map_info)
{
    int row = 0;
    int col = 0;

    getmaxyx(stdscr, row, col);
    for (int i = 0; i <= map_info->nb_cols - 1; i++) {
        mvprintw((row - map_info->nb_cols) / 2 + i, \
        (col - map_info->nb_rows) / 2, map[i]);
    }
}

char **game_loop(char **map, map_info_t *map_info, int ch)
{
    if (ch == KEY_DOWN)
        map = deplacement_down(map, map_info);
    if (ch == KEY_UP)
        map = deplacement_up(map, map_info);
    if (ch == KEY_LEFT)
        map = deplacement_left(map, map_info);
    if (ch == KEY_RIGHT)
        map = deplacement_right(map, map_info);
    return (map);
}
