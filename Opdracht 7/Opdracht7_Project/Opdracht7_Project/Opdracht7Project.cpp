#include "stdafx.h"
#include "NPC.h"
#include "Orc.h"
#include "Elf.h"
#include "Farmer.h"
#include "Soldier.h"
#include "Shaman.h"
#include "Factory.h"
	using namespace std;

int main() {

	NPC* orc = new Orc;
	orc->render();

	Factory factory;
	for (int i = 0; i < 2; i++) {
		factory.getCorrespondingNpc(i)->render();
	}
	return 0;
}

