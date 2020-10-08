#pragma once
#include <string>
#include <iostream>
#include "degree.h"

using std::string;

class Student {
protected:
	string studentId;
	string firstName;
	string lastName;
	string email;
	int age;
	DegreeProgram dtype;


public:
	
// default constructor
	Student();

// full constructor
	Student(string studentId, string firstName, string lastName,
		string email, int age, double days1, double days2,
		double days3, DegreeProgram dtype);


	const static int dArray = 3;



// getters
	string const getStudentId();
	string const getFirstName();
	string const getLastName();
	string const getEmail();
	DegreeProgram getDegreeProgram();
	int getAge();
	double * getDays();


// setters
	void setStudentId(string studentId);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmail(string email);
	void setAge(int age);
	void setDays(double days1, double days2, double days3);
	void setDegreeProgram(DegreeProgram dtype);


// deconstructor
	~Student();

	void print();




};
