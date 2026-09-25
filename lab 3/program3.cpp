
#include <iostream>
using namespace std;

inline int add(int a, int b = 10)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

double divide(double a, double b)
{
    return a / b;
}

int main()
{
    cout << "Addition = " << add(5, 10) << endl;
    cout << "Addition using default argument = " << add(5) << endl;
    cout << "Addition using function overloading = " << add(5, 10, 15) << endl;
    cout << "Subtraction = " << subtract(10, 5) << endl;
    cout << "Multiplication = " << multiply(5, 4) << endl;
    cout << "Division = " << divide(10, 2) << endl;

    return 0;
}