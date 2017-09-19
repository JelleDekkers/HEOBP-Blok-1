#include "Docent.h"

Docent::Docent(string name) {
	this->name = name;
}

Docent::~Docent() { }

string Docent::getName() {
	return name;
}
