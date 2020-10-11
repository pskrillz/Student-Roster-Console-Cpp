#include <iostream>
#include <string>
#include <iomanip>
#include "student.h"
#include "roster.h"

using namespace std;

void spacer() {
    cout << "________________________________" << endl;
};

void loadingGraphic() {
    cout << "* * * *" << endl << "* * * *" << endl << "* * * *" << endl;
}

string x;
void pressContinue() {
    cout << "type 'start' to begin" << endl;
    while(x != "start" ){
        cin >> x;
        cout << "Invalid entry!" << endl;
    };

    return;
};



int main()
{
    std::cout << "Scripting and Programming - Applications C867\nC++\nStudent ID: 001424316\nPayam Farahmand\n-----------------------\n";
    cout << "Welcome to School System Migrator! " << endl;
    spacer();
    pressContinue();
    cout << "Migration commencing..." << endl;
    loadingGraphic();
    loadingGraphic();
    loadingGraphic();

    //Student* student1 = new Student; //instantiation
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
    //cout << *student1->getDays() << endl;
    //cout << *((student1->getDays()) + 1) << endl;
    //cout << *((student1->getDays()) + 2) << endl;
    //cout << student1->getDegreeProgram() << endl;

    //// enum NETWORK = 3
    //student1->setDegreeProgram(NETWORK);

    ////great job! got the string to come out. 
    //// so how this works is that it "gets" the enum type as a number and then uses that
    //// number as the indexer for the "parallel" array of string type. 
    //cout << degreeProgramArray[student1->getDegreeProgram()] << endl;

 

    cout << "Parsing Student Data..." << endl;
    
     Roster* classRoster = new Roster(currRosterSize);

     for (int i = 0; i < classRoster->rosterLimit; i++) {
         classRoster->studentParser(studentData[i]);
         cout << "Student " << i + 1<< " parsed successfully" << endl;
     };
     cout << "Parsing Complete, Roster Created" << endl;
     spacer();


    
    // cout << studentData[0] << endl;
    
     classRoster ->printAll();


    
    // working!!
   /*  cout << roster1->classRosterArray[0]->getFirstName() << "  "
         << roster1->classRosterArray[0]->getLastName() << "    " <<
         roster1->classRosterArray[0]->getStudentId() << endl;*/

    // roster1->printAll();


    //cout << roster2->lastIndex << endl;

    // able to get a memory loation, question is, how to access?
    //cout << roster2->classRosterArray[0] << endl;
    

     
    return 0;
    
};


// FINAL REQUIREMENTS
//F.Demonstrate the program�s required functionality by adding a main() 
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


