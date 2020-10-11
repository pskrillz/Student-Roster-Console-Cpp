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
     cout << "Printing all student info" << endl;
     spacer();
     classRoster->printAll(); spacer();
     
  
     cout << "Finding invalid emails.." << endl;
     spacer();
     classRoster->printInvalidEmails();
     spacer();

     cout << "Printing average days in class for each student..." << endl; spacer();
     for (int i = 0; i < classRoster->rosterLimit; i++) {
         classRoster->printAverageDays(classRoster->classRosterArray[i]->getStudentId());
     };
   
     spacer();
     cout << "Printing out by Degree Program, Software..." << endl; spacer();
     classRoster->printByDegree(SOFTWARE);
     spacer();

     classRoster->removeStudent("A1");
     classRoster->removeStudent("A2");
     spacer();
     classRoster->removeStudent("A2");

     spacer();
     cout << "Printing Remaining Students..." << endl;
     spacer();
     classRoster->printAll();
     
     
     spacer();
     
     cout << "Finished Migration" << endl;
     cout << "Thanks for Using Student Migrator 2020" << endl << "Goodbye" << endl;
 

    return 0;
    
};


// FINAL REQUIREMENTS


//5.  Implement the destructor to release the memory that was allocated dynamically in Roster.


