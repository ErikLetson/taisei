/*
 * This software is licensed under the terms of the MIT-License
 * See COPYING for further information. 
 * ---
 * Copyright (C) 2011, Lukas Weber <laochailan@web.de>
 */

#ifndef MAINMENU_H
#define MAINMENU_H

typedef struct MenuData MenuData;

void create_main_menu(MenuData *m);

void draw_main_menu(MenuData *m);
void main_menu_loop(MenuData *m);

#endif