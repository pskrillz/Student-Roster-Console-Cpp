#pragma once
#include <string>
#include<iostream>
#include "degree.h"

using std::string;

class Student {
protected:
	string studentId;
	string firstName;
	string lastName;
	string email;
	int age;
	float daysLeftArray[3];
	// enum DegreeProgram degreeProgram;


public:
		// days left array instantiate
	// static const double daysLeftArray[];

		// default constructor
	Student();

		// full constructor
	Student(string studentId, string firstName, string lastName, string email, int age, int daysLeft1, int daysLeft2, int daysLeft3);


		// deconstructor
	~Student();



		// getters
	string const getStudentId();
	string const getFirstName();
	string const getLastName();
	string const getEmail();
	int getAge();
	float getDaysLeft();
	// DegreeProgram getDegreeProgram();

	// setters
	void setStudentId(string studentId);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmail(string email);
	void setAge(int age);
	void setDaysLeft(float daysLeft1, float daysLeft2, float daysLeft3);
	// void setDegreeProgram(DegreeProgram degreeProgram);




	void print();

	/* // ** Having a problem with the typings syntax **
	virtual void DegreeProgram::getDegreeProgram();
	*/



};
