//
//  Employee.hpp
//  Ex16.4
//
//  Created by Alain Perez on 5/22/21.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class Employee {
  
public:
    Employee(string , string , int); //constructor
    
    void setFirstName(string);
    string getFirstName();
    
    void setLastName(string);
    string getLastName();
    
    void setMonthlySalary(int);
    int getMonthlySalary();
    
    void displayYearlySalary();
    
private:
    string firstName;
    string lastName;
    int monthlySalary;
};


#endif /* Employee_hpp */
