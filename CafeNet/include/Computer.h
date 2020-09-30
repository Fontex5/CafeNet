#ifndef COMPUTER_H
#define COMPUTER_H

#include<string>
#include "Time.h"

class Computer
{
    public:
        Computer(const std::string , const std::string  , const std::string );
        Computer();

        void setPrice(double &);
        double getPrice() const;

        void setStartTime(const Time &);
        void setFinishTime (const Time &);

        Time getStartTime() const;
        Time getFinishTime() const;
    
        void Show_Computer()const;

    private:
        std :: string id;
        std :: string cpu;
        std :: string ram;
        double price;
        Time startT;
        Time finishT;

};

#endif // COMPUTER_H
