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
    public:
    Invoice();//default constructor
    void setFrom(string name);
    void setTo(string name);
    void printinvoice();
};




#endif //INVOICE_MAKER_INVOICE_H
