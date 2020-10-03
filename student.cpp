#include <iostream>
#include "student.h"
#include "degree.h"
#include <string>
using namespace std;



Student::Student(string studentId, string firstName, string lastName,
	string email, int age, int daysLeftToComplete, enum DegreeProgram degreeProgram){
	setLastName(lastName);
	setFirstName(firstName);
	setEmail(email);
	setAge(age);
	setDegreeProgram(degreeProgram);
	setDaysLeftToComplete(daysLeftToComplete);
	setStudentId(studentId);

};



string const Student::getStudentId() {
	return theStudentId;
};

string const Student::getFirstName() {
	return theFirstName;
};

string const Student::getLastName() {
	return theLastName;
};

string const Student::getEmail() {
	return theEmail;
};

int const Student::getAge() {
	return theAge;
};

int Student::getDaysLeftToComplete() {
	return theDaysLeftToComplete;
};

DegreeProgram Student::getDegreeProgram() {
	return theDegreeProgram;

};

void Student::setStudentId(string studentId) {
	theStudentId = studentId;
};

void Student::setFirstName(string firstName) {
	theFirstName = firstName;
};

void Student::setLastName(string lastName) {
	theLastName = lastName;
}

void Student::setEmail(string email) {
	theEmail = email;
};

void Student::setAge(int age) {
	theAge = age;
};


// figure out the pointers
void Student::setDaysLeftToComplete(int daysLeftToComplete) {
	theDaysLeftToComplete = daysLeftToComplete;
};


void Student::setDegreeProgram(DegreeProgram degreeProgram) {
	theDegreeProgram = degreeProgram;
};

Student::~Student() {

};

void Student::print(string studentId) {
};

