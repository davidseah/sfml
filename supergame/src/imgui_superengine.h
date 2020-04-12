#pragma once

#include <SFML/Graphics.hpp>
#include "imgui.h"
#include "imgui-SFML.h"

#include "tilemanager.h"


class imgui_superengine
{
	public:
	imgui_superengine(sf::RenderWindow* const, sf::Clock * const,
					  tilemanager* const);
	bool initialization();
	void update();
	void draw();
	void shutdown();


	private:
	sf::RenderWindow* const window;

	tilemanager* const mytilemanager;

	sf::Clock* const dt;
};

