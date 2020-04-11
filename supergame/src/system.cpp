#include "system.h"
#include "inputmanager.h"
#include "tilemanager.h"
#include "grid.h"

#include <iostream>

namespace superengine
{
	system * system::m_singleton = nullptr;

	system* system::GetSingleton()
	{
		if(!m_singleton)
		{
			m_singleton = new system;
		}
		return m_singleton;
	}

	void system::DeleteSingleton()
	{
		if(m_singleton)
		{
			delete m_singleton;
		}
	}

	system::system() : 
		myinputmanager(nullptr),
		mytilemanager(nullptr)
	{
	}

	system::~system()
	{
		
	}



	bool system::Initialize()
	{
		window = new sf::RenderWindow(sf::VideoMode(640, 480), "SuperGame");
		myinputmanager = new inputmanager(window);
		mytilemanager = new tilemanager();
		mygrid = new grid();
		std::cout << "System Initialized/n";
		return true;
	}

	void system::Update()
	{
		sf::Event event;
		while(window->pollEvent(event))
		{
			if(event.type == sf::Event::Closed)
			{
				window->close();
			}
		}

		myinputmanager->updateKey();

		window->clear();

		if(myinputmanager->isKeyTriggered(sf::Keyboard::A))
		{
			mygrid->Switch();
		}
	
		mytilemanager->draw(window);
		mygrid->draw(window,myinputmanager);

		window->display();

	}

	void system::Shutdown()
	{
		if(window)
		{
			delete window;
			window = nullptr;
		}
	}


	bool system::isActive()
	{
		return window->isOpen();
	}
}