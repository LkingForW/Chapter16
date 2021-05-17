//
//  BankAccount.cpp
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


#include "BankAccount.hpp"

#include <iostream>
#include <string>

using namespace std;

//Constructor for BankAccount that takes in the name and balance of user
BankAccount::BankAccount(string name, int balance){
    setName(name);
    setBalance(balance);
}

//sets the customers name
void BankAccount::setName(string customerName){
    name = customerName;
}

//returns the customers name
string BankAccount::getName(){
    return name;
}

//sets the balance of the aacount and does not allow the user to set to a negative number
void BankAccount::setBalance(int amount){
    if(amount < 0){
        cout << "Can not start a bank account with a negative ammount." << endl;
    }else{
        balance = amount;
    }
}

//Returns teh balance from the account
int BankAccount::getBalance(){
    return balance;
}

//adds the amount from function to the balance as long as the ammount inputed is positive
void BankAccount::deposit(int amount){
    if(amount > 0){
        balance += amount;
    }else{
        cout << "ERROR: You can not deposit negative amount." << endl;
    }
}

//takes money away from the balance as long as amount is less than the balance
void BankAccount::withdraw(int amount){
    if(amount <= getBalance()){
        balance -= amount;
    }else{
        cout << "Error: not enough moeny in the account." << endl;;
    }
}

