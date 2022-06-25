/*
** EPITECH PROJECT, 2022
** tmp
** File description:
** main
*/

/*
** EPITECH PROJECT, 2022
** my_str_to_word_array
** File description:
** my_strtowordaray
*/

#include <stdlib.h>
#include <stdio.h>

int my_strlen(char *str);

int check_car(char c, char *car)
{
    int i = 0;

    while (car[i] != '\0') {
        if (car[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int count_space(char *str, char *car)
{
    int i = 0;

    while (str[i] != '\0') {
        if (check_car(str[i], car) == 0)
            break;
        i++;
    }
    return (i);
}

int count_word(char *str, char *car)
{
    int cpt = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (check_car(str[i], car) == 1)
            break;
        i++;
    }
    while (str[i] != '\0') {
        if ((check_car(str[i], car) == 1) && (check_car(str[i + 1], car) == 0))
            cpt++;
        i++;
    }
    return (cpt);
}

char **my_str_to_word_array_bis(char *str, char *car)
{
    char **result = malloc(sizeof(char *) * (count_word(str, car) + 2));
    int i = 0;
    int y = 0;
    int x = 0;

    for (int i = 0; i <= count_word(str, car) + 1; i++)
        result[i] = malloc(sizeof(char) * (my_strlen(str) + 1));
    for (; str[i] != '\0'; y++) {
        while (check_car(str[i], car) == 0 && str[i] != '\0') {
            result[y][x] = str[i];
            i++;
            x++;
        }
        result[y][x] = '\0';
        x = 0;
        i += count_space(str + i, car);
    }
    result[y] = NULL;
    return (result);
}

char **my_str_to_word_array(char *str, char *car)
{
    int i = 0;

    while (str[i] != '\0') {
        if (check_car(str[i], car) == 0)
            break;
        i++;
    }
    return (my_str_to_word_array_bis(str + i, car));
}
