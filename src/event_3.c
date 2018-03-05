/*
** EPITECH PROJECT, 2018
** my_world_2017
** File description:
** event_3
*/

#include "../include/my.h"

void options_menu_events(window_t *w)
{
	volume_event(w);
	reset_map(w);
	close_options_event(w);
}

void reset_map(window_t *w)
{
	if (w->event.type == sfEvtMouseButtonPressed
		&& w->event.mouseButton.button == sfMouseLeft
		&& (w->event.mouseButton.x >= 275
		&& w->event.mouseButton.x <= 525)
		&& (w->event.mouseButton.y >= 300
		&& w->event.mouseButton.y <= 353)) {
		reset(w);
		update_map(w);
	}
	if (w->event.type == sfEvtMouseButtonPressed
		&& w->event.mouseButton.button == sfMouseLeft
		&& (w->event.mouseButton.x >= 275
		&& w->event.mouseButton.x <= 525)
		&& (w->event.mouseButton.y >= 357
		&& w->event.mouseButton.y <= 410))
		go_main_menu(w);
}

void close_options_event(window_t *w)
{
	if (w->event.type == sfEvtMouseButtonPressed
		&& w->event.mouseButton.button == sfMouseLeft
		&& (w->event.mouseButton.x >= 547
		&& w->event.mouseButton.x <= 579)
		&& (w->event.mouseButton.y >= 170
		&& w->event.mouseButton.y <= 203)
		&& w->options == 1) {
		w->options = 0;
		update_map(w);
	}
}

void brush_size(window_t *w) 
{
	if (w->event.type == sfEvtMouseButtonPressed
		&& w->event.mouseButton.button == sfMouseLeft
		&& (w->event.mouseButton.x >= 619
		&& w->event.mouseButton.x <= 651)
		&& (w->event.mouseButton.y >= 81
		&& w->event.mouseButton.y <= 113)
		&& w->brush == 1 && w->menu == 1) {
		w->b_size = (w->b_size == 1) ? 1 : (w->b_size - 1);
		update_map(w);
	}
	brush_size_bis(w);
}

void save_event(window_t *w)
{
	if (w->event.type == sfEvtMouseButtonPressed
		&& w->event.mouseButton.button == sfMouseLeft
		&& (w->event.mouseButton.x >= 763
		&& w->event.mouseButton.x <= 795)
		&& (w->event.mouseButton.y >= 192
		&& w->event.mouseButton.y <= 224))
		save(w);
}