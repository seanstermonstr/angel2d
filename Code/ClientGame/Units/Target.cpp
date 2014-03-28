using namespace std;
#include "Target.h"

Target::Target()
{
	type = "base";
}

Target::Target(string newType)
{
	type = newType;
}

string Target::getType()
{
	return type;
}
