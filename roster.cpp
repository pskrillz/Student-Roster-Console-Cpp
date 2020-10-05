#pragma once
#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
#include "roster.h"
using namespace std;

int currRosterSize = 5;
string studentData[currRosterSize]=
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
	this->classRosterArray = nullptr;
}

Roster::Roster(int rosterLimit) {
	this->rosterLimit = rosterLimit;
	this->lastIndex = -1;
	this->classRosterArray = new Student * [rosterLimit];
};

// challenging- todo 
void studentParser() {
	for (int i = 0; i < currRosterSize; i++) {
		 
	};
};
