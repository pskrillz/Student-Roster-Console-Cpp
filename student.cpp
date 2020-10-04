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
	this->daysLeftArray[3];
};




// full constructor definition 

Student::Student(string studentId, string firstName, string lastName,
	string email, int age, int daysLeft1, int daysLeft2, int daysLeft3)
{
	setStudentId(studentId);
	setLastName(lastName);
	setFirstName(firstName);
	setEmail(email);
	setAge(age);
	// setDegreeProgram(degreeProgram);
	setDaysLeft(daysLeft1, daysLeft2, daysLeft3);
	

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

void Student::setDaysLeft(float daysLeft1, float daysLeft2, float daysLeft3)
{
	this->daysLeftArray[0] = daysLeft1;
	this->daysLeftArray[1] = daysLeft2;
	this->daysLeftArray[2] = daysLeft3;
};


float Student::getDaysLeft() {
	return this->daysLeftArray[3];
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
//void Student::getDegreeProgram() {
//	return theDegreeProgram;
//
//};
//*/