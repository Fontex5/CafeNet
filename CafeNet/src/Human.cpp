#include "Human.h"
#include <iostream>

using namespace std;

Human :: Human(string &n , string &p ,const Date bd):birthDate(bd){
    Human::setName(n);
    Human::setPhone(p);
}

void Human::setName(string &n){
    int temp=0;     //checking ASCII code of each character
    for(size_t i=0; i<n.size() ; ++i ){
        temp = static_cast<int>(n[i]);
        if(temp>=33 && temp<=64){         //making sure the name does not consist symbols or numbers
            cout << "The entered name is invalid. \nTry again:  ";
            cin>>n;
            i=0;
        }
    }
    name = n;
}

string Human::getName() const{
    return name;
}

void Human::setPhone(string &p){
    int temp=0;  //checking ASCII code of each character
    for(size_t i=0; i<p.size() ; ++i ){
        temp = static_cast<int>(p[i]);
        if(temp<48 || temp>57){         //making sure the name does not consist symbols or numbers
            cout << "The entered Phone is invalid. \nTry again:  ";
            cin>>p;
            i=0;
        }
    }
    phoneNumber = p;
}

string Human::getPhone() const{
    return phoneNumber;
}

void Human::setBirth(const Date bd){
    birthDate = bd;
}

Date Human::getBirth() const{
    return birthDate;
}

void Human::setUsername(string &us){
    while(us.size() > 20){
        cout<<"Username can not be longer than 20 characters.\n"
        <<"Enter again: ";
        cin>>us;
    }
    username = us;
}

string Human::getUsername() const{
    return username;
}

void Human::setPassword(string &pass){
    while(pass.size()<8){
        cout<<"Password should be at least 8 character.\n"
        <<"Enter again : ";
        cin>>pass;
    }
    password = pass;
}

string Human::getPassword() const{
    return password;
}
