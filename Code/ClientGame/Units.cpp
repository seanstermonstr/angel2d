#include <stdlib.h>
#include <stdio.h>
#include "Units.h"
using namespace std;
#include <string>

Units::Units()
{
	status = "Fine";
	nation = "RAF";
	visibleStatus = true;	
}

Units::Units(string newStatus, string newNation, bool newVisibleStatus)
{
	status = newStatus;
	nation = newNation;
	visible = newVisibleStatus;
}

string Units::getStatus()
{
	return status;
}

string Units::getNation()
{
	return nation;
}

bool Units::visible()
{
	return visibleStatus;
}


int Units::diceRoll()
{
	int i;
	unsigned seed; 
	
	return (1 + (rand() % 6));
}

damage Units::airCombat(int combatValue)
{
	damage damageInfo;
	damageInfo.aborted = 0;
	damageInfo.damaged = 0;

	for (int i=0; i<combatValue; i++)
	{
		if (diceRoll() == 4)
			damageInfo.aborted++;
		else if (diceRoll() >= 5)
			damageInfo.damaged++;	
	}

	return damageInfo;
}

damage Units::bombingCombat(int combatValue)
{
	damage damageInfo;
	damageInfo.aborted = 0;
	damageInfo.damage = 0;

	for (int i=0; i<combatValue; i+++)
	{
		if (diceRoll() == 3)
			damageInfo.aborted++;
		else if (diceRoll() >= 4)
			damageInfo.damaged++;
	}
	
	return damageInfo;
}

damage Units::aaCombat(int combatValue)
{
	damage damageInfo;
	damageInfo.aborted = 0;
	damageInfo.damage = 0;

	for (int i=0; i<combatValue; i+++)
	{
		if (diceRoll() == 5)
			damageInfo.aborted++;
		else if (diceRoll() == 6)
			damageInfo.damaged++;
	}
	
	return damageInfo;
}

bool Units::bombingTarget(int combatValue)
{
	damage damageInfo;
	damageInfo.aborted = 0;
	damageInfo.damage = 0;

	for (int i=0; i<combatValue; i+++)
	{
		if (diceRoll() >= 4)
			return true;
	}
}




