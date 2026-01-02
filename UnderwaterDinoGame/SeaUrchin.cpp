#include "SeaUrchin.h"



void SeaUrchin::Draw() {
	seaurchin = al_load_bitmap("sea_urchin.png");
	al_draw_scaled_bitmap(seaurchin, 0, 0, al_get_bitmap_width(seaurchin),
		al_get_bitmap_height(seaurchin), x_, y_, 100, 100, NULL);

	al_destroy_bitmap(seaurchin);

}

void SeaUrchin::update() {

	if (x_ - 6 <= -100) {
		x_ = 800;
	}
	else {
		x_ -= speed;
	}

}



void Crab::Draw() {
	crab = al_load_bitmap("crab.png");
	al_draw_scaled_bitmap(crab, 0, 0, al_get_bitmap_width(crab),
		al_get_bitmap_height(crab), x_, y_, 100, 100, NULL);

	al_destroy_bitmap(crab);

}

void Crab::update() {

	if (x_ - 6 <= -100) {
		x_ = 800;
	}
	else {
		x_ -= speed;
	}

}


void Conch::Draw() {
	conch = al_load_bitmap("conch.png");
	al_draw_scaled_bitmap(conch, 0, 0, al_get_bitmap_width(conch),
		al_get_bitmap_height(conch), x_, y_, 100, 100, NULL);

	al_destroy_bitmap(conch);

}

void Conch::update() {

	if (x_ - 6 <= -100) {
		x_ = 800;
	}
	else {
		x_ -= speed;
	}

}