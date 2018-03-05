/*
** EPITECH PROJECT, 2018
** my_world
** File description:
** eventing
*/

#include "../include/my.h"

void event(window_t *w)
{
	while (sfRenderWindow_pollEvent(w->window, &w->event)) {
		if (w->event.type == sfEvtClosed)
			sfRenderWindow_close(w->window);
		if (w->options == 1)
			options_menu_events(w);
		if (w->event.type == sfEvtMouseWheelScrolled
			&& w->event.mouseWheelScroll.wheel
			== sfMouseVerticalWheel)
			zoom_map(w);
		pencil_event(w);
		camera_event(w);
		brush_event(w);
		menu_event(w);
		menu_event_bis(w);
		help_event_bis(w);
		help_event(w);
		options_event(w);
		brush_size(w);
		save_event(w);
		load_event(w);
		}
}

void camera_event(window_t *w)
{
	if (w->event.type == sfEvtKeyPressed
		&& w->event.key.code == sfKeyLeft) {
		w->move_x += 6;
		update_map(w);
	}
	if (w->event.type == sfEvtKeyPressed
		&& w->event.key.code == sfKeyRight) {
		w->move_x -= 6;
		update_map(w);
	}
	if (w->event.type == sfEvtKeyPressed
		&& w->event.key.code == sfKeyUp) {
		w->move_y += 6;
		update_map(w);
	}
	if (w->event.type == sfEvtKeyPressed
		&& w->event.key.code == sfKeyDown) {
		w->move_y -= 6;
		update_map(w);
	}
}

void pencil_event(window_t *w)
{
	if (w->event.type == sfEvtKeyPressed
		&& w->event.key.code == sfKeyG) {
		w->pencil = w->pencil == 1 ? 0 : 1;
		w->brush = 0;
		update_map(w);
	}
	if (w->event.type == sfEvtMouseButtonPressed
		&& w->event.mouseButton.button == sfMouseLeft
		&& w->pencil == 1 && w->options == 0
		&& w->menu == 0)
		pencil_tool(w, LEFT);
	if (w->event.type == sfEvtMouseButtonPressed
		&& w->event.mouseButton.button == sfMouseRight
		&& w->pencil == 1 && w->options == 0
		&& w->menu == 0)
		pencil_tool(w, RIGHT);
}

void brush_event(window_t *w)
{
	if (w->event.type == sfEvtKeyPressed
		&& w->event.key.code == sfKeyH) {
		w->brush = w->brush == 1 ? 0 : 1;
		w->pencil = 0;
		update_map(w);
	}
	if (w->event.type == sfEvtMouseButtonPressed
		&& w->event.mouseButton.button == sfMouseLeft
		&& w->brush == 1 && w->options == 0
		&& w->menu == 0) {
		brush_tool(w, LEFT);
		update_map(w);
	}
	if (w->event.type == sfEvtMouseButtonPressed
		&& w->event.mouseButton.button == sfMouseRight
		&& w->brush == 1 && w->options == 0
		&& w->menu == 0) {
		brush_tool(w, RIGHT);
		update_map(w);
	}
}

void menu_event(window_t *w)
{
	if (w->event.type == sfEvtMouseButtonPressed
		&& w->event.mouseButton.button == sfMouseLeft
		&& (w->event.mouseButton.x >= 763
		&& w->event.mouseButton.x <= 795)
		&& (w->event.mouseButton.y >= 5
		&& w->event.mouseButton.y <= 37)) {
		w->menu = w->menu == 1 ? 0 : 1;
		update_map(w);
	}
}