//
//  main.cpp
//  16.12
//
//  Created by Alain Perez on 5/17/21.
//
//PROBLEM
/*
 (Account Class)
//TODO:  Create an Account that a bank might use to represent customer's bank accounts.
 TODO: Include a data member of type int to represent the account balance.
 TODO: Provide a constructor that receives an initial balance and uses it to initialize the dta member.The constructor should validate the initial balancee to ensure that it's greater than or equal to 0. If not, set the balance to 0 and display an error message indicating that the initial balance was invalid.
TODO: Provide three member functions.
 TODO: Member function credit should add an amount to the current balance.
  TODO:Member function debit should withdraw money from the Account and ensure that the debit amount does not exceed the Account balance. If it does, the balance should be left unchanged and the function should pront a message indicating "Debit amount account balance."
    TODO: Member function getBalance should return the current balance.
 Create program that creates two Account objects and tests the member function of class Account.
 */


#include <iostream>

#include "BankAccount.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    //crating a new bank account with balacne of 1000
    BankAccount account1("Alain" , 1000);
    
    //printing account name and balance
    cout << "The account under the name  " << account1.getName() << " has a balance of " << account1.getBalance() << endl;
    
    //testing deposit, withdraw, and set name function
    account1.deposit(250);
    account1.withdraw(200);
    account1.setName("Alain Perez");
    
    cout << "The account under the name  " << account1.getName() << " has a balance of " << account1.getBalance() << endl;
    
    return 0;
}
