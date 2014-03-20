#include <string>


struct damage{
	int aborted;
	int damaged;
};

class Units
{
private:
	std::string status;		//i.e Destroyed, Damaged, Aborted, Fine
	std::string nation;		//RAF or Luftwaffe
	bool visibleStatus;		//Indicates if a unit is visible or not

public: 
	Units();  
	//First constructor method to intialize a Units object

	Units(std::string newStatus, std::string newNation, bool newVisibleStatus);
	//Second constructor method to intialize a Units object
	
	std::string getStatus();  //Retrieves the status of the unit
	std::string getNation();  //Retrieves the nation of the unit
	bool visible();      //Retrieves the visibility status of the unit	
	
	int diceRoll();
	//Imitates and returns the value of a 6d dice roll

	damage airCombat(int combatValue);
	//Calculates how much damage is dealt in an airCombat round

	damage bombingCombat(int combatValue);
	//Calculates how much damage is dealt in a bombingCombat round

	bool bombingTarget(int combatValue);
	//Calculates if a bombing operation is successful
	
	damage aaCombat(int combatValue);
	//Calculates how much damage is dealt in an aaCombat round

};
