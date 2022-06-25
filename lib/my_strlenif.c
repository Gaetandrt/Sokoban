/*
** EPITECH PROJECT, 2022
** strlen with if
** File description:
** my_strlenif
*/

int my_strlenif(char *str)
{
    int x = 0;

    while (str[x] == '.' || str[x] == '#' || str[x] == 'X' || str[x] == 'O' \
    || str[x] == 'P') {
        x++;
    }
    return (x);
}
