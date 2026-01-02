#include "MainMenu.h"
#include <allegro5/allegro.h>

ALLEGRO_COLOR white = al_map_rgb(255, 255, 255);

void MainMenu::render(int i, ALLEGRO_BITMAP* background, int &ind, ALLEGRO_DISPLAY* display, ALLEGRO_FONT* titlefont) {
	if (i % 3 == 0) {
		if (ind < 151) {
			ind++;
		}
		else {
			ind = 0;
		}
	}
	background = al_load_bitmap(frames[ind]);
	al_draw_scaled_bitmap(background, 0, 0, al_get_bitmap_width(background),
		al_get_bitmap_height(background), 0, 0, al_get_display_width(display), al_get_display_height(display), NULL);


	al_draw_text(titlefont, white, al_get_display_width(display) / 4, al_get_display_height(display) / 5, 0, "The Underwater");
	al_draw_text(titlefont, white, al_get_display_width(display) / 2.55, al_get_display_height(display) / 3, 0, "Dino Game");
	titlefont = al_load_ttf_font("FFF_Tusj.ttf", 40, 0);
	al_draw_text(titlefont, white, al_get_display_width(display) / 2.5, al_get_display_height(display) / 2, 0, "Press Enter to Play");


	al_flip_display();
	
	al_destroy_bitmap(background);
	al_destroy_font(titlefont);

}

