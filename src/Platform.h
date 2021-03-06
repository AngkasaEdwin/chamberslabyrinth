#pragma once

#include <SFML\Graphics.hpp>

class Platform
{
private:
	sf::Vector2f pos;
	sf::Vector2f size;
	sf::RectangleShape rec;

public:
	Platform();
	Platform(sf::Vector2f nPos, sf::Vector2f nSize);
	~Platform();

	// setters
	void setColor(sf::Color nColor = sf::Color::White);
	void setSize(sf::Vector2f nSize);
	void setPosition(sf::Vector2f nPos);

	// getters
	sf::Vector2f getPosition();
	sf::Vector2f getSize();

	void render(sf::RenderWindow &window);
};

