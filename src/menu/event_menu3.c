/*
** EPITECH PROJECT, 2018
** my_world_2017
** File description:
** event_menu3
*/

#include "../include/my.h"

int imput_x(window_t *w)
{
	if (w->menu_ev.type == sfEvtMouseButtonPressed
		&& w->menu_ev.mouseButton.button == sfMouseLeft
		&& (w->menu_ev.mouseButton.x >= 300
		&& w->menu_ev.mouseButton.x <= 500)
		&& (w->menu_ev.mouseButton.y >= 150
		&& w->menu_ev.mouseButton.y <= 210)) {
		w->text_wait_x = w->text_wait_x == 1 ? 0 : 1;
		w->exit_b = 1;
		return (1);
	}
	return (0);
}

int imput_y(window_t *w)
{
	if (w->menu_ev.type == sfEvtMouseButtonPressed
		&& w->menu_ev.mouseButton.button == sfMouseLeft
		&& (w->menu_ev.mouseButton.x >= 300
		&& w->menu_ev.mouseButton.x <= 500)
		&& (w->menu_ev.mouseButton.y >= 210
		&& w->menu_ev.mouseButton.y <= 260)) {
		w->text_wait_y = w->text_wait_y == 1 ? 0 : 1;
		w->exit_b = 1;
		return (1);
	}
	return (0);
}

void disp_bar(window_t *w)
{
	sfRenderWindow_clear(w->window, sfBlack);
	sfRenderWindow_drawSprite(w->window, w->world_sprite, NULL);
	sfRenderWindow_drawSprite(w->window, w->title_sprite, NULL);
	sfRenderWindow_drawSprite(w->window, w->sprite_map_size_x, NULL);
	sfRenderWindow_drawSprite(w->window, w->sprite_map_size_y, NULL);
	sfRenderWindow_drawSprite(w->window, w->back_sprite, NULL);
	sfRenderWindow_drawText(w->window, w->text_map_x, NULL);
	sfRenderWindow_drawText(w->window, w->text_map_y, NULL);
	sfRenderWindow_drawSprite(w->window, w->start_sprite, NULL);
	sfRenderWindow_display(w->window);
}

void disp_bar_x(window_t *w)
{
	sfRenderWindow_clear(w->window, sfBlack);
	sfRenderWindow_drawSprite(w->window, w->world_sprite, NULL);
	sfRenderWindow_drawSprite(w->window, w->title_sprite, NULL);
	sfRenderWindow_drawSprite(w->window, w->clic_sp_x, NULL);
	sfRenderWindow_drawSprite(w->window, w->sprite_map_size_y, NULL);
	sfRenderWindow_drawSprite(w->window, w->back_sprite, NULL);
	sfRenderWindow_drawText(w->window, w->text_map_x, NULL);
	sfRenderWindow_drawText(w->window, w->text_map_y, NULL);
	sfRenderWindow_drawSprite(w->window, w->start_sprite, NULL);
	sfRenderWindow_display(w->window);
}

void disp_bar_y(window_t *w)
{
	sfRenderWindow_clear(w->window, sfBlack);
	sfRenderWindow_drawSprite(w->window, w->world_sprite, NULL);
	sfRenderWindow_drawSprite(w->window, w->title_sprite, NULL);
	sfRenderWindow_drawSprite(w->window, w->sprite_map_size_x, NULL);
	sfRenderWindow_drawSprite(w->window, w->clic_sp_y, NULL);
	sfRenderWindow_drawSprite(w->window, w->back_sprite, NULL);
	sfRenderWindow_drawText(w->window, w->text_map_x, NULL);
	sfRenderWindow_drawText(w->window, w->text_map_y, NULL);
	sfRenderWindow_drawSprite(w->window, w->start_sprite, NULL);
	sfRenderWindow_display(w->window);
}