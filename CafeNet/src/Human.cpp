#include "Human.h"
#include <iostream>

using namespace std;

Human :: Human(string &n , string &p ,const Date bd):birthDate(bd){
    Human::setName(n);
    Human::setPhone(p);
}

void Human::setName(string &n){
    int temp=0;     //checking ASCII code of each character
    for(size_t i=0; i<n.length() ; ++i ){
        temp = static_cast<int>(n[i]);
        if(temp>=33 && temp<=64){         //making sure the name does not consist symbols or numbers
            cout << "The entered name is invalid. \nTry again:  ";
            cin>>n;
            i=0;
        }
    }
    name = n;
}

string Human::getName(){
    return name;
}

void Human::setPhone(string &p){
    int temp=0;  //checking ASCII code of each character
    for(size_t i=0; i<p.length() ; ++i ){
        temp = static_cast<int>(p[i]);
        if(temp<48 || temp>57){         //making sure the name does not consist symbols or numbers
            cout << "The entered Phone is invalid. \nTry again:  ";
            cin>>p;
            i=0;
        }
    }
    phoneNumber = p;
}

string Human::getPhone(){
    return phoneNumber;
}

void Human::setBirth(const Date bd){
    birthDate = bd;
}

Date Human::getBirth(){
    return birthDate;
}
