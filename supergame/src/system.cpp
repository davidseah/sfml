#include "system.h"
#include "inputmanager.h"
#include "tilemanager.h"
#include "grid.h"
#include "imgui_superengine.h"

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
		window = new sf::RenderWindow(sf::VideoMode(900, 480), "SuperGame");
		window->setVerticalSyncEnabled(true);
		
		myinputmanager = new inputmanager(window);
		mytilemanager = new tilemanager();
		mygrid = new grid();
		myimgui = new imgui_superengine(window, &deltaClock, mytilemanager);

		myimgui->initialization();
		std::cout << "System Initialized\n";
		return true;
	}

	void system::Update()
	{
		sf::Event event;
		while(window->pollEvent(event))
		{
			ImGui::SFML::ProcessEvent(event);
			if(event.type == sf::Event::Closed)
			{
				window->close();
			}
		}
		myimgui->update();

		myinputmanager->updateKey();

		window->clear();
	

		if(myinputmanager->isKeyTriggered(sf::Keyboard::A))
		{
			mygrid->Switch();
		}

	
		mytilemanager->draw(window);
		mygrid->draw(window,myinputmanager);
	
		myimgui->draw();
		window->display();

	}

	void system::Shutdown()
	{
		if(window)
		{
			delete window;
			window = nullptr;
		}


		myimgui->shutdown();
	}


	bool system::isActive()
	{
		return window->isOpen();
	}
}