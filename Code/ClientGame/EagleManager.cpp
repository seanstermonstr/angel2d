
#include "stdafx.h"
#include "EagleManager.h"
#include "./Screens/test.h"
#include "./Screens/test1.h"
#include "./Screens/GameScreen.h"

using namespace std;

//Start Screens Class Definition
Screen::Screen() {}

void Screen::Start() {}

void Screen::Stop()
{
    std::vector<Renderable*>::iterator it = _objects.begin();
    while(_objects.end() !=it)
    {
        (*it)->Destroy();
        it++;
    }
    _objects.clear();
}

void Screen::Update(float dt) {}

void Screen::Render() {}

//Start Eagle Manager Class Definition
EagleManager* EagleManager::s_EagleManager = NULL;

EagleManager::EagleManager()
{
    //subscribe to messages
    theSwitchboard.SubscribeTo(this, "MoveForwards");
    theSwitchboard.SubscribeTo(this, "MoveBackwards");

    //push screens to display here

    _screens.push_back(new GameScreen());
    _screens.push_back(new DemoScreenStart());
    _screens.push_back(new DemoScreenInstructions());

    //end screens

    unsigned int startingIndex = 0;
    if (_screens.size() > startingIndex)
    {
        theWorld.Add(_screens[startingIndex]);
        _screens[startingIndex]->Start();
        _current = startingIndex;
    }
    else
        _current = -1;
}

EagleManager& EagleManager::GetInstance()
{
    if (s_EagleManager == NULL)
        s_EagleManager = new EagleManager();
    return *s_EagleManager;
}

Screen* EagleManager::GetCurrentScreen()
{
    return _screens[_current];
}

void EagleManager::ReceiveMessage(Message* message)
{
    if (message->GetMessageName() == "MoveForwards")
    {
        MoveForwards();
    }
    else if (message->GetMessageName() == "MoveBackwards")
    {
        MoveBackwards();
    }
}

void EagleManager::MoveForwards()
{
    if((_current >= 0) && (_current < (int)_screens.size() - 1))
    {
        _screens[_current]->Stop();
        theWorld.Remove(_screens[_current]);
        _screens[++_current]->Start();
        theWorld.Add(_screens[_current]);
    }
}   


void EagleManager::MoveBackwards()
{
    if (_current > 0)
    {
        _screens[_current]->Stop();
        theWorld.Remove(_screens[_current]);
        _screens[--_current]->Start();
        theWorld.Add(_screens[_current]);
    }
}

void EagleManager::Render()
{
    glColor3f(0.5f, 0.5f, 0.5f);
    char* infoString = "";
    int xOffset = 0;
    if (_current == 0)
    {
        infoString = "[A/Space]: Next";
        xOffset = 887;
    }
    else if (_current == _screens.size() - 1)
    {
        infoString = "[Back/Minus]: Previous";
        xOffset = 824;
    }
    else
    {
        infoString = "[A/Space]: Next [Back/Minus]: Previous";
        xOffset = 680;
    }

    int yOffset = 763;
    if (theWorld.IsHighResScreen())
    {
        // the perils of using pixel coordinates in a post-retina world
        xOffset *= 2;
        yOffset *= 2;
    }

    DrawGameText(infoString, "ConsoleSmall", xOffset, yOffset);
}






