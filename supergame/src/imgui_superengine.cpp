#include "imgui_superengine.h"
#include "system.h"
#include "inputmanager.h"
#include <iostream>

imgui_superengine::imgui_superengine(sf::RenderWindow* const win, sf::Clock * const deltaClock, tilemanager* const tm) :
	window(win),
	dt(deltaClock),
	mytilemanager(tm)
{

}


bool imgui_superengine::initialization()
{
	ImGui::SFML::Init(*window);
	return true;
}

void imgui_superengine::update()
{
	char windowTitle[255] = "ImGui + SFML = <3";
	ImGui::SFML::Update(*window, dt->restart());
	ImGui::SetWindowSize(ImVec2(550, 180));
	ImGuiWindowFlags window_flags = 0;
	
	//if(no_titlebar)        window_flags |= ImGuiWindowFlags_NoTitleBar;
	//if(no_scrollbar)       window_flags |= ImGuiWindowFlags_NoScrollbar;
	//No Menu Bar
	window_flags |= ImGuiWindowFlags_MenuBar;
	//No Move
	window_flags |= ImGuiWindowFlags_NoMove;
	//No Resize
	window_flags |= ImGuiWindowFlags_NoResize;
	
	//No collapse
	window_flags |= ImGuiWindowFlags_NoCollapse;
	//if(no_nav)             window_flags |= ImGuiWindowFlags_NoNav;
	//if(no_background)      window_flags |= ImGuiWindowFlags_NoBackground;
	//if(no_bring_to_front)  window_flags |= ImGuiWindowFlags_NoBringToFrontOnFocus;
	
	//p_open = NULL; // Don't pass our bool* to Begin


	ImGui::Begin("Level Editor", nullptr, window_flags);

	////Window title text edit
	//ImGui::InputText("Window Title", windowTitle, 255);
	//ImGui::SetWindowPos(ImVec2(640, 0));
	//ImGui::SetWindowSize(ImVec2(260, 480));
	//if(ImGui::Button("Update window title"))
	//{
	//	window->setTitle(windowTitle);
	//}
	

	static int pressed_count = 0;
	ImGui::Image(mytilemanager->tileContainer[pressed_count].tileSprite, ImVec2(100, 100));
	for(int j = 0; j < 4; ++j)
	{
		for(int w = 0; w < 8; ++w)
		{
			if((j * 8) + w < LASTCOUNT)
			{
				
				ImGui::PushID((j * 8) + w);
				//int frame_padding = -1 + w;     // -1 = uses default padding
				
				if(ImGui::ImageButton(mytilemanager->tileContainer[(j * 8) + w].tileSprite, sf::Vector2f(15, 15)))
				{
					pressed_count = (j * 8) + w;
				}
				
				ImGui::PopID();
				ImGui::SameLine();
			}
		}
		ImGui::NewLine();
	}

	for(int j = 5; j < 10; ++j)
	{
		for(int w = 0; w < 8; ++w)
		{
			if((j * 8) + w < LASTCOUNT)
			{
				
				ImGui::PushID((j * 8) + w);
				//int frame_padding = -1 + w;     // -1 = uses default padding
			
				if(ImGui::ImageButton(mytilemanager->tileContainer[(j * 8) + w].tileSprite, sf::Vector2f(15, 15)))
				{
					pressed_count = (j * 8) + w;
				}
				
				ImGui::PopID();
				ImGui::SameLine();
			}
		}
		ImGui::NewLine();
	}
	ImGui::End();
	//ImGui::ShowDemoWindow();


	if(SYSTEM->GetInputManager()->isLeftMousePressed())
	{
		sf::Vector2i pos = SYSTEM->GetInputManager()->getMousePosition();
		int boxx = pos.x / 16;
		int boxy = pos.y / 16;


		if(boxx < 40 && boxy < 30)
		{
			SYSTEM->GetTileManager()->tileChoice[boxy][boxx] = static_cast<TILEENUM>(pressed_count);
		}
		//sf::RectangleShape ret(sf::Vector2f(16.f, 16.f));
		//ret.setFillColor(sf::Color(255, 0, 0, 255));
		//ret.setPosition(boxx * 16.f, boxy * 16.f);
		//window->draw(ret);
	}

}

void imgui_superengine::draw()
{
	ImGui::SFML::Render(*window);
}

void imgui_superengine::shutdown()
{

}