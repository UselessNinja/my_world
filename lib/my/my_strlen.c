/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** L'histoir du petit potiron avec une demi noix de coco sur la tete
*/

int my_strlen(char const *str)
{
	int i;
	i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return (i);
}
