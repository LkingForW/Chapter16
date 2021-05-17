//
//  BankAccount.hpp
//  16.12
//
//  Created by Alain Perez on 5/17/21.
//
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

#ifndef BankAccount_hpp
#define BankAccount_hpp

#include <stdio.h>
#include <string>

using namespace std;

class BankAccount{
    
public:
    
    BankAccount(string , int);//conrtsuctor
    
    //getter seter for name
    void setName(string);
    string getName();
    
    //balance getter and setters
    void setBalance(int);
    int getBalance();
    
    //deposit and withdraws
    void deposit(int);
    void withdraw(int);
    
private:
    string name;
    int balance;
};


#endif /* BankAccount_hpp */
