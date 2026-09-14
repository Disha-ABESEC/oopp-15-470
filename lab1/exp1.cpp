// Store details of any two students
#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string branch;

    void input()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter branch: ";
        cin >> branch;
    }

    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main()
{
    Student s1, s2;

    cout << "Enter details of Student 1:" << endl;
    s1.input();

    cout << "\nEnter details of Student 2:" << endl;
    s2.input();

    cout << "\nDetails of Student 1:" << endl;
    s1.show();

    cout << "\nDetails of Student 2:" << endl;
    s2.show();

    return 0;
}