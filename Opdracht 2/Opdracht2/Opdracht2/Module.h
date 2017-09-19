#pragma once
#include <string>
#include <vector>
#include "Docent.h"
#include "Student.h"

class Module {
public:
	Module(string name, int ec);
	~Module();
	string getName();
	void AppointTeacher(Docent teacher);
	void AddStudent(Student student);
	void RemoveStudent(Student student);
	void printInfo();
	Docent getTeacher();
	vector<Student> getStudents();
	void changeEC(int newEc);

private:
	string name;
	int ec;
	Docent * teacher;
	vector<Student> students;
};

