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
		string email, int age, int daysLeft1, int daysLeft2,
		int daysLeft3, DegreeProgram dtype);


	const static int daysArray = 3;



// getters
	string const getStudentId();
	string const getFirstName();
	string const getLastName();
	string const getEmail();
	DegreeProgram getDegreeProgram();
	int getAge();
	float * getDays();


// setters
	void setStudentId(string studentId);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmail(string email);
	void setAge(int age);
	void setDays(float days1, float days2, float days3);
	void setDegreeProgram(DegreeProgram dtype);


// deconstructor
	~Student();

	void print();




};
