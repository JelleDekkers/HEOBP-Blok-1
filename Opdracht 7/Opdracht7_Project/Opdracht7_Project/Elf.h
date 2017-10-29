#pragma once
#include "NPC.h"
#include <iostream>
using namespace std;

class Elf : public NPC {
public:
	Elf() {
		name = "Elf";
	}

	void render() {
		cout << "Name: " << name << endl;
	}
};

