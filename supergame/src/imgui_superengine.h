#pragma once

#include <SFML/Graphics.hpp>
#include "imgui.h"
#include "imgui-SFML.h"

#include "tilemanager.h"


class imgui_superengine
{
	public:
	imgui_superengine();
	bool initialization();
	void update();
	void draw();
	void shutdown();


	private:
};

