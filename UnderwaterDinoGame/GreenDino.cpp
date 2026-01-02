#include "GreenDino.h"
#include <allegro5/allegro.h>


void GreenDino::Draw(int index, int &jumpTime) {
    //ALLEGRO_COLOR color = al_map_rgb(255, 0, 0);

    if (state_ == DinoState::RUNNING) {
        // 8 - 13
        ALLEGRO_BITMAP* curr_dino;
        curr_dino = al_load_bitmap(listFrames[index]);
        al_draw_scaled_bitmap(curr_dino, 0, 0, al_get_bitmap_width(curr_dino), al_get_bitmap_height(curr_dino), 
            150, 380, 100, 100, 0);

        al_destroy_bitmap(curr_dino);
    }
    else if (state_ == DinoState::JUMPING) {
    
        ALLEGRO_BITMAP* curr_dino;
        curr_dino = al_load_bitmap(listFrames[index]);

        if (jumpTime < 20) {
            al_draw_scaled_bitmap(curr_dino, 0, 0, al_get_bitmap_width(curr_dino), al_get_bitmap_height(curr_dino),
                150, 380 - jumpTime * 8, 100, 100, 0);
            y_ -= jumpTime * 8;
        }

        if (jumpTime >= 20 && jumpTime < 30) {
            al_draw_scaled_bitmap(curr_dino, 0, 0, al_get_bitmap_width(curr_dino), al_get_bitmap_height(curr_dino),
                150, 220, 100, 100, 0);
        }

        if (jumpTime >= 30 && jumpTime < 50) {
            al_draw_scaled_bitmap(curr_dino, 0, 0, al_get_bitmap_width(curr_dino), al_get_bitmap_height(curr_dino),
                150, (220 + (jumpTime - 30) * 8), 100, 100, 0);
            y_ += (jumpTime - 30) * 8;
        }
        jumpTime++;
        if (jumpTime == 50) {
            jumpTime = 0;
            y_ = 380;
        }
        al_destroy_bitmap(curr_dino);
    }
}

void GreenDino::Duck() {

}

void GreenDino::Jump() {

}

void GreenDino::Run() {

}

void GreenDino::Update() {

}

void GreenDino::StopDucking() {

}