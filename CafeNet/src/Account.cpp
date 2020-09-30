#include "Account.h"
#include<iostream>
using namespace std;

Account::Account(string n , string p , const Date d): Human(n,p,d)
{
    budget = 0;
}

Account::Account(){budget = 0;}

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
    
     if ((c.getFinishTime() - c.getStartTime()) < 0) {
        cout << "Finish time can NOT be earlier than start Time!!\n" << endl;
    }
    else {
        double cost;
        cost = (c.getFinishTime() - c.getStartTime()) * (c.getPrice() / 60);
        if (cost > budget) {
            cout << "You don't have enough money. the cost will be " << cost << " Toman" << endl;
        }
        else {
            budget -= cost;
            cout << "Computer is reserved for you, Enjoy" << endl;
        }
    }
}

void Account::Show_Account() {
    Date bd = this->getBirth();
    cout << this->getName() << setw(10) << this->getPhone() << setw(10);
    bd.showDate();
    cout <<setw(10)<< this->getUsername()<<endl;
}
