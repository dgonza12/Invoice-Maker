//
// Created by Danny Gonzalez on 9/10/2016.
//
#ifndef INVOICE_MAKER_INVOICE_H
#define INVOICE_MAKER_INVOICE_H

#include <iostream>
using namespace std;
class Invoice{

    private:
    int invoicenum;
    string From;
    string To;
    string** Charges;
    int _size;

    public:
    const int& size; //Number of charges in invoice
    Invoice();//Default constructor
    void setFrom(string name);//From Mutator.
    void setTo(string name);//To Mutator.
    void insertcharge(string name, double price);//add a charge to the invoice.
    void printinvoice(); //Print the Invoice to the console.
    double gettotal();
};




#endif //INVOICE_MAKER_INVOICE_H
