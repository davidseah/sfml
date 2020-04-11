#pragma once
#include <SFML/Graphics.hpp>

class sf::RenderWindow;
class inputmanager;
class tilemanager;
class grid;


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

	
		private:
		system();
		~system();

		tilemanager* mytilemanager;
		inputmanager* myinputmanager;
		grid* mygrid;
		sf::RenderWindow* window;

		static system* m_singleton;
	};

	
}


#define SYSTEM superengine::system::GetSingleton()
#define DELETE superengine::system::DeleteSingleton()
