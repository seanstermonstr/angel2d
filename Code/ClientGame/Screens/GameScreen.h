#pragma once

#include <vector>
#include <string>
#include "../EagleManager.h"

class GameScreen : public Screen
{
public:
    GameScreen();

    virtual void Start();
    virtual void Stop();

    virtual void Update();
    virtual void ReceiveMessage(Message* m);


};
