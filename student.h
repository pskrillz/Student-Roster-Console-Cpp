#pragma once
#include <string>
#include <iostream>
#include "degree.h"


// issues: getting array to work in constructor-- commented out for now ln 19, line 45, 55 & student.cpp ln 15, ln 32, and 100+


using std::string;

class Student {
protected:
	string studentId;
	string firstName;
	string lastName;
	string email;
	int age;
	// pointer? 
	float daysArray[3];
	// user defined data type does not need enum specified.
	DegreeProgram dtype;


public:
		// days left array instantiate
	// static const double daysArray[];

		// default constructor
	Student();

		// full constructor
	Student(string studentId, string firstName, string lastName,
		string email, int age, int daysLeft1, int daysLeft2,
		int daysLeft3, DegreeProgram dtype);


		// deconstructor
	~Student();



		// getters
	string const getStudentId();
	string const getFirstName();
	string const getLastName();
	string const getEmail();
	DegreeProgram getDegreeProgram();
	int getAge();
	//pointer?
	float * getDays();

	// issue #2
	// enum DegreeProgram getDegreeProgram(string degreeProgram);

	// setters
	void setStudentId(string studentId);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmail(string email);
	void setAge(int age);
	void setDays(float days1, float days2, float days3);
	void setDegreeProgram(DegreeProgram dtype);




	void print();

	/* // ** Having a problem with the typings syntax **
	virtual void DegreeProgram::getDegreeProgram();
	*/



};
