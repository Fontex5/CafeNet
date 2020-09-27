#include "Date.h"
#include <iostream>

using namespace std;

void Date :: setDate (int d , int m , int y){
    while(d<1 || d>31){
        cout<<"Day is entered incorrectly , Enter again : ";
        cin>>d;
    }
    day = d;   //day is set

    while(m<1 || m>12){
        cout<<"Month is entered incorrectly , Enter again : ";
        cin>>m;
    }
    month = m;

    while(y<1900 || y>2020){
        cout<<"Year is entered incorrectly , Enter again : ";
        cin>>y;
        cout<<endl;
    }
    year = y;
}

tuple <unsigned int , unsigned int ,unsigned int> Date :: getDate()const{
    tuple <unsigned int , unsigned int ,unsigned int> d;
    d = make_tuple(year , month , day);
    return d;
}

void Date :: showDate () const {
    cout << year << "\\";
    cout << month << "\\";
    cout << day << endl;
}
