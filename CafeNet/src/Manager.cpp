#include "Manager.h"
#include "Account.h"
#include <iostream>
using namespace std;

Manager::Manager(string n , string p , Date d) : Human(n , p , d)
{
    string us="Manager";
    string pas="12345678";
    setUsername(us);
    setPassword(pas);
}
Manager::Manager() 
{
    string us="Manager";
    string pas="12345678";
    setUsername(us);
    setPassword(pas);
}
void Manager::Add_Computer(vector<Computer> &ComList){
    string id , cpu ,ram; // temp strings to read data from user
    cout<<"Enter computer ID: ";
    getline(cin, id);
    cout<<"Enter Computer's CPU: ";
    getline(cin, cpu);
    cout<<"Enter Computer's RAM: ";
    getline(cin, ram);

    Computer c(id,cpu,ram);

    cout<<"Enter Computer Hourly Price: ";
    double p=0; //to get price
    cin>>p;

    c.setPrice(&p);

    ComList.push_back(c);
}
void Manager::Delete_Computer(vector<Computer>& ComList) {
    int i = 0;
    cout << setw(6) << "ID" << setw(10) << "CPU" << setw(10) << "RAM" << setw(10) << "Price/Hour" << endl;
    for (auto item : ComList) {
        cout << i << "." << setw(10) << item.id << setw(10) << item.cpu << setw(10) << item.ram << setw(10) << item.getPrice() << endl;
        i++;
    }
    cout << "Which Computer you want to delete ? (Enter row number) ";
    cin >> i;
    ComList.erase(ComList.begin()+i);
}

void Manager::Add_Account(vector<Account>& AccList) {
    string name, phone;
    unsigned int year, month, day;
    cout << "Enter User's Name: ";
    getline(cin, name);
    cout << "Enter Your Phone number: ";
    cin >> phone;
    cout << "Enter your birth day inorder , Year: ";
    cin >> year;
    cout << "Month: ";
    cin >> month;
    cout << "Day: ";
    cin >> day;
    Date bd(day , month , year);
    Account a(name, phone, bd);
    AccList.push_back(a);
}

void Manager::Delete_Account(vector<Account>& AccList) {
    string user;
    char opt='n';       //user option to enter
    int i = 0;
    cout << "Enter Username for Deletion: ";
    cin >> user;
    for (auto item : AccList) {
        if (user == item.getUsername()) {
            cout << "Is User's name " << item.getName() << "?" << endl;
            cout << "(Y/N) ";
            cin >> opt;
            if (opt != 'n' || opt != 'N') {
                AccList.erase(AccList.begin() + i);
                cout << "User is deleted successfully"<<endl;
                break;
            }
        }
        i++;
    }
    if (opt == 'n' || opt == 'N') cout << "User was not Found!" << endl;
}

void Manager::Free_Computer(Computer &c){
    Time t;
    t.setTime(0,0);
    c.setStartTime(t);
    c.setFinishTime(t);
}

void Manager::Rise_Budget(Account &a){
    cout<<"How Much you want to increase? ";
    double d;
    cin>>d;
    a.budget=d;
}
