/*
** EPITECH PROJECT, 2018
** my_world_2017
** File description:
** event_4
*/

#include "../include/my.h"

void load_event(window_t *w)
{
	if (w->event.type == sfEvtMouseButtonPressed
		&& w->event.mouseButton.button == sfMouseLeft
		&& (w->event.mouseButton.x >= 763
		&& w->event.mouseButton.x <= 795)
		&& (w->event.mouseButton.y >= 229
		&& w->event.mouseButton.y <= 261))
		load(w);
}

void menu_event_bis_snd(window_t *w)
{
	if (w->event.type == sfEvtMouseButtonPressed
		&& w->event.mouseButton.button == sfMouseLeft
		&& w->menu == 1
		&& (w->event.mouseButton.x >= 763
		&& w->event.mouseButton.x <= 795)
		&& (w->event.mouseButton.y >= 42
		&& w->event.mouseButton.y <= 74)) {
		w->pencil = w->pencil == 1 ? 0 : 1;
		w->brush = 0;
		update_map(w);
	}
}

void brush_size_bis(window_t *w)
{
	if (w->event.type == sfEvtMouseButtonPressed
		&& w->event.mouseButton.button == sfMouseLeft
		&& (w->event.mouseButton.x >= 726
		&& w->event.mouseButton.x <= 758)
		&& (w->event.mouseButton.y >= 81
		&& w->event.mouseButton.y <= 113)
		&& w->brush == 1 && w->menu == 1) {
		w->b_size = (w->b_size < 9) ? (w->b_size + 1) : 9;
		update_map(w);
	}
}

void go_main_menu(window_t *w)
{
	reset(w);
	update_map(w);
	draw_menu(w);
	w->menu_page = 0;
	w->exit_b = 0;
	main_menu_event(w);
}