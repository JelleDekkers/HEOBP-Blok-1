#pragma once
#include <string>
using namespace std;

class Docent {
public:
	Docent(string name);
	~Docent();
	string getName();

private:
	string name;
};

