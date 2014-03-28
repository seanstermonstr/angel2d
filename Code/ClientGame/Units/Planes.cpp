using namespace std;
#include "Planes.h"


Planes::Planes()
{
	speed = 0;
	airCombatValue = 0;
	bombingCombatValue = 0;
	landed = true;
	distanceType = "long";
}

Planes::Planes(int newSpeed, int newAirCombatValue, int newBombingCombatValue, bool newLanded, string newDistanceType)
{
	speed = newSpeed;
	airCombatValue = newAirCombatValue;
	bombingCombatValue = newBombingCombatValue;
	landed = newLanded;
	distanceType = newDistanceType;
}

int Planes::getSpeed()
{
	return speed;
}

int Planes::getAirCombatValue()
{
	return airCombatValue;
}

int Planes::getBombingCombatValue()
{
	return bombingCombatValue;
}

bool Planes::getLandedStatus()
{
	return landed;
}

string Planes::getDistanceType()
{
	return distanceType;
}
