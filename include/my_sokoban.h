/*
** EPITECH PROJECT, 2022
** sokoban header file
** File description:
** my_sokoban
*/

#ifndef MY_SOKOBAN_H_
    #define MY_SOKOBAN_H_

typedef struct o_list_s {
    int *pos;
    struct o_list_t *next;
} o_list_t;

typedef struct map_info_s {
    int st_size;
    int nb_rows;
    int nb_cols;
    int nb_x;
    int nb_x_stuck;
    int p_x;
    int p_y;
    int nb_o;
    int x_on_o;
    int *x_x;
    int *x_y;
    int *o_x;
    int *o_y;
    int tmp;
    int stored;
} map_info_t;

int count_x(char *buf);
int my_strlenif(char *str);
int rows_count(char **map);
void error_handling(int ac);
int my_arraylen(char **str);
int my_strlen(char const *str);
void map_error(char **map, int y);
char **my_map_to_word_array(char *str);
void is_win(map_info_t *map_info, char **map);
void is_loose(map_info_t *map_info, char **map);
char **dep_up_bis(char **map, map_info_t *map_info);
void find_p(char **map, map_info_t *map_info, int y);
char **dep_down_bis(char **map, map_info_t *map_info);
char **dep_left_bis(char **map, map_info_t *map_info);
char **moove_box_up(char **map, map_info_t *map_info);
char **dep_right_bis(char **map, map_info_t *map_info);
char **deplacement_up(char **map, map_info_t *map_info);
char **moove_box_down(char **map, map_info_t *map_info);
char **moove_box_left(char **map, map_info_t *map_info);
char **moove_box_right(char **map, map_info_t *map_info);
void check_if_box_stuck(char **map, map_info_t *map_info);
char **deplacement_down(char **map, map_info_t *map_info);
char **check_game_state(char **map, map_info_t *map_info);
char **deplacement_left(char **map, map_info_t *map_info);
char **deplacement_right(char **map, map_info_t *map_info);
void box_stuck_bis(char **map, map_info_t *map_info, int i);
char **game_loop(char **map, map_info_t *map_info, int ch);
void init_window(map_info_t *map_info, char **map);
char **my_str_to_word_array(char *str, char *car);
void print_map(char **map, map_info_t *map_info);
int count_o(char **buf, int y, int o);
int is_o_placed(map_info_t *map, char **buf);
void coord_o(char **map, map_info_t *map_info, int y, int n);
void coord_x(char **map, map_info_t *map_info, int y, int n);
char **o_display(char **map, map_info_t *map_info);
void change_x_coord(map_info_t *map, int y, int x, int n);
void change_y_coord(map_info_t *map, int y, int x, int n);
void coord_init_o(char **map, map_info_t *map_info);
void coord_init_x(char **map, map_info_t *map_info);

#endif /* !MY_SOKOBAN_H_ */
