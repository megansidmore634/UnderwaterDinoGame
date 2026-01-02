#pragma once
#include <allegro5/allegro.h>

class Obstacle {
public:
	Obstacle() {}
	~Obstacle() {}
	virtual void Draw() {}
	virtual void update() {}
	int x_ = 800;
	int y_ = 380;
	
};

class SeaUrchin : public Obstacle {
public:
	//SeaUrchin();
	~SeaUrchin() {}
	virtual void Draw();
	virtual void update();
	float speed = 6;
	
private:
	
	ALLEGRO_BITMAP* seaurchin;

};

class Crab : public Obstacle{
public:
	//Crab();
	~Crab() {}
	virtual void Draw();
	virtual void update();
	float speed = 6;
	
private:
	
	ALLEGRO_BITMAP* crab;
};

class Conch : public Obstacle {
public:
	~Conch() {}
	virtual void Draw();
	virtual void update();
	float speed = 6;
private:
	ALLEGRO_BITMAP* conch;
};