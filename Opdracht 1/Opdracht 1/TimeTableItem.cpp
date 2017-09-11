#include "TimeTableItem.h"

TimeTableItem::TimeTableItem(Date date, Time start, Time end, string itemName, string abbrevName, SchoolClass schoolClass, Teacher teacher, ClassRoom classRoom) {
	this.date = date;
	this.startTime = start;
	this.endTime = end;
	this.fullName = itemName;
	this.abbrevName = abbrevName;
	this.schoolClass = schoolClass;
	this.teacher = teacher;
	this.classRoom = classRoom;
}

void TimeTableItem::setTeacher(Teacher teacher) {
	this.teacher = teacher;
}

void TimeTableItem::setClassRoom(ClassRoom classRoom) {
	this.classRoom = classRoom;
}

Time TimeTableItem::getEndTime() {
	return endTime;
}

Time TimeTableItem::getStartTime() {
	return startTime;
}

Teacher TimeTableItem::getTeacher() {
	return teacher;
}