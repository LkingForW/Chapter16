//
//  Invoice.hpp
//  Ex16.13
//
//  Created by Alain Perez on 5/17/21.
//

#ifndef Invoice_hpp
#define Invoice_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Invoice{
    
public:
    Invoice(string,string,int,int); //constructor
    int getInvoiceAmount();//multiplies the quantity times price then returns the amount as an int value.
    
    //mutators/ accesors
    
    void setPartNumber(string);
    string getPartNumber();
    
    void setPartDescription(string);
    string getPartDescription();
        
    void setQuantity(int);
    int getQuantity();
    
    void setPrice(int);
    int getPrice();
    
private:
    string partNumber;
    string partDescription;
    int quantity;//if the quantity is not positivethen it should be set to zero
    int price;//if the price is not positive than it should return to zero
};


#endif /* Invoice_hpp */
