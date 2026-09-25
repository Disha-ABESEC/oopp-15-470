// Pointer — Update Salary by 10%
#include <iostream>
using namespace std;

int main()
{
    float salary = 50000;

    float *newSalary = &salary;

    *newSalary = *newSalary + (*newSalary * 10 / 100);

    cout << "Salary = " << salary << endl;

    return 0;
}