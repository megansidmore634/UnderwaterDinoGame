#include "Game.h"
#include "ParallaxBackground.h"

Game::Game() {}

void Game::init() {
	//bg = new ParallaxBackground("TopLayer.png", "MiddleLayer.png", "DownLayer.png");
}

void Game::update() {
	bg->update();
}

void Game::handleInput() {

}

void Game::render() {
	bg->render();
}
void Game::dispose() {
	bg->dispose();
}