#include "Units.h"


class Planes : public Units
{

public:
	Planes();	//Constructor
	Planes(int newSpeed, int newAirCombatValue, int newBombingCombatValue, bool landed, std::string distanceType); //Second Constructor

	//Retrieves data members of objects
	int getSpeed();		
	int getAirCombatValue();
	int getBombingCombatValue();
	bool getLandedStatus();
	std::string getDistanceType();


private:
	int speed;
	int airCombatValue;		
	int bombingCombatValue;
	bool landed;			//A plane can either be landed or in air
	std::string distanceType;	//i.e short, long 
};

