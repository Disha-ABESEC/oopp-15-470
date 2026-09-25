// Parameter Passing Techniques
#include <iostream>
using namespace std;

// Call by Value
void callByValue(int x)
{
    x = x + 10;
}

// Call by Reference
void callByReference(int &x)
{
    x = x + 10;
}

// Call by Address
void callByAddress(int *x)
{
    *x = *x + 10;
}

int main()
{
    int a = 10;
    int b = 10;
    int c = 10;

    callByValue(a);
    callByReference(b);
    callByAddress(&c);

    cout << "After Call by Value: " << a << endl;
    cout << "After Call by Reference: " << b << endl;
    cout << "After Call by Address: " << c << endl;

    return 0;
}