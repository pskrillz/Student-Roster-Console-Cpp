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
	int daysLeft;
	// enum DegreeProgram degreeProgram;


public:
		// days left array instantiate
	static const int daysLeftArray[3];

		// default constructor
	Student();

		// full constructor
	Student(string studentId, string firstName, string lastName, string email, int age, int daysLeft, int degreeProgram);




		// decons
	~Student();



	// Default constructor
	// Student();


	// getters
	string getStudentId();
	string const getFirstName();
	string const getLastName();
	string const getEmail();
	int getAge();
	int getDaysLeftToComplete();
	// DegreeProgram getDegreeProgram();

	// setters
	void setStudentId(string studentId);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmail(string email);
	void setAge(int age);
	void setDaysLeftToComplete(int daysLeftToComplete);
	// void setDegreeProgram(DegreeProgram degreeProgram);




	void print();

	/* // ** Having a problem with the typings syntax **
	virtual void DegreeProgram::getDegreeProgram();
	*/



};
