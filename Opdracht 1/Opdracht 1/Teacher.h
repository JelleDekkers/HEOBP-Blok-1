#pragma once

#include <string>
using namespace std;

class Teacher {
private:
	string firstName;
	string lastName;
	string abbreviatedName;

public: 
	Teacher(string firstName, string lastName, string abbrevName);
	~Teacher();

	// get:
	string getFirstName();
	string getLastName();
	string getAbbrevName();

	// set:
	void setFullName(string firstName, string lastName, string abbrevName);
	void SetFirstName(string firstName);
	void SetLastName(string lastName);
	void SetAbbrevName(string name);
};