#include <String.h>

class Units
{
public: 
	Units();  //First constructor
	Units(string newStatus, string newNation, bool visible);  //Second constructor
	
	string getStatus();  //Retrieves the status of the unit
	string getNation();  //Retrieves the nation of the unit
	bool visible();      //Retrieves the visibility status of the unit	


	void combat(int aCombatValue, int dCombatValue, string combatType);			//Handles combat between all types of units and all types of combat

	

private:
	string status;		//i.e Destroyed, Damaged, Aborted, Fine
	string nation;		//RAF or Luftwaffe
	bool visible;		
};
