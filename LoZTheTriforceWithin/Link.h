#pragma once

#include "SFML\Graphics.hpp"

class Link
{
public:
	Link();
	Link(std::string name);
	~Link();

	//getters and setters
	void setName(std::string name);
	std::string getName();

	void setHealth(float health);
	float getHealth();
	
	void setTexture(std::string path);
	sf::Texture getTexture();

	void setSprite(sf::Sprite sprite);
	sf::Sprite getSprite();
	//end getters and setters

protected:
	std::string mName;
	float mHealth;
	std::string mTexturePath = "Images/Link1.png";
	sf::Texture mTexture;
	sf::Sprite mSprite;
};

