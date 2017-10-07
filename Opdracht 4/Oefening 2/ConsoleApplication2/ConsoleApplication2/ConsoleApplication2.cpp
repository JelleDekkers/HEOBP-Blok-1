#include "stdafx.h"
#include "NPC.h"
#include "Orc.h"
#include "Elf.h"
#include "Farmer.h"
#include "Soldier.h"
#include "Shaman.h"
using namespace std;

int main() {
	Orc orc;
	orc.render();
	Farmer farmer(&orc);
	farmer.render();
	Soldier soldier(&orc);
	soldier.render();
	Shaman shaman(&orc);
	shaman.render();
    return 0;
}

