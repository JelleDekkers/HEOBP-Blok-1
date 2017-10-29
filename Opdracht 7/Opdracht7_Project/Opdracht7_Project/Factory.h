#pragma once
#include "NPC.h"

class Factory {
public:
	Factory();
	~Factory();
	NPC* getCorrespondingNpc(int id);
};

