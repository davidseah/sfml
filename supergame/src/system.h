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
	
		private:
		system();
		~system();

		tilemanager* mytilemanager;
		inputmanager* myinputmanager;
		grid* mygrid;
		sf::RenderWindow* window;
		imgui_superengine* myimgui;

		sf::Clock deltaClock;

		static system* m_singleton;
	};

	
}


#define SYSTEM superengine::system::GetSingleton()
#define DELETE superengine::system::DeleteSingleton()
