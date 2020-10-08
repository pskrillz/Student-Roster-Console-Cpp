#include <iostream>
#include <string>
#include <iomanip>
#include "student.h"
#include "roster.h"

using namespace std;



int main()
{
    //Student* student1 = new Student(); //instantiation
    //cout << student1->getFirstName() << endl;
    //student1->setFirstName("Bob");
    //cout << student1->getFirstName() << endl;
    //student1->setLastName("Frank");
    //cout << student1->getLastName() << endl;
    //student1->setStudentId("A1");
    //cout << student1->getStudentId() << endl;
    //student1->setEmail("bob@gmail.com");
    //cout << student1->getEmail() << endl;
    //student1->setAge(5);
    //cout << student1->getAge() << endl;
    //student1->setDays(1.9, 2.0, 3.0);
    ////student1->setDays(1.9, 2.0, 3.0);
    //cout << *((student1->getDays()) + 0) << endl;
    //cout << *((student1->getDays()) + 1) << endl;
    //cout << *((student1->getDays()) + 2) << endl;
    //cout << student1->getDegreeProgram() << endl;
    //student1->setDegreeProgram(NETWORK);
    //cout << student1->getDegreeProgram() << endl;

 
    Roster * roster2 = new Roster(5);
    roster2->studentParser(studentData[0]);

    cout << roster2->lastIndex << endl;

    // able to get a memory loation, question is, how to access?
    //cout << roster2->classRosterArray[0] << endl;
    

     
    return 0;
    
};


// FINAL REQUIREMENTS
//F.Demonstrate the program’s required functionality by adding a main() 
//function in main.cpp, which will contain the required function calls to achieve the following results :
//
//1.  Print out to the screen, via your application, the course title, 
//the programming language used, your WGU student ID, and your name.
//2.  Create an instance of the Roster class called classRoster.
//3.  Add each student to classRoster.
//4.  Convert the following pseudo code to complete 
//the rest of the  main() function :
//
//classRoster.printAll();
//classRoster.printInvalidEmails();
////loop through classRosterArray and for each element:
//
//classRoster.printAverageDaysInCourse(/*current_object's student id*/)
//classRoster.printByDegreeProgram(SOFTWARE);
//classRoster.remove("A3");
//classRoster.printAll();
//classRoster.remove("A3");
//
////expected: the above line should print a message saying such a student with this ID was not found.
//
//5.  Implement the destructor to release the memory that was allocated dynamically in Roster.