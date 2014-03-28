
#pragma once

#include "stdafx.h"
#include <vector>
#include <string>

class Screen: public Renderable
{
public:
    Screen();

    virtual void Start();
    virtual void Stop();    //calls remove on all _objects and delates them
    virtual void Update(float dt);
    virtual void Render();

    virtual void ReceiveMssage(Message *message) {}

protected:
    std::vector<Renderable*> _objects;

};

//EagleManager is a singleton and inherits from:
//  GameManager -- so we receive update and render calls, plus collision notification

#define EagleGame EagleManager::GetInstance()

class EagleManager : public GameManager
{
public:
    
    void MoveForwards();
    void MoveBackwards();

    static EagleManager &GetInstance();

    Screen* GetCurrentScreen();

    virtual void Render();

    virtual void ReceiveMessage(Message* message);

protected:
    EagleManager();
    static EagleManager *s_EagleManager;

private:
    std::vector<Screen*> _screens;
    int _current;
};
	
