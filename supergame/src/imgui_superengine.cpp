#include "imgui_superengine.h"
#include "system.h"
#include "inputmanager.h"
#include "system.h"

#include <iostream>

imgui_superengine::imgui_superengine()
{

}

bool imgui_superengine::initialization()
{
	ImGui::SFML::Init(*SYSTEM->GetWindow());
	return true;
}

void imgui_superengine::update()
{
	ImGui::SFML::Update(*SYSTEM->GetWindow(), SYSTEM->deltaClock.restart());
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

	
	static int pressed_count = 0;
	ImGui::Image(SYSTEM->GetTileManager()->tileContainer[pressed_count].tileSprite, ImVec2(100, 100));
	for(int j = 0; j < 4; ++j)
	{
		for(int w = 0; w < 8; ++w)
		{
			if((j * 8) + w < LASTCOUNT)
			{
				
				ImGui::PushID((j * 8) + w);
				//int frame_padding = -1 + w;     // -1 = uses default padding
				
				if(ImGui::ImageButton(SYSTEM->GetTileManager()->tileContainer[(j * 8) + w].tileSprite, sf::Vector2f(15, 15)))
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
			
				if(ImGui::ImageButton(SYSTEM->GetTileManager()->tileContainer[(j * 8) + w].tileSprite, sf::Vector2f(15, 15)))
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
	}

}

void imgui_superengine::draw()
{
	ImGui::SFML::Render(*SYSTEM->GetWindow());
}

void imgui_superengine::shutdown()
{

}