#ifndef ENTITY_H
#define ENTITY_H

#include <SFML\System.hpp>
#include <SFML\Graphics.hpp>
#include <SFML\Window.hpp>
#include <SFML\Network.hpp>
#include <SFML\Audio.hpp>

#include <iostream>
#include <ctime>
#include <vector>
#include <fstream>
#include <sstream>
#include <stack>
#include <map>


class Entity
{
private:
	void initVariables();

protected:
	sf::Texture* texture;
	sf::Sprite* sprite;
	float movementSpeed;

public:
	Entity();
	virtual ~Entity();

	//Components
	void createSprite(sf::Texture* texture);

	//Functions
	virtual void move(const float& dt, const float dir_x, const float dir_y);
	virtual void update(const float& dt);
	virtual void render(sf::RenderTarget* target);

};

#endif
