#pragma once
#include "NPC.h"
#include <iostream>
using namespace std;

class Orc : public NPC {
public:
	Orc() {
		name = "Orc";
	}

	void render() {
		cout << "Name: " << name << endl;
	}
};
