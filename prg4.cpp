
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> num = {10, 20, 30, 40, 50};

    cout << "Elements of vector are: " << endl;

    for(auto i : num)
    {
        cout << i << " ";
    }

    return 0;
}