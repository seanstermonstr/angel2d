#include <Units.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;



Units::Units()
{
	status = "Fine";
	nation = "RAF";
	visible = true;	
}

Units::Units(string newStatus, string newNation, bool newVisible)
{
	status = newStatus;
	nation = newNation;
	visible = newVisible;
}

int Units::diceRoll()
{
	int i;
	unsigned seed; 
	
	return (1 + (rand() % 6))
}

void Units::combat(int combatValue, string combatType)
{
	int damageCount = 0;
	int abortCount = 0;
	int destroyedCount = 0;

	if (combatType == 'AirToAir')
	{
		for (int i = 0; i <CombatValue; i++)
		{
			if (diceRoll() >= 4)
				damageCount++;
		}
		return damageCount;	
	}
	else if (combatType == 'Bombing')
	{
		for (int i = 0; i <CombatValue; i++)
		{
			if (diceRoll() >= 3)
				damageCount = 1;	
		}
		return damageCount;
	}
}

