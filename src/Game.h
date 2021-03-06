#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include "Levels.h"
#include "Hero.h"

class Game
{
private:
	enum{
		titleScreen, inGame, pause
	}GameState;

	sf::RenderWindow window;
	sf::Event event;

	//Camera
	sf::View camera;

	sf::Font century;
	sf::Text title;
	sf::Text pressEnter;

	Levels levels;
	Hero hero;

	void update();
	void render();
	void handleEvent(sf::Event);
	void loadAssets();

	void titleUpdate();
	void gameUpdate();
	void pauseUpdate();
public:
	Game();
	void mainLoop();
};

#endif
