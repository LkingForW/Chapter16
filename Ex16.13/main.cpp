//
//  main.cpp
//  Ex16.13
//
//  Created by Alain Perez on 5/17/21.
//
/* (Invoice Class) Create a class called Invoice that a hardware store might use represent an invoice for an item sold at the store. An Invoice should include four data members a part num ber ( string), a part description ( type string), a quantity of the item being purchased (type int) and a price per item (type int) . Your class should have a constructor that initializes the four data members. Provide a set and a get function for each data member. In addition, provide a member function named getInvoiceAmount that calculates the invoice amount ( multiplies the quantity by the price per item), then returns the amount as an int value. If the quantity is not positive, it should be set to 0. If the price per item is not positive, it should be set to 0. Write a test program that demonstrates class Invoice's capabilities.*/


#include <iostream>
#include <string>

#include "Invoice.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Invoice item1("PartNumber 1" , "Testing part description" , 2 , 6);
    
    cout << "Part Number: " << item1.getPartNumber()
    << "\nPart Description: " << item1.getPartDescription()
    << "\nPart quantity: " << item1.getQuantity()
    << "\nPart Price: " << item1.getPrice()
    <<"\nInvoice Amount " << item1.getInvoiceAmount() << endl;
    
    
    return 0;
}
