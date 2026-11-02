// Program to overload unary and binary operators for a user-defined class (e.g., complex numbers)
#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    void operator-()
    {
        real = -real;
        imag = -imag;
    }

    Complex operator+(Complex c)
    {
        Complex temp;

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(5, 3);
    Complex c2(2, 4);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    Complex c3 = c1 + c2;

    cout << "After Binary Operator Overloading: ";
    c3.display();

    -c1;

    cout << "After Unary Operator Overloading: ";
    c1.display();

    return 0;
}