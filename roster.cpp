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
	this->lastIndex = -1;
	this->classRosterArray = new Student * [rosterLimit];
};



void Roster::getRoster() {

}












void Roster::studentParser(string row)
{

    if (lastIndex < rosterLimit) {
        lastIndex++;
        double darray[Student::daysSizeArr];
        string degreeProgramString;

       
        this->classRosterArray[lastIndex] = new Student; // constructor or not??
        //read student ID
        int rhs = studentData[lastIndex].find(",");
        // this here?
        this->classRosterArray[lastIndex]->setStudentId(studentData[lastIndex].substr(0, rhs));

        //set firstname
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
        std::string::size_type size;
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);


        // made progress here on some stuff but still not working
        classRosterArray[lastIndex]->setAge(std::stoi(studentData[lastIndex].substr(lhs, rhs - lhs), &size));

        //read days in course
        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        darray[0] = stod(studentData[lastIndex].substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        darray[1] = stod(studentData[lastIndex].substr(lhs, rhs - lhs));

        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        darray[2] = stod(studentData[lastIndex].substr(lhs, rhs - lhs));

        //set the days
         classRosterArray[lastIndex]->setDays(darray[0], darray[1], darray[2]);

        lhs = rhs + 1;
        rhs = studentData[lastIndex].find(",", lhs);
        degreeProgramString = studentData[lastIndex].substr(lhs, rhs - lhs);
        if (degreeProgramString == "SECURITY") {
            classRosterArray[lastIndex]->setDegreeProgram(SECURITY);
        }
        else if (degreeProgramString == "NETWORK") {
            classRosterArray[lastIndex]->setDegreeProgram(NETWORK);
        }
        else if (degreeProgramString == "SOFTWARE") {
            classRosterArray[lastIndex]->setDegreeProgram(SOFTWARE);
        }
        else
        {
            classRosterArray[lastIndex]->setDegreeProgram(UNDECIDED);
        }
           
            
      /*  else if (rhs == SOFTWARE)
            classRosterArray[lastIndex]->setDegreeProgram(SOFTWARE);
        else if (rhs == NETWORK)
            classRosterArray[lastIndex]->setDegreeProgram(NETWORK);
        else classRosterArray[lastIndex]->setDegreeProgram(UNDECIDED);*/


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

void Roster::printAll() {  
    for (int i = 0; i < this->rosterLimit; i++) {
        cout << classRosterArray[i]->getStudentId() << "    "
            << "First Name: " << classRosterArray[i]->getFirstName() << "    "
            << "Last Name: " << classRosterArray[i]->getLastName() << "    "
            << "Age: " << classRosterArray[i]->getAge() << "    "



            << "daysInCourse: [" << *classRosterArray[i]->getDays() << ","
                                    << *(classRosterArray[i]->getDays() + 1) << ","
                                    << *(classRosterArray[i]->getDays() + 2) << "]    "



            << "Degree Program: " << degreeProgramArray[classRosterArray[i]->getDegreeProgram()] << endl;

    };
};




	// E.3.a instansiates a new student object and adds to roster. 

void Roster::addToRoster(string sid, string first, string last, string em, int age,
    double d1, double d2, double d3, DegreeProgram d) {
    this->rosterLimit++;
    
    classRosterArray[this->rosterLimit - 1] = new Student(sid, first, last, em, age, d1, d2, d3, d );
    cout << "New Student Added Successfully" << endl;
};
        

	////	Student * classRosterArray[currRosterSize + 1] = new Student() {sid, first, last, em, age, d1, d2, d3, d};
	////	currRosterSize++
	//};



	//* [from text] Requirement E.3.b
	// public void remove(string studentID)  
	//that removes students from the roster by student ID. 
	//If the student ID does not exist, the function prints an error message indicating that the student was not found.





	// Requirement E.3.c

	// this looks good ?
	// void Roster::printAll() {

    //    cout << "hello world" << endl;
       /* for (int i = 0; i < rosterLimit; i++) {

        }*/
       

		/*int i = 0;
        * // instead of sizeof i need a length thing... 
		while (i < Roster::classRosterArray) {
			cout << Roster::classRosterArray[i];
			i++;
		};*/
	// remember syntax




// reference way
//void Roster::printAll() {
//    for (int i = 0; i < lastIndex; i++) {
//    cout << classRosterArray[i];
//    };
//};

//void Roster::printAll() {
//    for (int i = 0; i < lastIndex; i++) {
//    cout << classRosterArray[i];
//    };
//};
//
//void roster::printRoster() const
//{
//    for (unsigned int i = 0; i < classRosterArray.size(); i++)
//        classRosterArray.at(i)->Print();
//}

  /*  {
        for (
            int i = 0; i <= this->lastIndex; i++)(this->classRosterArray)[i]->print();
    }
*/

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

