#pragma once
#ifndef ROSTER_H
#define ROSTER_H
#include <string>
#include "degree.h"

using std::string;



string studentData[];

class Roster {
public:

	int rosterLimit;
	int lastIndex;

	Student** classRosterArray;
	void studentParser();

	void addToRoster(string studentId, string firstName, string lastName, string email, int age,
		float days1, float days2, float days3, DegreeProgram d);

	void removeStudent(string studentId);

	void printAll();

	void printAverageDays(string studentId);

	void printInvalidEmails();

	// Constructors
	Roster();
	Roster(int rosterLimit);
	~Roster();


};

#endif
