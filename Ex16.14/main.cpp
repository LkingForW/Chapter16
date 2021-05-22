//
//  main.cpp
//  Ex16.4
//
//  Created by Alain Perez on 5/22/21.
//


/*
 16.4
 (Employee Class) Create a class called employee that includes three piecs of information as data members- a first name 9 type string), a last name ( type string) and a monthly salary (type int). Your class should have a constructor that initializs the three data members. Provide a set and a get function for each data memeber if the monthly salary is not positive, set it to 0. Write a test programn that demonstrates class Employee's capabilities. Create two Employee objects and display each object yearly salary. Then give each employee a 10 percent raise and display each employee yearly salary again.
 
 */
#include <iostream>

#include "Employee.hpp"

int main(int argc, const char * argv[]) {
    
    Employee employee1("Alain","Perez",5000);
    Employee employee2("Adrian","Muino",8000);
    
    cout << "Employee 1 is " << employee1.getFirstName() << " "
    << employee1.getLastName() << " and he makes " << employee1.getMonthlySalary() << " Monthly" << endl;
    employee1.displayYearlySalary();
    
    cout << "Employee 2 is " << employee2.getFirstName() << " "
    << employee2.getLastName() << " and he makes " << employee2.getMonthlySalary() << " Monthly" << endl;
    employee2.displayYearlySalary();
    
    
    return 0;
}
