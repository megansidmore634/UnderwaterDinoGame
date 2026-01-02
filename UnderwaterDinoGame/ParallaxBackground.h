#pragma once
#include <iostream>
#include <allegro5/allegro.h>
using namespace std;
class ParallaxBackground {
public:
	ParallaxBackground(string filename1, string filename2, string filename3);
	void update();
	void render();
	void dispose();


private:
	int x1 = 0;
	int y1=0;
	int x2=0;
	int y2=0;
	int x3=0;
	int y3=0;
	ALLEGRO_BITMAP* backgroundImageFloor;
	ALLEGRO_BITMAP* backgroundImageMid;
	ALLEGRO_BITMAP* backgroundImageBack;




};