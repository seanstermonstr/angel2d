#include "Units.h"

class Target : public Units
{
public:
	Target(); //First Constructor
	Target(std::string newType);

	std::string getType();

private:
	string type;		//Sea base or Factorys

};
