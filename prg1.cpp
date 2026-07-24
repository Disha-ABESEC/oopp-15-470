#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    void showData()
    {
        rollNo = 101;
        name = "Disha";
        marks = 92.5;

        cout << "Student Record" << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;
    s.showData();

    return 0;
}