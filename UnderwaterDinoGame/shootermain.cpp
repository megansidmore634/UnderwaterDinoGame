#include <allegro5/allegro.h>
#include "shootermain.h"
#include <allegro5/allegro_image.h>
#include "GreenDino.h"
#include <iostream>



void shooter::render(ALLEGRO_DISPLAY* display, GreenDino dino, int ind, int& jumpTime) {


	al_clear_to_color(al_map_rgb(63, 141, 204));

	
	background = al_load_bitmap("TopLayer.png");
	background2 = al_load_bitmap("TopLayer.png");

	background3 = al_load_bitmap("MiddleLayer.png");
	background3_copy = al_load_bitmap("MiddleLayer.png");

	background4 = al_load_bitmap("DownLayer.png");
	background4_copy = al_load_bitmap("DownLayer.png");

	al_draw_scaled_bitmap(background4, 0, 0, al_get_bitmap_width(background4),
		al_get_bitmap_height(background4), background3_x1, 0, al_get_display_width(display), al_get_display_height(display), NULL);

	al_draw_scaled_bitmap(background4_copy, 0, 0, al_get_bitmap_width(background4_copy),
		al_get_bitmap_height(background4_copy), background3_x2, 0, al_get_display_width(display), al_get_display_height(display), NULL);


	al_draw_scaled_bitmap(background3, 0, 0, al_get_bitmap_width(background3),
		al_get_bitmap_height(background3), background2_x1, 0, al_get_display_width(display), al_get_display_height(display), NULL);

	al_draw_scaled_bitmap(background3_copy, 0, 0, al_get_bitmap_width(background3_copy),
		al_get_bitmap_height(background3_copy), background2_x2, 0, al_get_display_width(display), al_get_display_height(display), NULL);


	al_draw_scaled_bitmap(background, 0, 0, al_get_bitmap_width(background),
		al_get_bitmap_height(background), background_x1, 0, al_get_display_width(display), al_get_display_height(display), NULL);


	al_draw_scaled_bitmap(background, 0, 0, al_get_bitmap_width(background),
		al_get_bitmap_height(background), background_x2, 0, al_get_display_width(display), al_get_display_height(display), NULL);

}

void shooter::update() {

	background3_x1 -= speed3;
	background3_x2 -= speed3;


	background2_x1 -= speed2;
	background2_x2 -= speed2;


	background_x1 -= speed1;
	background_x2 -= speed1;

	if (background_x1 <= -800) {
		background_x1 = background_x2 + 800;
	}
	if (background_x2 <= -800) {
		background_x2 = background_x1 + 800;
	}

	if (background2_x1 <= -800) {
		background2_x1 = background2_x2 + 800;
	}
	if (background2_x2 <= -800) {
		background2_x2 = background2_x1 + 800;
	}

	if (background3_x1 <= -800) {
		background3_x1 = background3_x2 + 800;
	}
	if (background3_x2 <= -800) {
		background3_x2 = background3_x1 + 800;
	}


	//dino.Draw(ind, jumpTime);

	al_flip_display();
}

void shooter::dispose(){

	al_destroy_bitmap(background);
	al_destroy_bitmap(background2);
	al_destroy_bitmap(background3);
	al_destroy_bitmap(background3_copy);
	al_destroy_bitmap(background4);
	al_destroy_bitmap(background4_copy);


}