
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string name;
    float balance;

public:
   
    BankAccount()
    {
        name = "Unknown";
        balance = 0;
        cout << "Default Constructor Called" << endl;
    }

    
    BankAccount(string n, float b)
    {
        name = n;
        balance = b;
        cout << "Parameterized Constructor Called" << endl;
    }

   
    BankAccount(const BankAccount &a)
    {
        name = a.name;
        balance = a.balance;
        cout << "Copy Constructor Called" << endl;
    }

  
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }

    
    ~BankAccount()
    {
        cout << "Destructor Called for " << name << endl;
    }
};

int main()
{

    BankAccount account1;
    account1.display();

    cout << endl;

   
    BankAccount account2("Lucky", 5000);
    account2.display();

    cout << endl;

    
    BankAccount account3(account2);
    account3.display();

    return 0;
}