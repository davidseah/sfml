#pragma once

#include <SFML/Graphics.hpp>

class inputmanager
{
	public:


	inputmanager(sf::RenderWindow* const);
	void updateKey();
	bool isKeyPressed(sf::Keyboard::Key);
	bool isKeyReleased(sf::Keyboard::Key);
	bool isKeyTriggered(sf::Keyboard::Key);

	bool isLeftMouseTriggered();
	bool isLeftMousePressed();
	bool isLeftMouseReleased();
	bool isRightMouseTriggered();
	bool isRightMousePressed();
	bool isRightMouseReleased();
	sf::Vector2i getMousePosition();

	private:
	bool m_wasPressed[sf::Keyboard::KeyCount];
	bool m_isPressed[sf::Keyboard::KeyCount];

	bool m_wasLeftMouseDown;
	bool m_isLeftMouseDown;
	bool m_wasRightMouseDown;
	bool m_isRightMouseDown;
	const sf::RenderWindow* window;
};

