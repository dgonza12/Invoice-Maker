//
// Created by Danny Gonzalez on 9/10/2016.
//
#include"Invoice.h"
#include <sstream>
using namespace std;
Invoice::Invoice():size(_size){
    this->_size = 0;
    invoicenum = 0;
    To = "";
    From = "";
    Charges = new string*[_size];
}

void Invoice::setFrom(string name) {
    From = name;
}

void Invoice::setTo(string name) {
    To = name;
}

void Invoice::printinvoice() {
    cout<<"###################################################"<<endl;
    cout<<"Invoice #  :"<<invoicenum<<endl;
    cout<<"From:"<<From<<endl;
    cout<<"To:"<<To<<endl;
    cout<<"-------------------"<<endl;
    for (int i = 0; i < _size; ++i) {
        cout<<"#"<<Charges[i][0]<<" -- $"<<Charges[i][1]<<endl;
    }
    cout<<"-------------------"<<endl;
    cout<<"Total:"<<gettotal()<<endl;
    cout<<"###################################################"<<endl;
}

void Invoice::insertcharge(string name, double price) {
    if(_size == 0){//is the array empty?
        _size++;
        for(int i = 0; i < _size; ++i){
            Charges[i] = new string[2];}
        Charges[0][0] = name;
        Charges[0][1] = to_string(price);
    }else{
        _size++;
        string** oldarray = Charges;
        Charges = new string*[_size];
        for(int i = 0; i < _size; ++i){
            Charges[i] = new string[2];}
        for(int i = 0; i < _size; i++){
            Charges[i][0] = oldarray[i][0];
            Charges[i][1] = oldarray[i][1];
        }
        delete []oldarray;
        Charges[_size-1][0] = name;
        Charges[_size-1][1] = to_string(price);
    }
}

double Invoice::gettotal() {
    double Total = 0;
    for (int i = 0; i < _size; ++i) {
    string Text = Charges[i][1];
    double amount;
    stringstream convert(Text);
    if (!(convert >> amount)) { amount = 0; }
    Total = Total + amount;
    }
    return Total;
}