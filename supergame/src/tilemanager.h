#pragma once
#include <SFML/Graphics.hpp>
#include <string>

enum TILEENUM
{
	SLICE = 0,
	TILE01,
	TILE02,
	TILE03,
	TILE04,
	TILE05,
	TILE06,
	TILE07,
	TILE08,
	TILE09,
	TILE10,
	TILE11,
	TILE12,
	TILE13,
	TILE14,
	TILE15,
	TILE16,
	TILE17,
	TILE18,
	TILE19,
	TILE20,
	TILE21,
	TILE22,
	TILE23,
	TILE24,
	TILE25,
	TILE26,
	TILE27,
	TILE28,
	TILE29,
	TILE30,
	TILE31,
	TILE32,
	TILE33,
	TILE34,
	TILE35,
	TILE37,
	TILE38,
	TILE39,
	TILE40,
	TILE41,
	TILE42,
	TILE43,
	TILE44,
	TILE45,
	TILE46,
	TILE47,
	TILE48,
	TILE49,
	TILE50,
	TILE51,
	TILE52,
	TILE53,
	TILE54,
	TILE55,
	TILE56,
	TILE57,
	TILE58,
	TILE59,
	TILE60,
	TILE61,
	TILE62,
	TILE63,
	TILE64,
	TILE65,
	TILE66,
	TILE67,
	TILE68,
	TILE69,
	TILE70,
	TILE71,
	TILEWATERFALL01,
	TILEWATERFALL02,
	TILEWATERFALL03,
	TILEWATERFALL04,
	TILEWATERFALL05,
	TILEWATERFALL06,
	TILEWATERFALL07,
	LASTCOUNT
};

class tile
{
	public:
	tile();
	void Load(const std::string& filename);
	sf::Sprite tileSprite;
	sf::Texture tileTexture;
	private:
	
	
};

class tilemanager
{
	public:
	tilemanager();
	void draw(sf::RenderWindow* win);
	void tilesExport();
	void tilesImport();
	tile tileContainer[LASTCOUNT];
	TILEENUM tileChoice[30][40];
	private:
	
};

