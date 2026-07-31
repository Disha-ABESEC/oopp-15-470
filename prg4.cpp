#include<iostream>
using namespace std;


inline int add(int a, int b)
{
    return a + b;
}


int multiply(int a, int b = 2)
{
    return a * b;
}


int subtract(int a, int b)
{
    return a - b;
}

float subtract(float a, float b)
{
    return a - b;
}

int main()
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Addition = " << add(x, y) << endl;

    cout << "Multiplication (default value of b = 2) = "
         << multiply(x) << endl;

    cout << "Multiplication (user values) = "
         << multiply(x, y) << endl;

    cout << "Subtraction (int) = "
         << subtract(x, y) << endl;

    cout << "Subtraction (float) = "
         << subtract(10.5f, 3.2f) << endl;

    return 0;
}