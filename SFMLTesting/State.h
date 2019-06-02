#ifndef STATE_H
#define STATE_H

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

class State
{
private:
	sf::RenderWindow* window;
	std::vector<sf::Texture> textures;

public:
	State(sf::RenderWindow* window);
	virtual ~State();

	virtual void endState() = 0;
	virtual void update(const float& dt) = 0;
	virtual void render(sf::RenderTarget* target = nullptr) = 0;
};

#endif