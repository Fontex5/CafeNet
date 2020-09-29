#include "Account.h"
#include<iostream>
using namespace std;

Account::Account(string n , string p , const Date d): Human(n,p,d)
{
    budget = 0;
}

Account::Account(){}

void Account::Reserve_Computer(Computer &c){
    unsigned int h,m;
    cout<<"When do you want to use the Computer? (Enter hh  mm) ";
    cin>>h>>m;

    Time t;
    t.setTime(h,m);
    while(t==c.getStartTime() || t>c.getStartTime()){
        cout<<"This Computer is reserved at that time.\n"
        <<"Computer is reserved until: ";
        c.getFinishTime().showTime();
        cout<<"Enter another time (hh  mm): ";
        cin>>h>>m;
        t.setTime(h,m);
    }
    c.setStartTime(t);

    cout<<"When will you finish your job? (Enter hh mm)  ";
    cin>>h>>m;

    t.setTime(h,m);

    c.setFinishTime(t);
}
