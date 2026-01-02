#pragma once
#include <vector>
#include<allegro5/allegro.h>

enum class DinoState { RUNNING, JUMPING, DUCKING };

class GreenDino {
public:
	std::vector<const char*> listFrames;
	GreenDino(int x, int y) : x_(x), y_(y), state_(DinoState::RUNNING) {
		listFrames.push_back("GreenDino/dino1.png");
		listFrames.push_back("GreenDino/dino2.png");
		listFrames.push_back("GreenDino/dino3.png");
		listFrames.push_back("GreenDino/dino4.png");
		listFrames.push_back("GreenDino/dino5.png");
		listFrames.push_back("GreenDino/dino6.png");
		listFrames.push_back("GreenDino/dino7.png");
		listFrames.push_back("GreenDino/dino8.png");
		listFrames.push_back("GreenDino/dino9.png");
		listFrames.push_back("GreenDino/dino10.png");
		listFrames.push_back("GreenDino/dino11.png");
		listFrames.push_back("GreenDino/dino12.png");
		listFrames.push_back("GreenDino/dino13.png");
		listFrames.push_back("GreenDino/dino14.png");
		listFrames.push_back("GreenDino/dino15.png");
		listFrames.push_back("GreenDino/dino16.png");
		listFrames.push_back("GreenDino/dino17.png");

	}

	void Draw(int index, int &jumpTime);
	void Jump();
	void Duck();
	void StopDucking();
	void Update();
	void Run();
	int running_index = 8;
	DinoState state_;
	int x_;
	int y_;

private:
	
	
	float y_velocity_ = 0.0f;

	const float GRAVITY = 1.0f;
	const float JUMP_SPEED = 20.0f;

	
	int jumping_index = 0;
	int ducking_index = 0;
	
	

};