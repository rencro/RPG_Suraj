#ifndef MOVEMENTCOMPONENT_H
#define MOVEMENTCOMPONENT_H

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

enum movement_states { IDLE = 0, MOVING, MOVING_LEFT, MOVING_RIGHT, MOVING_UP, MOVING_DOWN };

class MovementComponent
{
private:
	sf::Sprite& sprite;

	float maxVelocity;
	float acceleration;
	float deceleration;

	sf::Vector2f velocity;

	//initializer functions


public:
	MovementComponent(sf::Sprite& sprite, float maxVelocity, float acceleration, float deceleration);
	virtual ~MovementComponent();

	//Accessors
	const sf::Vector2f getVelocity() const;

	//Functions
	const bool getState(const short unsigned state) const;

	void move(const float x, const float y, const float& dt);
	void update(const float& dt);
};

#endif