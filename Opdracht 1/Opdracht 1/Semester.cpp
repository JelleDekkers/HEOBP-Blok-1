#include <string>
#include "Semester.h"

Semester::Semester(int year, int nr) {
	this.year = year;
	this.nr = nr;
}

Semester::~Semester() { 
	// deconstructor
}

void Semester::addTimeTableItem(TimeTableItem item) {
	// add item to list of timeTableItems
}

int Semester::getSemesterNr() {
	return nr;
}

int Semester::getYear() {
	return year;
}