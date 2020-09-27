#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include "Date.h"

class Human
{
    private:
        std :: string name;
        std :: string phoneNumber;
        std :: string username;
        std :: string password;
        Date birthDate;

    public :
        Human(std::string &, std::string &, const Date);
        void setName(std :: string &);
        std::string getName();
        void setPhone(std :: string &);
        std::string getPhone();
        void setBirth(const Date);
        Date getBirth();
};

#endif // HUMAN_H
