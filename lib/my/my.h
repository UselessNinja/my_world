/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** macro for the lib
*/

#ifndef MY_H
#define MY_H

#include <unistd.h>
#include <stdio.h>
#include <math.h>

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
char *my_memset(char *str, char c, int size);
int **my_memset_map(int **map, int c, int size_y, int size_x);
int is_neg(int nbr);
char *my_revstr(char *str);
void my_itoa(int nb, char* str, int d);
void my_ftoa(float nbr, char *str, int afterpoint);
int my_strlen(char const *str);
char *my_strcat(char *output, char const *input);
void reverse(char *str, int len);

#endif /* MY_H */