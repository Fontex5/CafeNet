#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<Human.h>
#include"Computer.h"
#include<Manager.h>

class Account : public Human
{
    public:
        Account(std::string , std::string  , const Date);
        Accpount();
        void Reserve_Computer(Computer &);
        void Show_Account();
        friend class Manager;
    private:
        double budget;

};

#endif // ACCOUNT_H
