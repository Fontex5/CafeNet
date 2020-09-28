#include "Manager.h"

using namespace std;

Manager::Manager(string &n , string &p , Date d) : Human(&n , &p , &d)
{
    setUsername("Manager");
    setPassword("12345678");
}

void Manager::Add_Computer(vector<Computer> &ComList){
    string id , cpu ,ram; // temp strings to read data from user
    cout<<"Enter computer ID: ";
    cin>>id;
    cout<<"Enter Computer's CPU: ";
    cin>>cpu;
    cout<<"Enter Computer's RAM: ";
    cin>>ram;

    Computer c(id,cpu,ram);

    cout<<"Enter Computer Hourly Price: ";
    double p=0; //to get price
    cin>>p;

    c.setPrice(&p);

    ComList.push_back(c);
}
