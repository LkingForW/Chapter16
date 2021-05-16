//
//  main.cpp
//  Ex16.11
//
//  Created by Alain Perez on 5/16/21.
//

/* 16.11 (Modifying Class GradeBook) Modify class GradeBook as Follows:
 a) Include a second string data member that represents the course instructor's name.
 b) Provide a set function to change the instructor's name and a get function to retrive it
 c) Modify the constructor to specify course name and instructor name parameters
 d) Modify function displayMessage to output the welcome message and course name, then the string "This course is presented by: " followed by the instructors name.
 */

#include <iostream>
#include "GradeBook.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    GradeBook gradeBook1("Learning C" , "Alain Perez");
    
    cout << "The gradebook1 was created: " << gradeBook1.getCourseName() << " and was taught by " << gradeBook1.getInstructorsName() << endl;
    
    gradeBook1.displayMessage();
    
    return 0;
}
