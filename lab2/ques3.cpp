// Programs 5 and 6 using Functions
#include <iostream>
using namespace std;

// Function using reference
void updateReference(float &salary)
{
    salary = salary + (salary * 10 / 100);
}

// Function using pointer
void updatePointer(float *salary)
{
    *salary = *salary + (*salary * 10 / 100);
}

int main()
{
    float salary1 = 50000;
    float salary2 = 50000;

    updateReference(salary1);
    updatePointer(&salary2);

    cout << "Salary using Reference = " << salary1 << endl;
    cout << "Salary using Pointer = " << salary2 << endl;

    return 0;
}