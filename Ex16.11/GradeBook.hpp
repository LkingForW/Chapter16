//
//  GradeBook.hpp
//  Ex16.11
//
//  Created by Alain Perez on 5/16/21.
//

#ifndef GradeBook_hpp
#define GradeBook_hpp

#include <stdio.h>

#include <string>
using namespace  std;
//Class Interface/defenition
class GradeBook{
    
public:
    GradeBook(string, string );//constructor for gradebook that takes in the course name
    void setCourseName( string ); //sets the course name of GradeBook
    string getCourseName(); //Gets the course name of the gradebook
    void displayMessage(); // displays message
    
    
    //sets the instructors name
    void setInstructorName( string);
    
    //get function for instructors name
    string getInstructorsName();
    
private:
    string courseName; //course Name
    string instructorsName; //instructors name
};

#endif /* GradeBook_hpp */
