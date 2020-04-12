#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System/Clock.hpp>

class sf::RenderWindow;
class inputmanager;
class tilemanager;
class grid;
class imgui_superengine;

namespace superengine
{
	class system
	{
		public:

		static system* GetSingleton();
		static void DeleteSingleton();

		bool Initialize();
		void Update();
		void Shutdown();
		bool isActive();

		tilemanager* GetTileManager()
		{
			return mytilemanager;
		}

		inputmanager* GetInputManager()
		{
			return myinputmanager;
		}

		sf::RenderWindow* GetWindow()
		{
			return window;
		}


		sf::Clock deltaClock;

		private:
		system();
		~system();

		sf::RenderWindow* window;
		tilemanager* mytilemanager;
		inputmanager* myinputmanager;
		imgui_superengine* myimgui;
		grid* mygrid;

		static system* m_singleton;
	};

	
}


#define SYSTEM superengine::system::GetSingleton()
#define DELETE superengine::system::DeleteSingleton()
