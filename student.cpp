#include <iostream>
#include<iomanip>
#include "student.h"
#include "degree.h"
#include <string>
using namespace std;

// default constructor definition
Student::Student() {
	this->studentId = "";
	this->firstName = "";
	this->lastName = "";
	this->email = "";
	this->age = 0;
	// this->daysArray[3] = { '0.0' };
};



// full constructor definition 

Student::Student(string studentId, string firstName, string lastName,
	string email, int age, int days1, int days2, int days3)
{
	setStudentId(studentId);
	setLastName(lastName);
	setFirstName(firstName);
	setEmail(email);
	setAge(age);
	// setDegreeProgram(degreeProgram);
	setDays(days1, days2, days3);
	

};



















	// Student's ID

void Student::setStudentId(string studentId) {
	this->studentId = studentId;
};

string const Student::getStudentId() {
	return this->studentId;
};


	// Student's first name

void Student::setFirstName(string firstName) {
	this->firstName = firstName;
};

string const Student::getFirstName() {
	return this->firstName;
};


	// Student's last name

void Student::setLastName(string lastName) {
	this->lastName = lastName;
}

string const Student::getLastName() {
	return this->lastName;
};



	// Student's email

void Student::setEmail(string email) {
	this->email = email;
};

string const Student::getEmail() {
	return this->email;
};


	// Student's age

void Student::setAge(int age) {
	this->age= age;
};

int Student::getAge() {
	return this->age;
};







	// Days left in class -- array of 3


void Student::setDays(float days1, float days2, float days3)
{
	this->daysArray[0] = days1;
	this->daysArray[1] = days2;
	this->daysArray[2] = days3;
};


float * Student::getDays() {
	 return this->daysArray;
};



///*
// void Student::setDegreeProgram(DegreeProgram degreeProgram) {
//	theDegreeProgram = degreeProgram;
//};
//*/
//
//Student::~Student() {
//
//};
//
//void Student::print() {
//};

///* // ** tobefixed ** 
// enum Student::getDegreeProgram(string degreeProgram) {
//	return DegreeProgram;
//
// };
//*/