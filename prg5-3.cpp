// Program to demonstrate function overloading for performing operations on different data types
#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    float add(float a, float b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Calculator c;

    cout << "Addition of Integers: " << c.add(10, 20) << endl;

    cout << "Addition of Floats: " << c.add(5.5f, 4.5f) << endl;

    cout << "Addition of Doubles: " << c.add(10.25, 20.75) << endl;

    return 0;
}