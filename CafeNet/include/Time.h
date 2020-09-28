#ifndef TIME_H
#define TIME_H

#include<tuple>

class Time
{
    public:
        void setTime(unsigned int ,unsigned int );
        std::tuple<unsigned int ,unsigned int> getTime();
        void showTime()const;
        bool operator <(const Time &);
        bool operator >(const Time &);
        bool operator ==(const Time &);

    private:
        unsigned int hour;
        unsigned int minute;
};

#endif // TIME_H
