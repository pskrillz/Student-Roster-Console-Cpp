#include <iostream>
#include <string>
#include <iomanip>
#include "student.h"
#include "roster.h"

using namespace std;



int main()
{
     Student* student1 = new Student(); //instantiation
     cout << student1->getFirstName() << endl;
     student1->setFirstName("Bob");
     cout << student1->getFirstName() << endl;
     student1->setLastName("Frank");
     cout << student1->getLastName() << endl;
     student1->setStudentId("A1");
     cout << student1->getStudentId() << endl;
     student1->setEmail("bob@gmail.com");
     cout << student1->getEmail() << endl;
     student1->setAge(5);
     cout << student1->getAge() << endl;
     //student1->setDays(1.9, 2.0, 3.0);
     cout << *((student1->getDays())+0) << endl;
     cout << *((student1->getDays())+1) << endl;
     cout << *((student1->getDays())+2) << endl;
     cout << student1->getDegreeProgram() << endl;
     student1->setDegreeProgram(NETWORK);
     cout << student1->getDegreeProgram() << endl;


     /*
     Bob
Frank
A1
bob@gmail.com
5
1.9
2
3
2
*/




     
    return 0;
    
};



/*
Bob
Frank
A1
bob@gmail.com5

*/


// lesson
// student1->setDays(3.0, '2.0', '1.0');
// memory location 
// how to modify to make value
// cout << *(student1->getDays()) << endl;



//Student is name of a Class (called template    or design)
//Student mystudent;
//mystudent.getFirstName();
//Bob
//00C25A44
//Hello World!
// 3.35416e+06










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