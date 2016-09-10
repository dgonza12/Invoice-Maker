//
// Created by Danny Gonzalez on 9/10/2016.
//
#include"Invoice.h"
using namespace std;
Invoice::Invoice() {
    invoicenum = 0;
    To = "";
    From = "";
}

void Invoice::setFrom(string name) {
    From = name;
}

void Invoice::setTo(string name) {
    To = name;
}

void Invoice::printinvoice() {
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Invoice #  :"<<invoicenum<<endl;
    cout<<"From:"<<From<<endl;
    cout<<"To:"<<To<<endl;
    cout<<"-----------------------------------------------"<<endl;
}