#include "Units.h"

class Planes : public Units
{

public:
	Planes();	//Constructor

	//Retrieves data members of objects
	int GetSpeed();		
	int GetAirCombatValue();
	int GetBombingCombatValue();
	bool GetVisibilityStatus();
	bool GetLandedStatus();
	string GetDistanceType();
	string GetNation();
	string GetStatus();


private:
	int speed;
	int airCombatValue;		
	int bombingCombatValue;
	bool landed;			//A plane can either be landed or in air
	string distanceType;	//i.e short, long 
};

