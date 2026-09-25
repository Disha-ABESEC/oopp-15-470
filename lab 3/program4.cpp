#include <iostream>
using namespace std;

class Area
{
public:
    double area(double radius)
    {
        return 3.14159 * radius * radius;
    }

    double area(double length, double width)
    {
        return length * width;
    }

    int area(int side)
    {
        return side * side;
    }

    double area(double base, double height, bool triangle)
    {
        return 0.5 * base * height;
    }
};

int main()
{
    Area a;

    cout << "Area of Circle = " << a.area(5.0) << endl;
    cout << "Area of Rectangle = " << a.area(10.0, 5.0) << endl;
    cout << "Area of Square = " << a.area(5) << endl;
    cout << "Area of Triangle = " << a.area(10.0, 5.0, true) << endl;

    return 0;
}