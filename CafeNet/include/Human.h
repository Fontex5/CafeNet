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
        Human();
        void setName(std :: string &);
        std::string getName() const;

        void setPhone(std :: string &);
        std::string getPhone() const;

        void setBirth(const Date);
        Date getBirth() const;

        void setUsername(std::string &);
        std::string getUsername() const;

        void setPassword(std::string &);
        std::string getPassword() const;
};

#endif // HUMAN_H
