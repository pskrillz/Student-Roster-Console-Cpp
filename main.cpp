#include <iostream>
//found bug, main does not need the file include statements. 
//#include "student.h"
//#include "student.cpp"
//#include "roster.h"
//#include "roster.cpp"
#include <iostream>
#include<string>
#include<iomanip>
#include "student.h"

using namespace std;





int main()
{
    Student* student1 = new Student();
    student1->setAge(5);
    cout << student1->getAge() << endl;
    cout << "Hello World!" << endl;
    return 0;
};
