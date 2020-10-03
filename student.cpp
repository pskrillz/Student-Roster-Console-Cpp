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
	this->daysLeft = 0;
};





//
//Student::Student(string studentId, string firstName, string lastName,
//	string email, int age, int daysLeftToComplete, DegreeProgram degreeProgram){
//	setLastName(lastName);
//	setFirstName(firstName);
//	setEmail(email);
//	setAge(age);
//	// setDegreeProgram(degreeProgram);
//	setDaysLeftToComplete(daysLeftToComplete);
//	setStudentId(studentId);
//
//};
//
//
//string const Student::getStudentId() {
//	return theStudentId;
//};
//
//string const Student::getFirstName() {
//	return theFirstName;
//};
//
//string const Student::getLastName() {
//	return theLastName;
//};
//
//string const Student::getEmail() {
//	return theEmail;
//};
//

//
//int Student::getDaysLeftToComplete() {
//	return theDaysLeftToComplete;
//};
//
///* // ** tobefixed ** 
//void Student::getDegreeProgram() {
//	return theDegreeProgram;
//
//};
//*/


	// studentID
void Student::setStudentId(string studentId) {
	this->studentId = studentId;
};

string Student::getStudentId() {
	return this->studentId;
};
// // // // // 

void Student::setFirstName(string firstName) {
	this->firstName = firstName;
};

void Student::setLastName(string lastName) {
	this->lastName = lastName;
}

void Student::setEmail(string email) {
	this->email = email;
};


	// student's age
void Student::setAge(int age) {
	this->age= age;
};

int Student::getAge() {
	return this->age;
};
// // // // // 



//
//// figure out the pointers
//void Student::setDaysLeftToComplete(int daysLeftToComplete) {
//	theDaysLeftToComplete = daysLeftToComplete;
//};
//
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

