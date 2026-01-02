// UnderwaterShooter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <bitset>
#include <cstdlib>
#include <string>
#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_image.h>
#include <vector>
#include <ctime>
#include <algorithm>
#include "MainMenu.h"
#include "DeathScreen.h"
#include "ParallaxBackground.h"
#include "SeaUrchin.h"
#include<allegro5/allegro_font.h>
#include<allegro5/allegro_ttf.h>
#include <iostream>
#include <Windows.h>
#include "GreenDino.h"
#include "shootermain.h"
#include <allegro5/allegro_audio.h>


void dispose();
void render();

bool collision_check(Obstacle obs, GreenDino dino) {
	if ((dino.y_  >= obs.y_ - 100) && ((dino.x_ < obs.x_ + 100) && (dino.x_ + 75 > obs.x_))) {
		return true;
	}
	
	return false;

}


ALLEGRO_BITMAP* background = nullptr;
ALLEGRO_BITMAP* icon = nullptr;
ALLEGRO_DISPLAY* display = nullptr;
ALLEGRO_EVENT_QUEUE* event_queue = nullptr;
ALLEGRO_TIMER* timer = nullptr;
ALLEGRO_SAMPLE* background_music = nullptr;
ALLEGRO_SAMPLE* menu_music = nullptr;
ALLEGRO_SAMPLE_INSTANCE* song_instance = nullptr;
ALLEGRO_SAMPLE_INSTANCE* menu_song = nullptr;
ALLEGRO_COLOR white1 = al_map_rgb(255, 255, 254);




MainMenu mm;
DeathScreen ds;



int ind = 0;
int index = 8;
int gap = 0;
int time_in_jump = 0;


int main() {
	srand(time(NULL));

	al_init();
	al_init_image_addon();
	al_init_font_addon();
	al_init_ttf_addon();
	al_install_audio();
	al_init_acodec_addon();
	al_reserve_samples(5);

	background_music = al_load_sample("drums.ogg");
	menu_music = al_load_sample("aquatic-ambience.ogg");
	song_instance = al_create_sample_instance(background_music);
	menu_song = al_create_sample_instance(menu_music);

	al_set_sample_instance_playmode(song_instance, ALLEGRO_PLAYMODE_LOOP);
	al_attach_sample_instance_to_mixer(song_instance, al_get_default_mixer());
	al_set_sample_instance_playmode(menu_song, ALLEGRO_PLAYMODE_LOOP);
	al_attach_sample_instance_to_mixer(menu_song, al_get_default_mixer());

	ALLEGRO_FONT* titlefont = al_load_ttf_font("FFF_Tusj.ttf", 70, 0);


	if (!al_init()) {
		al_show_native_message_box(NULL, NULL, NULL, "Could not initialize Allegro 5", NULL, NULL);
		return -1;
	}
		
	display = al_create_display(800, 600);
	event_queue = al_create_event_queue();
	timer = al_create_timer(1.0 / 60);
	
	al_install_keyboard();
	al_register_event_source(event_queue, al_get_display_event_source(display));
	al_register_event_source(event_queue, al_get_timer_event_source(timer));
	al_register_event_source(event_queue, al_get_keyboard_event_source());

	bool running = true;
	bool redraw = false;
	bool play_game = false;
	int i = 0;

	al_start_timer(timer);
	al_set_window_title(display, "The Underwater Dino Game");
	icon = al_load_bitmap("GreenDino/dino7.png");
	al_set_display_icon(display, icon);

	while (running) {
		
		al_play_sample_instance(menu_song);

		ALLEGRO_EVENT event;
		al_wait_for_event(event_queue, &event);
		switch (event.type) {
		case ALLEGRO_EVENT_DISPLAY_CLOSE:
			running = false;
			break;
		case ALLEGRO_EVENT_TIMER:
			redraw = true;
			break;
		case ALLEGRO_EVENT_KEY_DOWN:
			if (event.keyboard.keycode == ALLEGRO_KEY_ENTER) {
				play_game = true;
				break;
			}
		}

		if (!play_game && redraw && al_is_event_queue_empty(event_queue)) {
			
			redraw = false;
			if (i < 4) {
				i++;
			}
			else if (i == 4) {
				i = 1;
			}
			mm.render(i, background, ind, display, titlefont);
		}

		if (play_game) {
			al_stop_sample_instance(menu_song);
		}
		

		al_play_sample_instance(song_instance);

		shooter sh;
		GreenDino dino(150, 380);
		SeaUrchin urchin;
		SeaUrchin urchin1;
		Crab crab;
		Crab crab1;
		Conch conch;
		Conch conch1;
		std::vector<SeaUrchin> urchins;
		std::vector<Crab> crabs;
		std::vector<Conch> shells;
		
		int score = 0;
		int score_gap = 0;
		int spawn_interarrival = 0;
		int spawn_gap = 80;
		int lb = 0;
		int ub = 5;
		int obs_num;

		while(play_game) {
			
			std::string score_str = "Score: " + std::to_string(score);
						
			al_wait_for_event(event_queue, &event);

			if (event.type == ALLEGRO_EVENT_TIMER) 
			{
				redraw = true;
			}

			switch (event.type) {
			case ALLEGRO_EVENT_DISPLAY_CLOSE:
				play_game = false;
				break;

			case ALLEGRO_EVENT_KEY_DOWN:
				if (event.keyboard.keycode == ALLEGRO_KEY_SPACE) 
				{
						dino.state_ = DinoState::JUMPING;
				}
				break;
				
			case ALLEGRO_EVENT_KEY_UP:
				if (event.keyboard.keycode == ALLEGRO_KEY_SPACE)
				{
					dino.state_ = DinoState::RUNNING;
					time_in_jump = 0;
					dino.y_ = 380;
					index = 5;
				}
				break;
			}

			if (redraw && al_event_queue_is_empty(event_queue)) {
				sh.render(display, dino, index, time_in_jump);

				if (spawn_interarrival % spawn_gap == 0) 
				{
					obs_num = (rand() % (ub - lb + 1)) + lb;
					if (obs_num == 0) urchins.push_back(urchin);
					if (obs_num == 1) urchins.push_back(urchin1);
					if (obs_num == 2) crabs.push_back(crab);
					if (obs_num == 3) crabs.push_back(crab1);
					if (obs_num == 4) shells.push_back(conch);
					if (obs_num == 5) shells.push_back(conch1);
				}

				for (int i = 0; i < urchins.size(); i++) {
					
					urchins[i].Draw();
					urchins[i].update();
					if (urchins[i].x_ <= -94) {
						urchins.erase(urchins.begin() + i);
					}
				}

				for (int i = 0; i < crabs.size(); i++) {

					crabs[i].Draw();
					crabs[i].update();
					if (crabs[i].x_ <= -94) {
						crabs.erase(crabs.begin() + i);
					}
				}

				for (int i = 0; i < shells.size(); i++) {

					shells[i].Draw();
					shells[i].update();
					if (shells[i].x_ <= -94) {
						shells.erase(shells.begin() + i);
					}
				}
				
				dino.Draw(index, time_in_jump);

				ALLEGRO_FONT* titlefont1 = al_load_ttf_font("FFF_Tusj.ttf", 35, 0);
				al_draw_text(titlefont1, white1, 350, al_get_display_height(display) / 9, 0, score_str.c_str());
				al_destroy_font(titlefont1);

				sh.update();
				if (score_gap % 8 == 0) {
					score++;
				}
				score_gap++;

				if (score % 15 == 0) {
					sh.speed1+=0.25;
					sh.speed2 += 0.15;
					sh.speed3 += 0.05;
					urchin.speed += 0.25;
					urchin1.speed += 0.25;
					crab.speed += 0.25;
					crab1.speed += 0.25;
					conch.speed += 0.25;
					conch1.speed += 0.25;
					
				}

				spawn_interarrival++;
				sh.dispose();
			}
			
			
			gap++;
			if (gap % 3 == 0) {
				if (dino.state_ == DinoState::RUNNING) {
					index++;
					if (index > 9) {
						index = 5;
					}
				}
				if (dino.state_ == DinoState::JUMPING) {

					index = 12;
				}
				gap = 0;
			}
			//bool play = true;
			for (auto x : urchins) {
				if (collision_check(x, dino)) {

					play_game = false;
				}
			}
			for (auto x : crabs) {
				if (collision_check(x, dino)) {
					play_game = false;
				}
			}
			for (auto x : shells) {
				if (collision_check(x, dino)) {
					play_game = false;
				}
			}

			if (!play_game) {
				int i = 0;
				while (i < 200) {

					std::string score_display = "Your Score: " + to_string(score);
					
					ALLEGRO_BITMAP* death_screen = al_load_bitmap("you_died.png");
					al_draw_scaled_bitmap(death_screen, 0, 0, al_get_bitmap_width(death_screen),
						al_get_bitmap_height(death_screen), 0, 0, al_get_display_width(al_get_current_display()), al_get_display_height(al_get_current_display()), NULL);

					ALLEGRO_FONT * titlefont1 = al_load_ttf_font("FFF_Tusj.ttf", 40, 0);
					al_draw_text(titlefont1, white1, al_get_display_width(display) / 3, al_get_display_height(display) / 1.75, 0, score_display.c_str());

					al_destroy_font(titlefont1);
					al_flip_display();
					al_destroy_bitmap(death_screen);
					i++;
				}
				
			}
			
		}
		
		al_stop_sample_instance(song_instance);
		
	}
	
	return 0;
}

void dispose() {

	al_destroy_sample(background_music);
	al_destroy_sample_instance(song_instance);
	al_destroy_display(display);
	al_destroy_timer(timer);
	al_destroy_event_queue(event_queue);

}

void render() {
	al_clear_to_color(al_map_rgb(255, 255, 255));
	al_flip_display();
}