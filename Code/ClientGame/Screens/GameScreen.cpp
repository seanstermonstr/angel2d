#include "../stdafx.h"
#include "../EagleManager.h"
#include "../Units/Units.h"
#include "GameScreen.h"
#include <sstream>
#include <string>
#define MAP_X 12
#define MAP_Y 17
using namespace std;

GameScreen::GameScreen(){

}

void GameScreen::Start(){
    //inits the game state
	
	//Initializes the background
	Actor *background = new Actor();
	background -> SetPosition(0,0);
	background -> SetColor(0.5, 0.5, 0.5, 1);
	background -> SetDrawShape(ADS_Square);
	background -> SetSize(40.0f);
	theWorld.Add(background);


	//Initializes the Game Map
    float x = 1.5, y = -9.0;
    vector< vector<Actor*> > _map;
    _map.resize(MAP_X);
    for (int i = 0; i < _map.size(); i++)
    {
        _map[i].resize(MAP_Y);
        
        for (int j = 0; j < _map[i].size() - 1; j++)
        {   
            std::stringstream path;	//Allows for string manipulation
            path << "Resources/Tiles/" << i + 1 << "_" << 16 - j << ".png";	//Iterates through every tile filename	
            _map[i][j] = new Actor();	//Defines a new actor 
            _map[i][j] -> SetPosition(x + (i*1.22), y + (j*1.22));
            _map[i][j] -> SetColor (1, 1, 1, 1);
            _map[i][j] -> SetDrawShape(ADS_Square);	
            _map[i][j] -> SetSize (1.22f,1.22f);
            _map[i][j] -> ClearSpriteInfo();
            _map[i][j] -> SetSprite(path.str());	//Maps the tile image to the square actor
            theWorld.Add(_map[i][j]);	//Calls the actor into existence
        }
    }

	//This is a button test
	
}

void GameScreen::Stop(){

}

void GameScreen::Update(){

    

}

void GameScreen::ReceiveMessage(Message* m){

}


