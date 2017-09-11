#include <string>
#include "ClassRoom.h"

ClassRoom::ClassRoom(string location, string id) {
	this.location = location;
	this.id = id;
}

ClassRoom::~ClassRoom() {
	// deconstructor;
}

ClassRoom::getLocation() {
	return location;
}

ClassRoom::getNumber() {
	return id;
}

ClassRoom::setLocation(string location) {
	this.location = location;
}

ClassRoom.SetId(string id) {
	this.id = id;
}