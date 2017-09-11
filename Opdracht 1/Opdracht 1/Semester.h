#pragma once
#include "TimeTableItem.h"
#include <string>
using namespace std;

class Semester {
private:
	int year;
	int nr;
	TimeTableItem timeTableItems;

public: 
	Semester(int year, int semesterNr);
	~Semester();

	void addTimeTableItem(TimeTableItem item);

	// get:
	int getSemesterNr();
	int getYear;
};