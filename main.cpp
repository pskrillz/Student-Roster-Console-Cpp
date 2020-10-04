#include <iostream>

#include<string>
#include<iomanip>
#include "student.h"

using namespace std;





int main()
{

    Student* student1 = new Student();
    cout << student1->getDaysLeft() << endl;
    student1->setDaysLeft(3.0, 2.0, 1.0);
    cout << student1->getDaysLeft() << endl;
    cout << "Hello World!" << endl;
    return 0;
    
};



















// questions: 
// what exactly is the header and the cpp files
// whats with the pointers. why cant i use the dot notation on line 21
// is iomanip doing anything here>
// enum issues-- class/not class finickyness