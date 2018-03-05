/*
** EPITECH PROJECT, 2018
** my_world_2017
** File description:
** event_menu5
*/

#include "../include/my.h"

void init_start(window_t *w)
{
	w->exit_b = 1;
	w->back_b = 1;
	w->creat_map_b = 1;
	w->text_wait_x = 1;
	w->text_wait_y = 1;			
	update_map(w);
}