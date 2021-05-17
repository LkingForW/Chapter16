//
//  Invoice.cpp
//  Ex16.13
//
//  Created by Alain Perez on 5/17/21.
//

#include "Invoice.hpp"

//constructor 
Invoice::Invoice(string partNum, string description, int amount, int priceAmount){
    setPartNumber(partNum);
    setPartDescription(description);
    setQuantity(amount);
    setPrice(priceAmount);
}

//returns the quantity of the item times the price
int Invoice::getInvoiceAmount(){
    return getQuantity()*getPrice();
}

//sets the part number
void Invoice::setPartNumber(string partNumberName){
    partNumber = partNumberName;
}
//returns the part number
string Invoice::getPartNumber(){
    return partNumber;
}
//sets the part description
void Invoice::setPartDescription(string partDescrip){
    partDescription = partDescrip;
}
//returns the part description
string Invoice::getPartDescription(){
    return partDescription;
}

//sets the quantity
void Invoice::setQuantity(int amount){
    if(amount < 0){
        quantity = 0;
    }else{
        quantity = amount;
    }
}
//returns the quantity
int Invoice::getQuantity(){
    return quantity;
}
//sets the price
void Invoice::setPrice(int amount){
    if(amount < 0){
        price = 0;
    }else{
        price = amount;
    }
}
//returns the price
int Invoice::getPrice(){
    return price;
}
