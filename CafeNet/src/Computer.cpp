#include "Computer.h"
#include <iostream>

using namespace std;

Computer::Computer(const string &i, const string &c , const string &r): id(i) , cpu(c) , ram(r){
    startT.setTime(0, 0);
    finishT.setTime(0,0);
}

Computer::Computer(){}

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




