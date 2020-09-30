#ifndef MANAGER_H
#define MANAGER_H

#include <Human.h>
#include <vector>
#include "Computer.h"

class Account;
class Manager : public Human
{
    public:
        Manager(std::string  , std::string , const Date);
        Manager();
        void Add_Computer(std::vector<Computer> &);     //add Computer to list
        void Delete_Computer(std::vector<Computer> &);  //delete a Computer from List

        void Add_Account(vector<Account> &);       //add Account for a user
        void Delete_Account(vector<Account> &);    //delete an account from list

        void Free_Computer(Computer &);        //Free a computer that has been reserved
        void Rise_Budget(Account &);

};

#endif // MANAGER_H
