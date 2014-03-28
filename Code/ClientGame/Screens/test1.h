#pragma once

#include "../EagleManager.h"

class DemoScreenStart : public Screen {
public:
	DemoScreenStart();

	virtual void Start();

private:
	AngelSampleHandle music;
};
