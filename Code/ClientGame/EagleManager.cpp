
//#include "stdafx.h"
#include "EagleManager.h"

using namespace std;

EagleManager::EagleManager()
{

}

EagleManager* EagleManager::s_EagleManager = NULL;

EagleManager& EagleManager::GetInstance()
{
    if (s_EagleManager == NULL)
        s_EagleManager = new EagleManager();
    return *s_EagleManager;
}


