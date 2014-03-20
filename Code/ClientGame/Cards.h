#include <string>

class Cards
{
private:
	int id; 		//Indicates what card it is
	bool wildCard; 		//Indicates whether this can be a wild card or not
	bool reshuffle;		//Indicates whether this card can be reshuffled or discarded
	std::string phase;	//Indicates when this card can be played	

public:
	Cards();	//First Constructor

	Cards(int newID, bool newWildCard, bool newReshuffle, std::string newPhase);	//Second Constructor. 

	int getID();		//Retrieves the ID of the card
	bool getWildCard();	//Retrieves wild card eligability
	bool getReshuffle();	//Retrieves reshuffle eligability
	std::string getPhase();	//Retrieves the game phase at which this card can be played

	void playCard();	//Plays cards and changes appropriate stats and game stats and state
};
