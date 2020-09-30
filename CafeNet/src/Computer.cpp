#include "Computer.h"
#include <iostream>

using namespace std;

Computer::Computer(const string i, const string c , const string r): id(i) , cpu(c) , ram(r){
    startT.setTime(0, 0);
    finishT.setTime(0,0);
    double d = 0;
    setPrice(d);
}

Computer::Computer(){
    startT.setTime(0, 0);
    finishT.setTime(0, 0);
    double d = 0;
    setPrice(d);
}

void Computer::setPrice(double &p){
    while(p>15000){
        cout<<"Hourly price can not be more than 15000T.\n"
        <<"Enter again: ";
        cin>>p;
    }
    price = p;
}

double Computer::getPrice() const {return price;}

void Computer:: setStartTime(const Time &t) { startT = t; }

Time Computer::getStartTime()const { return startT; }

void Computer::setFinishTime(const Time &t){ finishT = t;}

Time Computer::getFinishTime() const { return finishT;}

void Computer::Show_Computer() const {
    string reserved="Yes";
    Time t;
    t.setTime(0, 0);
    if (this->getStartTime() == t) { reserved = "Not"; }
    cout << id << setw(10) << cpu << setw(10) << ram << setw(10) << price << setw(10) << reserved << endl;
}
