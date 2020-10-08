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
	// this->daysArray = (1.0, 2.0, 3.0);
	this->daysArray[0] = 11.0;
	this->daysArray[1] = 22.0;
	this->daysArray[2] = 33.0;
	this->dtype = DegreeProgram::UNDECIDED;
};



// full constructor definition 

Student::Student(string studentId, string firstName, string lastName,
	string email, int age, double days1, double days2, double days3,
	DegreeProgram dtype)
{
	setStudentId(studentId);
	setLastName(lastName);
	setFirstName(firstName);
	setEmail(email);
	setAge(age);
	setDegreeProgram(dtype);
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







	// Days in class -- array of 3


void Student::setDays(double days1, double days2, double days3)
{
	this->daysArray[0] = days1;
	this->daysArray[1] = days2;
	this->daysArray[2] = days3;
};


double * Student::getDays() {
	 return this->daysArray;
};


// enum getter/setter def

 void Student::setDegreeProgram(DegreeProgram d) {
	 // degreeProgramArray[d];
	this->dtype = d;
};

 DegreeProgram Student::getDegreeProgram() {
	// string dtype_string;
	 //dtype_string = degreeProgramArray[dtype];
	 return dtype;
 };




Student::~Student() {

};

void Student::print() {
};

///* // ** tobefixed ** 
// enum Student::getDegreeProgram(string degreeProgram) {
//	return DegreeProgram;
//
// };
//*/