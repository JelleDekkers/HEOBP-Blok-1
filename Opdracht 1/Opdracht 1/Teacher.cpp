#include "Teacher.h"

Teacher::Teacher(string firstName, string lastName, string abbrevName) {
	this.firstName = firstName;
	this.lastName = lastName;
	abbreviatedName = abbrevName;
}

Teacher::~Teacher() {
	// deconstructor 
}

string Teacher::getFirstName() {
	return firstName;
}

string Teacher::getLastName() {
	return lastName;
}

string Teacher::getAbbrevName() {
	return abbreviatedName;
}

void Teacher::setFullName(string firstName, string lastName, string abbrevName) {
	this.firstName = firstName;
	this.lastName = lastName;
	abbreviatedName = abbrevName;
}

void Teacher::SetFirstName(string firstName) {
	this.firstName = firstName;
}

void Teacher::SetLastName(string lastName) {
	this.lastName = lastName;
}

void Teacher::SetAbbrevName(string name) {
	abbreviatedName = name;
}
