
//#include "stdafx.h"
#include "EagleManager.h"

using namespace std;

EagleManager::EagleManager() {}

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

EagleManager* EagleManager::s_EagleManager = NULL;

EagleManager& EagleManager::GetInstance()
{
    if (s_EagleManager == NULL)
        s_EagleManager = new EagleManager();
    return *s_EagleManager;
}


