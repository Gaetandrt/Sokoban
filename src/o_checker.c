/*
** EPITECH PROJECT, 2022
** get the pos of all o on the map
** File description:
** o_checker
*/

#include "my_sokoban.h"
#include <stdlib.h>

void add_o_pos(o_list_t **head, int x, int y)
{
    o_list_t *new = malloc(sizeof(o_list_t));
    o_list_t *tmp = *head;

    new->pos = malloc(sizeof(int) * 2);
    new->pos[0] = y;
    new->pos[1] = x;
    new->next = NULL;
    if (*head == NULL) {
        *head = new;
        return;
    }
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = new;
}

void find_o_pos(char *map, o_list_t **head, int y)
{
    int x = 0;

    while (map[x] != '\0') {
        if (map[x] == 'O') {
            add_o_pos(head, x, y);
        }
        x++;
    }
}

void get_o_pos(char **map)
{
    o_list_t *o_list = malloc(sizeof(o_list_t));
    o_list->next = NULL;
    o_list->pos = malloc(sizeof(int) * 2);
    for (int i = 0; map[i] != NULL; i++)
        find_o_pos(map[i], &o_list, i);
}
