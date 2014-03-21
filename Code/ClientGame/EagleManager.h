
//#pragma once

#include "stdafx.h"
#include <vector>
#include <string>

class Screen: public Renderable
{
public:
    Screen();

protected:
    std::vector<Renderable*> _objects;

};

#define EagleGame EagleManager::GetInstance()

class EagleManager : public GameManager
{
public:

    static EagleManager &GetInstance();

protected:
    EagleManager();
    static EagleManager *s_EagleManager;

private:
    std::vector<Screen*> _screens;
    int _current;
};
	
