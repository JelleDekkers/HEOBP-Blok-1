// Opdracht2.cpp : Defines the entry point for the console application.
//

#include "Module.h"
#include "Docent.h"
#include "Student.h"
#include <vector>
#include <iostream>
using namespace std;

Module *module1 = new Module("Programming", 10);
Module *module2 = new Module("Drawing", 5);
Module *module3 = new Module("GameDesign", 8);

Student *student1 = new Student("Jelle Dekkers");
Student *student2 = new Student("Peter de Vries");
Student *student3 = new Student("Klaas Kaas");
Student *student4 = new Student("Hugo Hogenboom");
Student *student5 = new Student("Geert de Fietser");
Student *student6 = new Student("Vinny de Vin");
Student *student7 = new Student("Lisa Lontje");
Student *student8 = new Student("Frank Frans");
Student *student9 = new Student("Melvin Groot");
Student *student10 = new Student("Bob Burger");

Docent *teacher1 = new Docent("Klara Fin");
Docent *teacher2 = new Docent("Paul de Jong");
Docent *teacher3 = new Docent("Tikkie Tok");

void AppointTeachersToModules();
void AppointStudentsToModules();
void PrintECPerStudent();

int main()
{
	AppointTeachersToModules();
	AppointStudentsToModules();

	module1->printInfo();
	module2->printInfo();
	module3->printInfo();

	PrintECPerStudent();

	module1->changeEC(15);

	PrintECPerStudent();

	module1->RemoveStudent(*student1); 
	module1->printInfo();
	return 0;
}

void AppointTeachersToModules() {
	module1->AppointTeacher(*teacher1);
	module2->AppointTeacher(*teacher2);
	module3->AppointTeacher(*teacher3);
}

void AppointStudentsToModules() {
	module1->AddStudent(*student1);
	module1->AddStudent(*student2);
	module1->AddStudent(*student3);
	module1->AddStudent(*student4);
	module1->AddStudent(*student5);

	module2->AddStudent(*student4);
	module2->AddStudent(*student5);
	module2->AddStudent(*student6);
	module2->AddStudent(*student7);
	module2->AddStudent(*student8);

	module3->AddStudent(*student6);
	module3->AddStudent(*student7);
	module3->AddStudent(*student8);
	module3->AddStudent(*student9);
	module3->AddStudent(*student10);
}

void PrintECPerStudent() {

}
