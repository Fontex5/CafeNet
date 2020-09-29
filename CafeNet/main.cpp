#include <iostream>
#include"Account.h"
#include"Manager.h"
#include"Computer.h"
#include <iomanip>
#include <vector>

using namespace std;

int main();

void Initialize(vector<Account>&, vector<Computer>&);

void Signin_Manager(Manager &);


void Show_Manager_Menu();

int main()
{
    Date bd(14, 10, 1998);
    Manager m1("Mohammad", "011111111", bd);

    vector<Account> AccList(3);

    vector<Computer> ComList(3);

    Initialize(AccList, ComList);

    cout << "Welcome to the System\n\n"
        <<"=============================================================\n"<<endl;
    cout << "Login as :\n1)Manager\n2)User" << endl;
    char opt;
    cin >> opt;
    if (opt == '1') {
        Signin_Manager(m1);
    }
}

void Initialize(vector<Account>&acclist, vector<Computer>&comList) {

    Date bd(20, 4, 1994);
    Account a1("Ali", "098884142", bd);
    acclist.push_back(a1);

    bd.setDate(2, 8, 2000);
    Account a2("Sadegh", "08644843", bd);
    acclist.push_back(a2);

    bd.setDate(5, 9, 1990);
    Account a3("Saeed", "094483133", bd);
    acclist.push_back(a3);

    double price = 15000;
    Computer c1("PC1", "Core-i7", "8");
    c1.setPrice(price);
    comList.push_back(c1);
    
    Computer c2("PC2", "Core-i5", "8");
    price = 10000;
    c2.setPrice(price);
    comList.push_back(c2);

    Computer c3("PC3", "Core-i3", "4");
    price = 5000;
    c3.setPrice(price);
    comList.push_back(c3);
}

void Signin_Manager(Manager &m) {
    string temp;       //User's inputs
    cout << "Enter Username: ";
    cin >> temp;
    if (temp == m.getUsername()) {
        cout << "Enter Password: ";
        cin >> temp;
        if (temp == m.getPassword()) {
            Show_Manager_Menu();
        }
        else {
            while (temp != m.getPassword() || temp != "quit") {
                cout << "Wrong Password! Enter again or Enter \"quit\" to quit" << endl;
                cin >> temp;
            }
        }
    }
    else {
        cout << "Username not found"<<endl;
    }
}

void Show_Manager_Menu() {

}
