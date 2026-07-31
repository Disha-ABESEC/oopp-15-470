#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int img;

public:
    void input() {
        cout << "Enter real number: ";
        cin >> real;

        cout << "Enter imaginary number: ";
        cin >> img;
    }
    void show() {
        cout << real;

        if (img >= 0)
            cout << "+" << img << "i" << endl;
        else
            cout << img << "i" << endl;
    }

    void add(int a, int b) {
        real = real + a;
        img = img + b;
    }
    void add(Complex p) {
        real = real + p.real;
        img = img + p.img;
    }
    void add(Complex p, Complex q) {
        real = p.real + q.real;
        img = p.img + q.img;
    }
};

int main() {
    Complex c1, c2, c3;

    c1.input();
    c2.input();

    cout << "\nFirst complex number: ";
    c1.show();

    cout << "Second complex number: ";
    c2.show();

    c1.add(2, 10);

    cout << "After adding (2 + 10i) to c1: ";
    c1.show();

  
    c2.add(c1);

    cout << "After adding c1 to c2: ";
    c2.show();

    c3.add(c1, c2);

    cout << "Sum of c1 and c2: ";
    c3.show();
    return 0;
}