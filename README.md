# WGU-C867
Class project written in C++ for 
Scripting and Programming Applications 
at Western Governor's University Bachelor
in Science Software Development program. 



Scenario: 
You are hired as a contractor to help a university migrate an existing student system
to a new platform using C++ language. Since the application already exists, 
its requirements exist as well, and they are outlined in the next section. 

You are responsible for implementing the part of the system based on these requirements. 
A list of data is provided as part of these requirements. 
This part of the system is responsible for reading and manipulating the provided data.



You must write a program containing two classes (i.e., Student and Roster). 
The program will maintain a current roster of students within a given course. 
Student data for the program include student ID, first name, last name, email address, 
age, an array of the number of days to complete each course, and degree program. 
This information can be found in the “studentData Table” below. 
The program will read a list of five students and use function calls to manipulate data 
(see part F4 in the requirements below). While parsing the list of data,
the program should create student objects. 

The entire student list will be stored in one array of students called classRosterArray. 
Specific data-related output will be directed to the console.

Final Program Requirements:
Demonstrate the program’s required functionality by adding a main() function in main.cpp, which will contain the required function calls to achieve the following results:
1.  Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.
2.  Create an instance of the Roster class called classRoster.
3.  Add each student to classRoster.
  Convert the following pseudo code to complete the rest of the  main() function:
5.  classRoster.printAll();
6.  classRoster.printInvalidEmails();
//loop through classRosterArray and for each element:
7.  classRoster.printAverageDaysInCourse(/*current_object's student id*/);
8.  classRoster.printByDegreeProgram(SOFTWARE);
9.  classRoster.remove("A3");
10.  classRoster.printAll();
11.classRoster.remove("A3");
//expected: the above line should print a message saying such a student with this ID was not found.
12. Implement the destructor to release the memory that was allocated dynamically in Roster.
