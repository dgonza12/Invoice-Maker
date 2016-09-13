//
// Created by Danny Gonzalez on 9/10/2016.
//
#include <iostream>
#include "Invoice.h"
using namespace std;

void menu(){
    cout<<"########(MAIN-MENU)########"<<endl;
    cout<<"[1] - Make new invoice."<<endl<<"[2] - Exit."<<endl;
    cout<<"What would you like to do?:"<<endl;
    int choice;
    cin>>choice;
    switch(choice) {
        case 1 :
            {
            cout << "Okay, lets make a new invoice!" << endl;
            string input;
            double price;
            Invoice newinvoice  = Invoice();
            cout << "Who is this for?"<<endl;
            cin >> input;
            newinvoice.setTo(input);
            cout << "Who is this from?"<<endl;
            cin >> input;
            newinvoice.setFrom(input);
            do{
            cout<<"What is the Charge for?"<<endl;
            cin >> input;
            cout<<"For how much is the Charge for?"<<endl;
            cin >> price;
            newinvoice.insertcharge(input,price);
            cout<<"Enter y if done, just enter if no"<<endl;
            cin >> input;
            }while(input != "y" );
            cout << "Okay, lets see how it looks" << endl;
            newinvoice.printinvoice();
            menu();
            }
            break;
        case 2 :
            cout << "Okay, GoodBye!";
            break;
        default:
            cout << "You entered and invalid input, please try again." << endl;
            menu();
            break;
}
}
int main(){
    cout<<"-Welcome to Invoice Maker-"<<endl;
    menu();
    return 0;
}

