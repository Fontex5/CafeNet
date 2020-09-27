#ifndef DATE_H
#define DATE_H
#include <tuple>

class Date
{
    private :
     unsigned int day;
     unsigned int month ;
     unsigned int year;

    public :
     Date(unsigned int , unsigned int , unsigned int);
     void setDate(unsigned int ,unsigned int ,unsigned int);  //Sets date
     std::tuple<unsigned int ,unsigned int ,unsigned int> getDate() const;  //return each element of date
     void showDate() const;       //Shows date
};

#endif // DATE_H
