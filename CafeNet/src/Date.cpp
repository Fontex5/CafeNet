#include "Date.h"
#include <iostream>

using namespace std;


Date :: Date(unsigned int d=1 , unsigned int m=1 , unsigned int y=1){     //Initializer
    Date :: setDate(d , m , y);
}

void Date :: setDate (unsigned int d ,unsigned int m ,unsigned int y){   //Setting dates
    while(d<1 || d>31){   //check for invalid entries
        cout<<"Day is entered incorrectly , Enter again : ";
        cin>>d;
    }
    day = d;   //day is set

    while(m<1 || m>12){   //check for invalid entries
        cout<<"Month is entered incorrectly , Enter again : ";
        cin>>m;
    }
    month = m;

    while(y<1900 || y>2020){   //check for invalid entries
        cout<<"Year is entered incorrectly , Enter again : ";
        cin>>y;
        cout<<endl;
    }
    year = y;
}

tuple <unsigned int , unsigned int ,unsigned int> Date :: getDate()const{   //returning each element
    tuple <unsigned int , unsigned int ,unsigned int> d;
    d = make_tuple(day , month , year);
    return d;
}

void Date :: showDate () const {   // Showing date
    cout << year << "\\";
    cout << month << "\\";
    cout << day << endl;
}
