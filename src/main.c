/*
** EPITECH PROJECT, 2022
** fejisdnlkfee
** File description:
** main
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <ncurses.h>
#include "my_sokoban.h"

char *map_copy_bis(char *buf, map_info_t *map_info, int n)
{
    int cpt = 0;
    int x = 0;
    char *str = malloc(sizeof(char) * (map_info->nb_rows + 1));

    for (int i = 0; buf; i++) {
        x = i;
        if (buf[i] == '\n')
            cpt++;
        if (cpt == n)
            break;
    }
    x++;
    for (int i = 0; buf[x] != '\0'; i++) {
        if (buf[x] == '\n') {
            str[i] = '\0';
            x++;
            break;
        }
        str[i] = buf[x];
        x++;
    }
    return (str);
}

char **map_copy(char **map, char *buf, map_info_t *map_info)
{
    for (int i = 0; i < map_info->nb_cols; i++)
        map[i] = map_copy_bis(buf, map_info, i);
    map[map_info->nb_cols] = NULL;
    free(buf);
    return (map);
}

char **map_init(char *filepath, map_info_t *map_info)
{
    char **map;
    int fd = open(filepath, O_RDONLY);
    struct stat buff;
    stat(filepath, &buff);
    char *buf = malloc(sizeof(char) * (buff.st_size + 1));

    read(fd, buf, buff.st_size);
    buf[buff.st_size] = '\0';
    map = my_str_to_word_array(buf, "\n");
    map_info->nb_x = count_x(buf);
    map_info->st_size = buff.st_size;
    for (int i = 0; map[i] != NULL; i++)
            map_info->nb_cols++;
    map_info->nb_rows = rows_count(map);
    return (map);
}

int main(int ac, char **av)
{
    map_info_t map_info = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    error_handling(ac);

    char **map = map_init(av[1], &map_info);
    map_error(map, 0);
    find_p(map, &map_info, 0);
    map_info.nb_o = count_o(map, 0, 0);
    coord_init_x(map, &map_info);
    coord_init_o(map, &map_info);
    init_window(&map_info, map);
    free(map);
    return (0);
}
