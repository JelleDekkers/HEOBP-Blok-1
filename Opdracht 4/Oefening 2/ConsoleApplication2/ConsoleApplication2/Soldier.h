#pragma once
#include "Decorator.h"

class Soldier : public Decorator {
public:
	Soldier(NPC* npc) : Decorator(npc) {
		role = "Soldier";
	}
};

