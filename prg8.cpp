
#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    static int count;

    Student(int m)
    {
        marks = m;
        count++;
    }

    friend void showMarks(Student s);
};

int Student::count = 0;

void showMarks(Student s)
{
    cout << "Marks: " << s.marks << endl;
}

int main()
{
    Student s1(90);
    Student s2(85);
    Student s3(95);

    cout << "Total Students: " << Student::count << endl;

    showMarks(s1);
    showMarks(s2);
    showMarks(s3);

    return 0;
}