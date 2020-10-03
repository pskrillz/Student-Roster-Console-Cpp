#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "degree.h"
using std::string;
using namespace std;

class Student {
	// Default constructor
public:
	Student();

	// check the type of "public"etc.
private:
	string theStudentId;
	string theFirstName;
	string theLastName;
	string theEmail;
	int theAge;
	int theDaysLeftToComplete;
	enum DegreeProgram theDegreeProgram;


public:
	// constructors
	Student(string studentId, string firstName, string lastName,
		string email, int age, int daysLeftToComplete, enum DegreeProgram degreeProgram);


	// getters
	string const getStudentId();
	string const getFirstName();
	string const getLastName();
	string const getEmail();
	int const getAge();
	int getDaysLeftToComplete();
	enum DegreeProgram getDegree();

	// setters
	void setStudentId(string studentId);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmail(string email);
	void setAge(int age);
	void setDaysLeftToComplete(int daysLeftToComplete);
	void setDegreeProgram(DegreeProgram degreeProgram);




	virtual void print(string studentId);
	virtual DegreeProgram getDegreeProgram();

	// decons
	~Student();

};

#endif