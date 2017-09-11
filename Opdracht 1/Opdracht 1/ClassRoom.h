#pragma once

#include <string>
using namespace std;

class ClassRoom {
private: 
	string location;
	string id;

public:
	ClassRoom(string location, string id);
	~ClassRoom();

	// get:
	string getLocation();
	string getNumber();

	// set:
	void setLocation(string location);
	void setId(string id);
};