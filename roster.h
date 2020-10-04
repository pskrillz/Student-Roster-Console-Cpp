#pragma once
#ifndef ROSTER_H
#define ROSTER_H
#include <string>
#include "degree.h"

using std::string;

//
//const int totalStudents = 6;
//string studentData[totalStudents] =
//{
//"A1, John, Smith, John1989@gmail.com, 20, 30, 35, 40, SECURITY",
//"A2, Suzan, Erickson, Erickson_1990@gmailcom, 19, 50, 30, 40, NETWORK",
//"A3, Jack,Napoli, The_lawyer99yahoo.com, 19, 20, 40, 33, SOFTWARE",
//"A4, Erin, Black, Erin.black@comcast.net, 22, 50, 58, 40, SECURITY",
//"A5, Myfirstname, Mylastname, myemail@gmail.com, 28, 10, 15, 20, SOFTWARE"
//};

class Roster {

	//testing my function 

	void setRoster();

	void addToRoster(string studentId, string firstName, string lastName, string email,
		float days1, float days2, float days3);

	void removeStudent(string studentId);

	void printAll();

	void printAverageDays();

	void printInvalidEmails();



};

#endif
