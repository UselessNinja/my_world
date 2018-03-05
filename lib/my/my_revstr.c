/*
** EPITECH PROJECT, 2017
** my_revstr.c
** File description:
** 
*/

char *my_revstr(char *str)
{
	int i = 0;
	int j = 0;
	char k;

	while (str[i] != '\0') {
		i++;
	}
	i--;
	while (j < i) {
		k = str[i];
		str[i] = str[j];
		str[j] = k;
		i--;
		j++;
	}
	return (str);
}
