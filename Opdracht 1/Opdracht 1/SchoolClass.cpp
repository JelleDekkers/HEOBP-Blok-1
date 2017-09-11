#include "SchoolClass.h"

SchoolClass::SchoolClass(string id) {
	this.id = id;
}

SchoolClass::~SchoolClass() {
	// deconstructor
}

string SchoolClass::getId() {
	return id;
}

void SchoolClass::setId(string id) {
	this.id = id;
}