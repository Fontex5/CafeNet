#include "Time.h"
#include <iostream>

using namespace std;

void Time::setTime(unsigned int h , unsigned int m){
    while(h>23){
        cout<<"Hours can be between 0 and 23.\nEnter again: ";
        cin >>h;
    }
    hour = h;
    while(m>59){
        cout<<"Hours can be between 0 and 59.\nEnter again: ";
        cin >>m;
    }
    minute = m;
}

tuple<unsigned int , unsigned int> Time::getTime(){
    tuple<unsigned int , unsigned int> t;
    t = make_tuple(hour , minute);
    return t;
}

void Time::showTime()const{
    cout<<hour<<":"<<minute<<endl;
}

bool Time::operator<(const Time &t){
    if(hour < t.hour){
        return true;
    }
    else if(hour == t.hour && minute < t.minute){
        return true;
    }
    else{
        return false;
    }
}

bool Time::operator>(const Time &t){
    if(hour > t.hour){
        return true;
    }
    else if(hour == t.hour && minute > t.minute){
        return true;
    }
    else{
        return false;
    }
}

bool Time::operator==(const Time &t){
    if(hour == t.hour && minute==t.minute){
        return true;
    }
    else{
        return false;
    }
}
