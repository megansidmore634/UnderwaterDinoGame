#include "DeathScreen.h"
#include <Windows.h>



void DeathScreen::render() {
	//death_screen = al_load_bitmap("MainMenu / frame_151_delay - 0.04s.png");

	al_draw_scaled_bitmap(death_screen, 0, 0, al_get_bitmap_width(death_screen),
		al_get_bitmap_height(death_screen), 0, 0, al_get_display_width(al_get_current_display()), al_get_display_height(al_get_current_display()), NULL);
	
	Sleep(10);

	al_destroy_bitmap(death_screen);

}