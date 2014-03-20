using namespace std;
#include "Cards.h"

Cards::Cards()
{
	id = 0;
	wildCard = true;
	reshuffle = true;
	phase = "N/A";
}

Cards::Cards(int newID, bool newWildCard, bool newReshuffle, string newPhase)
{
	id = newID;
	wildCard = newWildCard;
	reshuffle = newReshuffle;
	phase = newPhase;
}

int Cards::getID()
{
	return id;
}

bool Cards::getWildCard()
{
	return wildCard;
}

bool Cards::getReshuffle()
{
	return reshuffle;
}

string Cards::getPhase()
{
	return phase;
}

void Cards::playCard()
{
	int cardID = getID();
	
	//Go through each card an check their ID them make the necessary changes that the card indicates.
}
