#pragma once
#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
#include "roster.h"
using namespace std;

// const usage here?
int currRosterSize = 5;
string studentData[]=
{
"A1, John, Smith, John1989@gmail.com, 20, 30, 35, 40, SECURITY",
"A2, Suzan, Erickson, Erickson_1990@gmailcom, 19, 50, 30, 40, NETWORK",
"A3, Jack,Napoli, The_lawyer99yahoo.com, 19, 20, 40, 33, SOFTWARE",
"A4, Erin, Black, Erin.black@comcast.net, 22, 50, 58, 40, SECURITY",
"A5, Myfirstname, Mylastname, myemail@gmail.com, 28, 10, 15, 20, SOFTWARE"
};


Roster::Roster() {
	this->rosterLimit = 0;
	this->lastIndex = -1;
	this->classRosterArray = { nullptr };
}

Roster::Roster(int rosterLimit) {
	this->rosterLimit = rosterLimit;
	this->lastIndex = rosterLimit - 1;
	this->classRosterArray = new Student * [rosterLimit];

};








	// Requirement E.1 & E.2

	 //trying to get array of strings studentData[] 
	// and assign each item to new student object. 

	// addToRoster is supposed to go through thee studentData table and make each string a new student
	// object inside the roster. 


		 //having trouble with creating array of pointers to connect with
		//void Roster::studentParser() {
		//	for (int i = 0; i < currRosterSize; i++) {
		//		Student * Roster::classRosterArray[i] = studentData[i];
		//	};
		//};
	//};






	// E.3.a instansiates a new student object and adds to roster. 

	//void Roster::addToRoster(string sid, string first, string last, string em, int age,
	//	float d1, float d2, float d3, DegreeProgram d) {
	//	Student * classRosterArray[currRosterSize + 1] = new Student() {sid, first, last, em, age, d1, d2, d3, d};
	//	currRosterSize++
	//};



	//* [from text] Requirement E.3.b
	// public void remove(string studentID)  
	//that removes students from the roster by student ID. 
	//If the student ID does not exist, the function prints an error message indicating that the student was not found.





	// Requirement E.3.c

	// this looks good ?
	void Roster::printAll() {
		int i = 0;
		while (i < sizeof Roster::classRosterArray) {
			cout << Roster::classRosterArray[i];
			i++;
		};
	};

	// Requirement E.3.d
	//void printAverageDaysInCourse(string studentID)  that correctly 
	//prints a student’s average number of days in the three courses.
	//The student is identified by the studentID parameter.

	// void printAverageDays(string sid) {
	//	 float sum = this->daysArray[0] + daysArray[1] + daysArray[2];
	//};


	//Requirement E.3.e
	//	e.  public void printInvalidEmails() that verifies student email addresses and displays
	//	all invalid email addresses to the user.


	//Requirement E.3.f

	//	f.  public void printByDegreeProgram(DegreeProgram degreeProgram)
	//	that prints out student information for a degree program specified by an enumerated type.









/*___________________________________*/
//

