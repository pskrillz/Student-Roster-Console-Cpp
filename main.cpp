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
    // pressContinue();
    cout << "Migration commencing..." << endl;
    loadingGraphic();
    loadingGraphic();
    loadingGraphic();
 

    cout << "Parsing Student Data..." << endl;
    
    Roster* classRoster = new Roster(currRosterSize);

    

     for (int i = 0; i < classRoster->rosterLimit; i++) {
         classRoster->studentParser(studentData[i]);
         cout << "Student " << i + 1<< " parsed successfully" << endl;
     };
     cout << "Parsing Complete, Roster Created" << endl;
     spacer();
    
     //not in requirements
   //  classRoster->addToRoster("B5", "Tommy", "Firstborn", "papa@gmail.com", 20, 1.0, 2.0, 3.0, SOFTWARE);

     classRoster->printAll();
     
     // Requirement E.3.e
     classRoster->printInvalidEmails();

     for (int i = 0; i < classRoster->rosterLimit; i++) {
         classRoster->printAverageDays(classRoster->classRosterArray[i]->getStudentId());
     };
   
  
     classRoster->printByDegree(SOFTWARE);

     classRoster->removeStudent("A1");

     classRoster->printAll();
     loadingGraphic();

     classRoster->removeStudent("A2");
     classRoster->printAll();
     spacer();
     loadingGraphic();

     classRoster->removeStudent("A2");
     spacer();
     loadingGraphic();

     
 

    return 0;
    
};


// FINAL REQUIREMENTS

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


