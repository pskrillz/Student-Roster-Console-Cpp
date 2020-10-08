#pragma once
#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
#include "roster.h"
using namespace std;

// const usage here?


Roster::Roster() {
	this->rosterLimit = 0;
	this->lastIndex = -1;
	this->classRosterArray = { nullptr };
};

Roster::Roster(int rLimit) {
	this->rosterLimit = rLimit;
	this->lastIndex = rosterLimit - 1;
	this->classRosterArray = new Student * [rosterLimit];
};

void Roster::studentParser(string row)
{
    if (lastIndex < rosterLimit) {
        lastIndex++;
        //double darray[Student::daysSizeArr];


        /* if (row[0] == 'A') {
            if (row[1] == '1') {
                this->classRosterArray[lastIndex] = new Student();
                classRosterArray[lastIndex]->setDegreeProgram(SECURITY);
            }
            else if (row[1] == '2') {
                this->classRosterArray[lastIndex] = new Student();
                classRosterArray[lastIndex]->setDegreeProgram(NETWORK);
            }
            else if (row[1] == '3') {
                this->classRosterArray[lastIndex] = new Student();
                classRosterArray[lastIndex]->setDegreeProgram(SOFTWARE);
            }
        else if (row[0] == 'A') {
            this->classRosterArray[lastIndex] = new Student();
            classRosterArray[lastIndex]->setDegreeProgram(SECURITY);

        }
        else if (row[0] == 'A') {
            this->classRosterArray[lastIndex] = new Student();
            classRosterArray[lastIndex]->setDegreeProgram(SOFTWARE);
        }
        else {
            cerr << "invaild degree type! exiting now! \n";
            exit(-1);
        }*/

        this->classRosterArray[lastIndex] = new Student();
        //read student ID
        int rhs = studentData[lastIndex].find(",");
        classRosterArray[lastIndex]->setStudentId(studentData[lastIndex].substr(0, rhs));

        //read firstname
        int lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        classRosterArray[lastIndex]->setFirstName(studentData[lastIndex].substr(lhs, rhs - lhs));

        //read lastname
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        classRosterArray[lastIndex]->setLastName(studentData[lastIndex].substr(lhs, rhs - lhs));

        //read Email
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        classRosterArray[lastIndex]->setEmail(studentData[lastIndex].substr(lhs, rhs - lhs));

        ////read Age
        //lhs = rhs + 1;
        //rhs = studentData[lastIndex].find(",", lhs);
        //classRosterArray[lastIndex]->setAge(stoi(studentData[lastIndex].substr(lhs, rhs - lhs)));

        //read days in course
      /*  lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        darray[0] = stod(studentData[lastIndex].substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        darray[1] = stod(studentData[lastIndex].substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        darray[2] = stod(studentData[lastIndex].substr(lhs, rhs - lhs));*/

        //set the days
        // classRosterArray[lastIndex]->setDays(darray[0], darray[1], darray[2]);

        //lhs = rhs + 1;
        //rhs = studentData[lastIndex].find(",", lhs);
        ////classRosterArray[lastIndex]->setDegreeProgram(SECURITY);


    //}
    //else {
    //    cerr << "Error! List has exceeded maximum capacity! \n exiting now!";
    //    exit(-1);

    //}


    };

};













//
//E.Create a Roster class (roster.cpp) by doing the following :
//
//1.  Create an array of pointers, classRosterArray,
//to hold the data provided in the “studentData Table.”
//2.  Create a student object for each student
//in the data tableand populate classRosterArray.
//a.Parse each set of data identified in the 
//“studentData Table.”
//b.Add each student object to classRosterArray.
//
//3.  Define the following functions :
//a.  public void add(string studentID, string firstName, string lastName,
//	string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) 
//that sets the instance variables from part D1 and updates the roster.
//b.  public void remove(string studentID)  that removes students from 
//the roster by student ID.If the student ID does not exist, the function prints an error message indicating that the student was not found.
//
//c. public void printAll() that prints a complete tab - separated list of 
//student data in the provided format : A1[tab] First Name : John[tab] Last Name :
//Smith[tab] Age : 20[tab]daysInCourse : {35, 40, 55} Degree Program : 
//Security.The printAll() function should loop through all the students
//in classRosterArrayand call the print() function for each student.
//
//d.  public void printAverageDaysInCourse(string studentID)  that correctly 
//prints a student’s average number of days in the three courses.The student is identified by the studentID parameter.
//
//e.  public void printInvalidEmails() that verifies student email 
//addressesand displays all invalid email addresses to the user.


	// Requirement E.1 & E.2

	 //trying to get array of strings studentData[] 
	// and assign each item to new student object. 

	// addToRoster is supposed to go through thee studentData table and make each string a new student
	// object inside the roster. 


		 //having trouble with creating array of pointers to connect with
		//void Roster::studentParser() {
		//	for (int i = 0; i < currRosterSize; i++) {
		//		Student * Roster::classRosterArray[i] = studentData[i];
		//	};
		//};
	/*};*/






	// E.3.a instansiates a new student object and adds to roster. 

	//void Roster::addToRoster(string sid, string first, string last, string em, int age,
	//	float d1, float d2, float d3, DegreeProgram d) {
	//	Student * classRosterArray[currRosterSize + 1] = new Student() {sid, first, last, em, age, d1, d2, d3, d};
	//	currRosterSize++
	//};



	//* [from text] Requirement E.3.b
	// public void remove(string studentID)  
	//that removes students from the roster by student ID. 
	//If the student ID does not exist, the function prints an error message indicating that the student was not found.





	// Requirement E.3.c

	// this looks good ?
	//void Roster::printAll() {
	//	int i = 0;
	//	while (i < sizeof Roster::classRosterArray) {
	//		cout << Roster::classRosterArray[i];
	//		i++;
	//	};
	//};

	// Requirement E.3.d
	//void printAverageDaysInCourse(string studentID)  that correctly 
	//prints a student’s average number of days in the three courses.
	//The student is identified by the studentID parameter.

	// void printAverageDays(string sid) {
	//	 float sum = this->daysArray[0] + daysArray[1] + daysArray[2];
	//};


	//Requirement E.3.e
	//	e.  public void printInvalidEmails() that verifies student email addresses and displays
	//	all invalid email addresses to the user.


	//Requirement E.3.f

	//	f.  public void printByDegreeProgram(DegreeProgram degreeProgram)
	//	that prints out student information for a degree program specified by an enumerated type.









/*___________________________________*/
//

