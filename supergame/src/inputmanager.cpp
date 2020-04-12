#include "inputmanager.h"
#include "system.h"

inputmanager::inputmanager()
{
	memset(m_wasPressed, false, sf::Keyboard::KeyCount);
	memset(m_isPressed, false, sf::Keyboard::KeyCount);
	m_wasLeftMouseDown;
	m_isLeftMouseDown;
	m_wasRightMouseDown;
	m_isRightMouseDown;
}


void inputmanager::updateKey()
{

	memcpy(m_wasPressed, m_isPressed, sf::Keyboard::KeyCount);
	memset(m_isPressed, false, sf::Keyboard::KeyCount);

	for(int i = 0; i < sf::Keyboard::KeyCount; ++i)
	{
		if(sf::Keyboard::isKeyPressed(static_cast<sf::Keyboard::Key>(i)))
		{
			m_isPressed[i] = true;
		}
	}

	m_wasLeftMouseDown = m_isLeftMouseDown;
	m_isLeftMouseDown = sf::Mouse::isButtonPressed(sf::Mouse::Left);

	m_wasRightMouseDown = m_isRightMouseDown;
	m_isRightMouseDown = sf::Mouse::isButtonPressed(sf::Mouse::Right);
}

bool inputmanager::isKeyPressed(sf::Keyboard::Key mKey)
{
	return (m_isPressed[mKey] == true && m_wasPressed[mKey] == true);
}

bool inputmanager::isKeyReleased(sf::Keyboard::Key mKey)
{
	return (m_isPressed[mKey] == false && m_wasPressed[mKey] == true);
}

bool inputmanager::isKeyTriggered(sf::Keyboard::Key mKey)
{
	return (m_isPressed[mKey] == true && m_wasPressed[mKey] == false);
}

bool inputmanager::isLeftMouseTriggered()
{
	return (m_isLeftMouseDown == true && m_wasLeftMouseDown == false);
}

bool inputmanager::isLeftMousePressed()
{
	return (m_isLeftMouseDown == true && m_wasLeftMouseDown == true);
}

bool inputmanager::isLeftMouseReleased()
{
	return (m_isLeftMouseDown == false && m_wasLeftMouseDown == true);
}

bool inputmanager::isRightMouseTriggered()
{
	return (m_isRightMouseDown == true && m_wasRightMouseDown == false);
}

bool inputmanager::isRightMousePressed()
{
	return (m_isRightMouseDown == true && m_wasRightMouseDown == true);
}

bool inputmanager::isRightMouseReleased()
{
	return (m_isRightMouseDown == false && m_wasRightMouseDown == true);
}

sf::Vector2i inputmanager::getMousePosition()
{
	return sf::Mouse::getPosition(*SYSTEM->GetWindow());
}