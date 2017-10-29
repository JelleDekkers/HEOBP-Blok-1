#pragma once
#include <string>
using namespace std;

class NPC {
public:
	virtual void render() = 0;
	string name;
};

