#pragma once

#include <string>
#include "Teacher.h"
#include "SchoolClass.h"
#include "ClassRoom.h"
using namespace std;

struct Date {
	int day;
	int month;
	int year;
};

struct Time {
	int hour;
	int min;
};

class TimeTableItem {
	enum type {lesson, meeting};

private:
	Date date;
	Time startTime;
	Time endTime;
	string fullName;
	string abbrevName;
	type type;
	SchoolClass schoolClass;
	Teacher teacher;
	ClassRoom classRoom;

public:
	TimeTableItem(Date date, Time start, Time end, string itemName, string abbrevName, SchoolClass schoolClass, Teacher teacher, ClassRoom classRoom);

	// get:
	Time getStartTime();
	Time getEndTime();
	Teacher getTeacher();

	// set:
	void setTeacher(Teacher teacher);
	void setClassRoom(ClassRoom classRoom);
};