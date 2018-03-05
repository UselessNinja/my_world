##
## EPITECH PROJECT, 2017
## my_radar
## File description:
## Compile the program
##

NAME = 		my_world

CC =		gcc -g

SRC = 		src/main.c				\
		src/event.c				\
		src/event_2.c				\
		src/event_3.c				\
		src/event_4.c				\
		src/gui/gui.c				\
		src/gui/gui_2.c				\
		src/gui/gui_3.c				\
		src/gui/help.c				\
		src/gui/options.c			\
		src/gui/options_2.c			\
		src/map/map_builder.c			\
		src/map/free_builder.c			\
		src/map/vertex_builder.c		\
		src/interactions/altitude_changer.c	\
		src/interactions/zoom_map.c		\
		src/interactions/brush_size.c		\
		src/file_handling/saving.c		\
		src/file_handling/loading.c		\
		src/misc/fill_struct.c			\
		src/menu/event_menu.c			\
		src/menu/event_menu2.c			\
		src/menu/event_menu3.c			\
		src/menu/event_menu4.c			\
		src/menu/menu.c

OBJ =		$(SRC:.c=.o)

CFLAGS = 	-Wall -Wextra -I./include/

LDFLAGS = 	-L lib/my -lmy -lc_graph_prog

RM = 		rm -f

all: 		$(NAME)

$(NAME): 	$(OBJ)
		$(MAKE) -C ./lib/my
		$(CC) -o $(NAME) $(OBJ) $(LIB) -lm $(LDFLAGS)

clean:
		$(RM) $(OBJ)
		$(MAKE) -C ./lib/my clean

fclean: 	clean
		$(RM) $(NAME)
		$(MAKE) -C ./lib/my fclean
		$(RM) vgcore.*

re: 		fclean all

.PHONY: 	all clean fclean re
