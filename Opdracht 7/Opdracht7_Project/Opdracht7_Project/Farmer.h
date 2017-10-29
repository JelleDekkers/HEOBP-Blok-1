#pragma once
#include "Decorator.h"

class Farmer : public Decorator {
public:
	Farmer(NPC* npc) : Decorator(npc) {
		role = "Farmer";
	}
};

