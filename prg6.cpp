#include<iostream>
using namespace std;

class Bank
{
private:
    int accno;
    string name;
    float balance;

public:
    void input()
    {
        cout << "Enter Account Number: ";
        cin >> accno;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Balance: ";
        cin >> balance;
    }

    void deposit()
    {
        float amt;
        cout << "Enter amount to deposit: ";
        cin >> amt;

        balance = balance + amt;
    }

    void withdraw()
    {
        float amt;
        cout << "Enter amount to withdraw: ";
        cin >> amt;

        if(amt <= balance)
        {
            balance = balance - amt;
        }
        else
        {
            cout << "Insufficient Balance" << endl;
        }
    }

    void display()
    {
        cout << "\nAccount Number: " << accno << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    Bank b;

    b.input();
    b.deposit();
    b.withdraw();
    b.display();

    return 0;
}