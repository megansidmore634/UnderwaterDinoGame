#include "ParallaxBackground.h"


ParallaxBackground::ParallaxBackground(string filename1, string filename2, string filename3) {
	backgroundImageFloor = al_load_bitmap(filename1.c_str());
	backgroundImageMid = al_load_bitmap(filename2.c_str());
	backgroundImageBack = al_load_bitmap(filename3.c_str());
}

void ParallaxBackground::update() {
	
	x1 -= 3;
	if (x1 < -800) x1 = 0;
	x2 -= 3;
	if (x2 < -800) x2 = 0;
	x3 -= 1;
	if (x3 < -800) x3 = 0;
}

void ParallaxBackground::render() {
	al_draw_scaled_bitmap(backgroundImageFloor, x1, y1, al_get_bitmap_width(backgroundImageFloor),
		al_get_bitmap_height(backgroundImageFloor), x1, y1, 800, 600, 0);

	al_draw_scaled_bitmap(backgroundImageFloor, x1, y1, al_get_bitmap_width(backgroundImageFloor),
		al_get_bitmap_height(backgroundImageFloor), 800 + x1, y1, 800, 600, 0);

	al_draw_scaled_bitmap(backgroundImageMid, x2, y2, al_get_bitmap_width(backgroundImageMid),
		al_get_bitmap_height(backgroundImageMid), x2, y2, 800, 600, 0);

	al_draw_scaled_bitmap(backgroundImageMid, x2, y2, al_get_bitmap_width(backgroundImageMid),
		al_get_bitmap_height(backgroundImageMid), 800 + x2, y2, 800, 600, 0);

	al_draw_scaled_bitmap(backgroundImageBack, x3, y3, al_get_bitmap_width(backgroundImageBack),
		al_get_bitmap_height(backgroundImageBack), x3, y3, 800, 600, 0);

	al_draw_scaled_bitmap(backgroundImageBack, x3, y3, al_get_bitmap_width(backgroundImageBack),
		al_get_bitmap_height(backgroundImageBack), 800 + x3, y3, 800, 600, 0);

}

void ParallaxBackground::dispose(){
	al_destroy_bitmap(backgroundImageFloor);
	al_destroy_bitmap(backgroundImageMid);
	al_destroy_bitmap(backgroundImageBack);
}