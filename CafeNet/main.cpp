#include <iostream>
#include"Account.h"
#include"Manager.h"
#include"Computer.h"
#include <iomanip>
#include <vector>

using namespace std;

int main();

vector<Computer> ComList;

vector<Account> AccList;

void Initialize();

void Signin_Manager(Manager &);

void Show_Manager_Menu(Manager &);

void Signin_Account();

void Show_Account_Menu(Account &);

void Show_all_PCs();

void Show_all_Accounts();

void Exit();

int main()
{
    Date bd(14, 10, 1998);
    Manager m1("Mohammad", "011111111", bd);

    Initialize();

    cout << "Welcome to the System\n\n"
        <<"=============================================================\n"<<endl;
    cout << "Login as :\n1)Manager\n2)User\n" << endl;
    char opt;
    cin >> opt;
    while (opt != '1' && opt != '2') {
        cout << "Wrong number ! Enter again: ";
        cin >> opt;
    }
    if (opt == '1') {
        Signin_Manager(m1);
        //To do anything else
    }
    if (opt == '2') {
        Signin_Account();
    }
}

void Initialize() {
    string username;
    
    Date bd(20, 4, 1994);
    Account a1("Ali", "098884142", bd);
    username = "Ali";
    a1.setUsername(username);
    AccList.push_back(a1);

    bd.setDate(2, 8, 2000);
    Account a2("Sadegh", "08644843", bd);
    username = "Sadegh";
    a2.setUsername(username);
    AccList.push_back(a2);

    bd.setDate(5, 9, 1990);
    Account a3("Saeed", "094483133", bd);
    username = "Saeed";
    a3.setUsername(username);
    AccList.push_back(a3);

    double price = 15000;
    Computer c1("PC1", "Core-i7", "8");
    c1.setPrice(price);
    ComList.push_back(c1);
    
    Computer c2("PC2", "Core-i5", "8");
    price = 10000;
    c2.setPrice(price);
    ComList.push_back(c2);

    Computer c3("PC3", "Core-i3", "4");
    price = 5000;
    c3.setPrice(price);
    ComList.push_back(c3);
}

void Signin_Manager(Manager &m) {
    string temp;       //User's inputs
    cout << "Enter Username: ";
    cin >> temp;
    while ((temp != m.getUsername()) && (temp != "quit")) {
        cout << "UserName not Found! Enter again or Enter \"quit\" to quit" << endl;
        cin >> temp;
    }
    if (temp == m.getUsername()) {
        cout << "Enter Password: ";
        cin >> temp;
        while ((temp != m.getPassword()) && (temp != "quit")) {
            cout << "Wrong Password! Enter again or Enter \"quit\" to quit" << endl;
            cin >> temp;
        }
        if (temp == m.getPassword()) { Show_Manager_Menu(m); }
    }
    else {
        Exit();
    }
}

void Show_Manager_Menu(Manager &m) {
    int option;
    cout << "Select an option: " << endl;
    cout << "1)Showing all Computer\n2)Adding a Computer\n3)Delete a Computer\n"
        "4)Show All Acounts\n5)Add an Account\n6)Delete an Account\n"
        "7)Adding Budget\n8)Free a Computer\n9)Exit\n" << endl;
    cin >> option;
    while (option > 9 || option < 1) {
        cout << "Wrong Number!\nEnter again: ";
        cin >> option;
    }
    switch (option)
    {
        int i;
    case 1:
        Show_all_PCs();
        break;
    case 2:
        m.Add_Computer(ComList);
        break;
    case 3:
        m.Delete_Computer(ComList);
        break;
    case 4:
        Show_all_Accounts();
        break;
    case 5:
        m.Add_Account(AccList);
        break;
    case 6:
        m.Delete_Account(AccList);
        break;
    case 7:
        Show_all_Accounts();
        
        cout << "Enter accounts number: ";
        cin >> i;
        m.Rise_Budget(AccList[i]);
        break;
    case 8:
        Show_all_PCs();
        cout << "Enter accounts number: ";
        cin >> i;
        m.Free_Computer(ComList[i]);
        break;
    case 9:
        Exit();
    default:
        break;
    }
}

void Signin_Account() {
    cout << "Enter Username: ";
    string temp;
    cin >> temp;
    for (auto item : AccList) {
        if (temp == item.getUsername()) {
            cout << "Enter Password: ";
            cin >> temp;
            while (temp != item.getPassword() && temp != "quit") {
                cout << "Wrong Password! Enter again or Enter \"quit\" to quit" << endl;
                cin >> temp;
            }
            if (temp == item.getPassword()) { Show_Account_Menu(item); }
            else { 
                cout << "Account not Found."<<endl;
                break;
            }
        }
    }
}

void Show_Account_Menu(Account& a) {
    cout << "Select an option: " << endl;
    cout << "1)Reserve a Computer\n2)Change Username\n3)Change Password\n4)Exit\n" << endl;
    int option;
    cin >> option;
    while (option > 4 && option < 1) {
        cout << "Wrong Option! Enter again: ";
        cin >> option;
    }
    string temp;  //temp for user's inputs
    int i = 0;
    switch (option) {
    case 1:
        Show_all_PCs();
        cout << "Enter Computer's row number: ";
        cin >> i;
        a.Reserve_Computer(ComList[i]);
        break;
    case 2:
        cout << "Enter New Username: ";
        cin >> temp;
        a.setUsername(temp);
        cout << "Username changed to " << temp << " successfully" << endl;
        break;
    
    case 3:
        cout << "Enter New Password: ";
        cin >> temp;
        a.setUsername(temp);
        cout << "Password changed successfully" << endl;
        break;
    case 4:
        Exit();
    }
}

void Show_all_PCs() {
    cout <<setw(7) << "ID" << setw(10) << "CPU" << setw(10) << "RAM" << setw(10) << "Price" << setw(10) << "Reserved" << endl;
    int i = 0;
    for (auto item : ComList) {
        cout << i<<")"<<setw(10);
        item.Show_Computer();
        i++;
    }
}

void Show_all_Accounts() {
    cout << setw(7) << "Name" << setw(10) << "Phone Number" << setw(10) << "Birth Date" << setw(10) << "Username" << endl;
    int i = 0;
    for (auto item : AccList) {
        cout << i << ")" << setw(10);
        item.Show_Account();
        i++;
    }
}

void Exit(){//To Add File handling soon}
