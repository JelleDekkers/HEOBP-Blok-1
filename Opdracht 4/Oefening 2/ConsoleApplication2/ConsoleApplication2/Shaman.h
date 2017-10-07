#pragma once
#include "Decorator.h"

class Shaman : public Decorator {
public:
	Shaman(NPC* npc) : Decorator(npc) {
		role = "Shaman";
	}
};

