#pragma once
#include "NPC.h"
#include <iostream>
#include <typeinfo>

class Decorator : public NPC{
public:
	void render() {
		cout << "Name: " << npc->name << " Role: " << role << endl;
	}

protected:
	string role = "undefined role";
	Decorator(NPC* npc) {
		this->npc = npc;
	}

private:
	NPC *npc;
};

