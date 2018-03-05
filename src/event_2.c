/*
** EPITECH PROJECT, 2018
** my_world_2017
** File description:
** event_2
*/

#include "../include/my.h"

void menu_event_bis(window_t *w)
{
	if (w->event.type == sfEvtMouseButtonPressed
		&& w->event.mouseButton.button == sfMouseLeft
		&& w->menu == 1
		&& (w->event.mouseButton.x >= 763
		&& w->event.mouseButton.x <= 795)
		&& (w->event.mouseButton.y >= 81
		&& w->event.mouseButton.y <= 113)) {
		w->brush = w->brush == 1 ? 0 : 1;
		w->pencil = 0;
		update_map(w);
	}
	if (w->event.type == sfEvtKeyPressed
		&& w->event.key.code == sfKeyM) {
		w->menu = w->menu == 1 ? 0 : 1;
		update_map(w);
	}
}

void help_event(window_t *w)
{
	if (w->event.type == sfEvtKeyPressed
		&& w->event.key.code == sfKeyEscape) {
		w->h_up = w->h_up == 1 ? 0 : 1;
		update_map(w);
	}
	if (w->event.type == sfEvtMouseButtonPressed
		&& w->event.mouseButton.button == sfMouseLeft
		&& w->menu == 1
		&& (w->event.mouseButton.x >= 763
		&& w->event.mouseButton.x <= 795)
		&& (w->event.mouseButton.y >= 118
		&& w->event.mouseButton.y <= 150)) {
		w->h_up = w->h_up == 1 ? 0 : 1;
		update_map(w);
	}
}

void help_event_bis(window_t *w)
{
	if (w->event.type == sfEvtMouseButtonPressed
		&& w->event.mouseButton.button == sfMouseLeft
		&& w->h_up == 1) {
		w->h_up = 0;
		update_map(w);
	}
	menu_event_bis_snd(w);
}

void options_event(window_t *w)
{
	if (w->event.type == sfEvtMouseButtonPressed
		&& w->event.mouseButton.button == sfMouseLeft
		&& w->menu == 1
		&& (w->event.mouseButton.x >= 763
		&& w->event.mouseButton.x <= 795)
		&& (w->event.mouseButton.y >= 155
		&& w->event.mouseButton.y <= 187)
		&& w->options == 0) {
		w->options = w->options == 1 ? 0 : 1;
		update_map(w);
	}
	if (w->event.type == sfEvtKeyPressed
		&& w->event.key.code == sfKeyP
		&& w->options == 0) {
		w->options = w->options == 1 ? 0 : 1;
		update_map(w);
	}
}

void volume_event(window_t *w)
{
	if (w->event.type == sfEvtMouseButtonPressed
		&& w->event.mouseButton.button == sfMouseLeft
		&& (w->event.mouseButton.x >= 294
		&& w->event.mouseButton.x <= 325)
		&& (w->event.mouseButton.y >= 239
		&& w->event.mouseButton.y <= 270)) {
		w->volume = w->volume == 0 ? 0 : w->volume - 1;
		update_map(w);
	}
	if (w->event.type == sfEvtMouseButtonPressed
		&& w->event.mouseButton.button == sfMouseLeft
		&& (w->event.mouseButton.x >= 476
		&& w->event.mouseButton.x <= 507)
		&& (w->event.mouseButton.y >= 239
		&& w->event.mouseButton.y <= 270)) {
		w->volume = w->volume == 4 ? 4 : w->volume + 1;
		update_map(w);
	}
}