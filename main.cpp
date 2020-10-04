#include <iostream>
#include <string>
#include <iomanip>
#include "student.h"
#include "roster.h"

using namespace std;



int main()
{
     Student* student1 = new Student();
     cout << student1->getFirstName() << endl;
     student1->setFirstName("Bob");
     cout << student1->getFirstName() << endl;

    // bug #1
    // student1->setDays('3.0', '2.0', '1.0');
 
    
    cout << "Hello World!" << endl;
    return 0;
    
};





















/*      Currently Working on:
* 
* issue #1: using array type in constructor
* issue #2: using enumerated type 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
        From:

B.  Create a C++ project in your integrated development environment
(IDE) with the following files:

•  degree.h
•  student.h and student.cpp
•  roster.h and roster.cpp
•  main.cpp

Note: There must be a total of six source code files.

C.  Define an enumerated data type DegreeProgram for the degree programs 
containing the data type values SECURITY, NETWORK, and SOFTWARE.
Note: This information should be included in the degree.h file.


D.  For the Student class, do the following:
  1.  Create the class Student  in the files student.h and student.cpp, which includes each of the following variables:

    •  student ID
    •  first name
    •   last name
    •  email address
    •  age
    •  array of number of days to complete each course
    •  degree program

  2.  Create each of the following functions in the Student class:

a.  an accessor (i.e., getter) for each instance variable from part D1
b.  a mutator (i.e., setter) for each instance variable from part D1
c.  All external access and changes to any instance variables of the
    Student class must be done using accessor and mutator functions.
d.  constructor using all of the input parameters provided in the table
e.  print() to print specific student data

*/