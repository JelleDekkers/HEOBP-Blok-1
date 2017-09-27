#include "Module.h"
#include <iostream>

Module::Module(string name, int ec) {
	this->name = name;
	this->ec = ec;
}

Module::~Module() { }

string Module::getName() {
	return name;
}

void Module::AppointTeacher(Docent* teacher) {
	this->teacher = teacher;
}

void Module::AddStudent(Student student) {
	students.push_back(student);
}

void Module::RemoveStudent(Student student) {
	cout << ">Removing student " << student.getName() << " from module " << name << endl;
	vector<Student>::iterator it = students.begin();
	while (it != students.end()) {
		if (it->getName() == student.getName()) {
			students.erase(it);
			break;
		}
		it++;
	}
}

void Module::printInfo() {
	cout << "Module " << name << "(" << ec << "EC):" << endl;
	string teacherName = "";
	teacherName = getTeacher().getName();
	cout << "-Teacher: " << endl << "\t" << teacherName << endl;
	cout << "-Students: " << endl;
	vector<Student>::iterator it = students.begin();
	while (it != students.end()) {
		cout << "\t" << it->getName() << endl;
		it++;
	}
	cout << "\n" << endl;
}

Docent Module::getTeacher() {
	return *teacher;
}

vector<Student> Module::getStudents() {
	return students;
}

void Module::changeEC(int newEc) {
	cout << ">EC for " << name << " was changed from " << ec << " to " << newEc << endl;
	ec = newEc;
}
