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
	void studentParser(string row);

	void addToRoster(string sid, string first, string last, string em, int age,
		float d1, float d2, float d3, DegreeProgram d);

	void removeStudent(string studentId);

	void printAll();

	void printAverageDays(string studentId);

	void printInvalidEmails();

	// Constructors
	Roster();
	Roster(int rLimit);
	~Roster();


};

#endif
