#include <iostream>
using namespace std;

// Inline function for addition
inline int add(int a, int b)
{
    return a + b;
}

// Function with default argument for subtraction
int subtract(int a, int b = 5)
{
    return a - b;
}

// Function overloading for multiplication
int multiply(int a, int b)
{
    return a * b;
}

double multiply(double a, double b)
{
    return a * b;
}

int main()
{
    // Inline function
    cout << "Addition: " << add(10, 20) << endl;

    // Default argument
    cout << "Subtraction (default b = 5): "
         << subtract(20) << endl;

    cout << "Subtraction: "
         << subtract(20, 10) << endl;

    // Function overloading
    cout << "Integer multiplication: "
         << multiply(5, 4) << endl;

    cout << "Double multiplication: "
         << multiply(2.5, 4.0) << endl;

    return 0;
}