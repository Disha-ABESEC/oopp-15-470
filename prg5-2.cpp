// Program using smart pointers (unique_ptr, shared_ptr) to manage dynamic memory safely and avoid memory leaks
#include <iostream>
#include <memory>
using namespace std;

int main()
{
    unique_ptr<int> p1(new int(100));

    cout << "Unique Pointer Value: " << *p1 << endl;

    shared_ptr<int> p2(new int(200));

    shared_ptr<int> p3 = p2;

    cout << "Shared Pointer Value: " << *p2 << endl;
    cout << "Shared Pointer Value: " << *p3 << endl;

    cout << "Reference Count: " << p2.use_count() << endl;

    return 0;
}