#include "Student.h"

Student::Student(string name) {
	this->name = name;
}

Student::~Student() { }

string Student::getName() {
	return name;
}
