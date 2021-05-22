//
//  Employee.cpp
//  Ex16.4
//
//  Created by Alain Perez on 5/22/21.
//

#include "Employee.hpp"
#include <iostream>
#include <string>



using namespace std;



Employee::Employee(string firstName , string lastName , int monthlySalary){
    
    setLastName(lastName);
    setFirstName(firstName);
    setMonthlySalary(monthlySalary);
}

void Employee::setFirstName(string name){
    firstName = name;
}

string Employee::getFirstName(){
    return firstName;
}

void Employee::setLastName(string name){
    lastName = name;
}

string Employee::getLastName(){
    return lastName;
}

void Employee::setMonthlySalary(int num){
    if( num < 0 ){
        monthlySalary = 0;
    }else{
        monthlySalary = num;
    }
}
int Employee::getMonthlySalary(){
    return monthlySalary;
}

void Employee::displayYearlySalary(){
    cout << "The Employee's yearly salary is: " << getMonthlySalary() *12 << endl;
}




