#include "tilemanager.h"

#include <iostream>
#include <fstream>

tile::tile()
{
	
}


void tile::Load(const std::string& filename)
{
	if(!tileTexture.loadFromFile(filename))
	{
		//error
		std::cout << "Error loading file.";
	}

	tileSprite.setTexture(tileTexture);
}

TILEENUM fillup[][40]
{
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39,
	SLICE, TILE01, TILE02, TILE03, TILE04, TILE05, TILE06, TILE07, TILE08, TILE09, TILE10, TILE11, TILE12, TILE13, TILE14, TILE15, TILE16, TILE17, TILE18, TILE19, TILE20, TILE21, TILE22, TILE23, TILE24, TILE25, TILE26,TILE27, TILE28, TILE29, TILE30, TILE31, TILE32, TILE33, TILE34, TILE35, TILE37, TILE38, TILE39,TILE39
};


tilemanager::tilemanager()
{
	memset(tileChoice, 0, sizeof(tileChoice));
	memcpy(tileChoice, fillup, sizeof(tileChoice));

	tileContainer[SLICE].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-Slice.png");
	tileContainer[TILE01].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile01.png");
	tileContainer[TILE02].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile02.png");
	tileContainer[TILE03].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile03.png");
	tileContainer[TILE04].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile04.png");
	tileContainer[TILE05].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile05.png");
	tileContainer[TILE06].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile06.png");
	tileContainer[TILE07].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile07.png");
	tileContainer[TILE08].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile08.png");
	tileContainer[TILE09].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile09.png");
	tileContainer[TILE10].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile10.png");
	tileContainer[TILE11].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile11.png");
	tileContainer[TILE12].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile12.png");
	tileContainer[TILE13].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile13.png");
	tileContainer[TILE14].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile14.png");
	tileContainer[TILE15].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile15.png");
	tileContainer[TILE16].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile16.png");
	tileContainer[TILE17].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile17.png");
	tileContainer[TILE18].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile18.png");
	tileContainer[TILE19].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile19.png");
	tileContainer[TILE20].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile20.png");
	tileContainer[TILE21].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile22.png");
	tileContainer[TILE22].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile23.png");
	tileContainer[TILE23].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile24.png");
	tileContainer[TILE24].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile25.png");
	tileContainer[TILE25].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile26.png");
	tileContainer[TILE26].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile27.png");
	tileContainer[TILE27].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile28.png");
	tileContainer[TILE28].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile29.png");
	tileContainer[TILE29].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile30.png");
	tileContainer[TILE30].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile31.png");
	tileContainer[TILE31].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile32.png");
	tileContainer[TILE32].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile33.png");
	tileContainer[TILE33].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile34.png");
	tileContainer[TILE34].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile35.png");
	tileContainer[TILE35].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile37.png");
	tileContainer[TILE38].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile38.png");
	tileContainer[TILE39].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile39.png");
	tileContainer[TILE40].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile40.png");
	tileContainer[TILE41].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile41.png");
	tileContainer[TILE42].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile42.png");
	tileContainer[TILE43].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile43.png");
	tileContainer[TILE44].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile44.png");
	tileContainer[TILE45].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile45.png");
	tileContainer[TILE46].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile46.png");
	tileContainer[TILE47].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile47.png");
	tileContainer[TILE48].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile48.png");
	tileContainer[TILE49].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile49.png");
	tileContainer[TILE50].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile50.png");
	tileContainer[TILE51].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile51.png");
	tileContainer[TILE52].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile52.png");
	tileContainer[TILE53].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile53.png");
	tileContainer[TILE54].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile54.png");
	tileContainer[TILE55].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile55.png");
	tileContainer[TILE56].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile56.png");
	tileContainer[TILE57].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile57.png");
	tileContainer[TILE58].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile58.png");
	tileContainer[TILE59].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile59.png");
	tileContainer[TILE60].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile60.png");
	tileContainer[TILE61].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile61.png");
	tileContainer[TILE62].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile62.png");
	tileContainer[TILE63].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile63.png");
	tileContainer[TILE64].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile64.png");
	tileContainer[TILE65].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile65.png");
	tileContainer[TILE66].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile66.png");
	tileContainer[TILE67].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile67.png");
	tileContainer[TILE68].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile68.png");
	tileContainer[TILE69].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile69.png");
	tileContainer[TILE70].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile70.png");
	tileContainer[TILE71].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile71.png");
	tileContainer[TILEWATERFALL01].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile-waterfall01.png");
	tileContainer[TILEWATERFALL02].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile-waterfall02.png");
	tileContainer[TILEWATERFALL03].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile-waterfall03.png");
	tileContainer[TILEWATERFALL04].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile-waterfall04.png");
	tileContainer[TILEWATERFALL05].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile-waterfall05.png");
	tileContainer[TILEWATERFALL06].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile-waterfall06.png");
	tileContainer[TILEWATERFALL07].Load("d:\\dev\\supergame\\rpg-pack\\tiles\\generic-rpg-tile-waterfall07.png");
}

void tilemanager::tilesExport()
{
	std::ofstream myfile;
	myfile.open("data.txt");
	for(int i = 0; i < 30; ++i)
	{
		for(int j = 0; j < 40; ++j)
		{
			myfile << tileChoice[i][j] << " ";
		}
	}
	myfile.close();
}


void tilemanager::tilesImport()
{
	std::ifstream myfile;
	myfile.open("data.txt");

	if(myfile.is_open())
	{
		for(int i = 0; i < 30; ++i)
		{
			for(int j = 0; j < 40; ++j)
			{
				int n = 0;
				myfile >> n;
				tileChoice[i][j] = static_cast<TILEENUM>(n);
			}
		}
		myfile.close();
	}
}

void tilemanager::draw(sf::RenderWindow* win)
{
	for(int i = 0; i < 30; ++i)
	{
		for(int j = 0; j < 40; ++j)
		{
			tileContainer[tileChoice[i][j]].tileSprite.setPosition(sf::Vector2f(j * 16, i * 16));
			win->draw(tileContainer[tileChoice[i][j]].tileSprite);
		}
	}
}