#pragma once
#include <SFML/Graphics.hpp>
#include "inputmanager.h"
#include <SFML/System/Vector2.hpp>
#include <SFML/Graphics/Color.hpp>

class grid
{
	public:
	grid() : boGridOn (false)
	{

	}

	void draw(sf::RenderWindow* win, inputmanager* input)
	{
		
		if(boGridOn)
		{
			if(input->isLeftMousePressed())
			{
				sf::Vector2i pos = input->getMousePosition();
				int boxx = pos.x / 16;
				int boxy = pos.y / 16;

				sf::RectangleShape ret(sf::Vector2f(16.f, 16.f));
				ret.setFillColor(sf::Color(255, 0, 0, 255));
				ret.setPosition(boxx * 16.f, boxy * 16.f);
				win->draw(ret);

			}


			Line[0].position.y = 0;
			Line[1].position.y = 480;

			for(int i = 0; i < 40; ++i)
			{
				Line[0].position.x = i * 16;
				Line[1].position.x = i * 16;
				win->draw(Line, 2, sf::Lines);
			}


			Line[0].position.x = 0;
			Line[1].position.x = 640;

			for(int i = 0; i < 30; ++i)
			{
				Line[0].position.y = i * 16;
				Line[1].position.y = i * 16;
				win->draw(Line, 2, sf::Lines);
			}
		}
	}

	void Switch()
	{
		boGridOn = !boGridOn;
	}

	private:
	sf::Vertex Line[2];
	bool boGridOn; 

};
