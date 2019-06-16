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



class MovementComponent
{
private:
	float maxVelocity;
	sf::Vector2f velocity;
	sf::Vector2f acceleration;
	sf::Vector2f deceleration;

	//initializer functions


public:
	MovementComponent(float maxVelocity);
	virtual ~MovementComponent();

	//Accessors
	const sf::Vector2f getVelocity() const;

	//Functions
	void move(const float x, const float y);
	void update(const float& dt);
};

#endif