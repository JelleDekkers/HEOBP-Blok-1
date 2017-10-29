#include "stdafx.h"
#include "Factory.h"
#include "Orc.h"
#include "Elf.h"

Factory::Factory() { }
Factory::~Factory() { }

NPC* Factory::getCorrespondingNpc(int id) {
	switch (id) {
		case 1: {  
			return new Orc();
		}
		case 2: {
			Elf elf;
			return new Elf();
		}
	}
}
