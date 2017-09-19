#pragma once

#include <string>
using namespace std;

class Student {
public:
	Student(string name);
	~Student();
	string getName();

private:
	string name;
};

