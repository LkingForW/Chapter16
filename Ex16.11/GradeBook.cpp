//
//  GradeBook.cpp
//  Ex16.11
//
//  Created by Alain Perez on 5/16/21.
//

//HEADER
#include "GradeBook.hpp"

//STD Libraries
#include <iostream>
#include <string>

using namespace std;


//Implementation of Gradebook
//Starts off the gradeboo with instructors name and Course Name
GradeBook::GradeBook(string courseName, string instructorsName){
    setCourseName(courseName);
    setInstructorName(instructorsName);
}

// sets the course name as long as its not longer than 25 chars, if it is then it truncates it
void GradeBook::setCourseName(string name){
    
    if ( name.length() <= 25){
        courseName = name;
    }else{ //has more than 25 chars
        courseName = name.substr(0,25); // will truncate the string from 0 and length of 25
        cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
        << "Limiting course Name to the first 25 characters. \n " << endl;
    }//end if
}

//returns the courseName from GradeBook
string GradeBook::getCourseName(){
    return courseName;
}

//Displays course name and instructors name for gradebook
void GradeBook::displayMessage(){
    cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
    << "This course is presented by: " << getInstructorsName() << endl;
}

//sets the instructors name
void GradeBook::setInstructorName(string name){
    instructorsName = name;
}

//gets the instructors name
string GradeBook::getInstructorsName(){
    return instructorsName;
}
