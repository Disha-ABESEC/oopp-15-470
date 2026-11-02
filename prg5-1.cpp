// Program using pointers to objects and arrays of objects to manage dynamic data structures
#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;

public:
    void getData()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;
    }

    void display()
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student *s;
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    s = new Student[n];

    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << endl;
        s[i].getData();
    }

    cout << "\nStudent Details:\n";

    for(int i = 0; i < n; i++)
    {
        s[i].display();
    }

    delete[] s;

    return 0;
}