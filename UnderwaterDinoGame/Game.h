#pragma once
#include "ParallaxBackground.h"

class Game {
public:
	Game();
	void init();
	void update();
	void render();
	void handleInput();
	void dispose();
private:
	ParallaxBackground* bg;
};