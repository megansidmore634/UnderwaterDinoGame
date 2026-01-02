#pragma once
#include "GreenDino.h"
class shooter {
public:
	shooter() {}
	~shooter() {}
	void render(ALLEGRO_DISPLAY *display, GreenDino dino, int ind, int &jumpTime);
	void update();
	void dispose();
	float speed1 = 6;
	float speed2 = 2;
	float speed3 = 1;

private:
	float background_x1 = 0;
	float background_x2 = 800;
	

	float background2_x1 = 0;
	float background2_x2 = 800;
	

	float background3_x1 = 0;
	float background3_x2 = 800;
	


	ALLEGRO_BITMAP* background;
	ALLEGRO_BITMAP* background2;
	ALLEGRO_BITMAP* background3;
	ALLEGRO_BITMAP* background3_copy;
	ALLEGRO_BITMAP* background4;
	ALLEGRO_BITMAP* background4_copy;
};