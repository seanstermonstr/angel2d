
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
    float x = -6, y = -8;
    
    vector< vector<Actor*> > _map;
    _map.resize(MAP_X);
    
    for (int i = 0; i < _map.size(); i++)
    {
        _map[i].resize(MAP_Y);
        
        for (int j = 0; j < _map[i].size() - 1; j++)
        {   
            std::stringstream path;
            path << "Resources/Tiles/" << i + 1 << "_" << 16 - j << ".png";
            _map[i][j] = new Actor();
            _map[i][j] -> SetPosition(x + i, y + j);
            _map[i][j] -> SetColor (1, 1, 1, 1);
            _map[i][j] -> SetDrawShape(ADS_Square);
            _map[i][j] -> SetSize (1.0f);
            _map[i][j] -> ClearSpriteInfo();
            _map[i][j] -> SetSprite(path.str());
            theWorld.Add(_map[i][j]);
        }
    }
}

void GameScreen::Stop(){

}

void GameScreen::Update(){

    

}

void GameScreen::ReceiveMessage(Message* m){

}


