#include "imgui.h"
#include "imgui-SFML.h"
#include <SFML/Graphics.hpp>
#include "grid.h"
#include "system.h"
#include <iostream>

int main()
{
	std::cout << "SuperGame\n";
	SYSTEM->Initialize();


	//load texture
	sf::Texture texture;
	if(!texture.loadFromFile("d:\\dev\\supergame\\rpg-pack\\chars\\gabe\\gabe-idle-run.png"))
	{
		//error
		std::cout << "Error loading file.";
	}

	sf::Sprite sprite;
	sprite.setTexture(texture);
	sprite.setTextureRect(sf::IntRect(0, 0, 24, 24));
	sprite.setScale(sf::Vector2f(1.5f, 1.5f));
	/*sprite.setPosition(sf::Vector2f(0.f, 0.f));
	sprite.setColor(sf::Color(0, 255, 0));*/
	
	while(SYSTEM->isActive())
	{
		SYSTEM->Update();
		

	
		/*if(myinputmanager.isKeyPressed(sf::Keyboard::Left))
		{
			sprite.move(sf::Vector2f(-0.5f, 0.f));
		}
		if(myinputmanager.isKeyPressed(sf::Keyboard::Right))
		{
			sprite.move(sf::Vector2f(0.5f, 0.f));
		}
		if(myinputmanager.isKeyPressed(sf::Keyboard::Down))
		{
			sprite.move(sf::Vector2f(0.0f, 0.5f));
		}
		if(myinputmanager.isKeyPressed(sf::Keyboard::Up))
		{
			sprite.move(sf::Vector2f(0.0f, -0.5f));
		}

		if(myinputmanager.isKeyTriggered(sf::Keyboard::A))
		{
			mygrid.Switch();
		}

		if(myinputmanager.isKeyReleased(sf::Keyboard::Q))
		{
			mytilemanager.tilesImport();
		}

		if(myinputmanager.isLeftMouseTriggered())
		{
			sf::Vector2i globalPosition = myinputmanager.getMousePosition();
			std::cout << "X " << globalPosition.x << " Y " << globalPosition.y << "\n";
		}*/

		
		//mygrid.draw(window);
		//window.draw(sprite);
	}

	SYSTEM->Shutdown();
	return 0;
}