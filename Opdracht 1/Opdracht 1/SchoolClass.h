#pragma once

#include <string>
using namespace std;

class SchoolClass {
private:
	string id;

public:
	SchoolClass(string id);
	~SchoolClass();

	// get:
	string getId();

	// set:
	void setId(string id);
};