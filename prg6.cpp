#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string name;
    float balance;

public:
    // Default Constructor
    BankAccount()
    {
        name = "Unknown";
        balance = 0;
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    BankAccount(string n, float b)
    {
        name = n;
        balance = b;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Copy Constructor
    BankAccount(const BankAccount &a)
    {
        name = a.name;
        balance = a.balance;
        cout << "Copy Constructor Called" << endl;
    }

    // Display Function
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }

    // Destructor
    ~BankAccount()
    {
        cout << "Destructor Called for " << name << endl;
    }
};

int main()
{
    // Default Constructor
    BankAccount account1;
    account1.display();

    cout << endl;

    // Parameterized Constructor
    BankAccount account2("Lucky", 5000);
    account2.display();

    cout << endl;

    // Copy Constructor
    BankAccount account3(account2);
    account3.display();

    return 0;
}