#pragma once
#include <allegro5/allegro5.h>

class DeathScreen {
public:
	//DeathScreen();
	void render();
private:
	ALLEGRO_BITMAP* death_screen = al_load_bitmap("you_died.png");
};