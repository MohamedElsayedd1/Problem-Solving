// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n1, n2;
    cin >> n1 >> n2;

    if (n1 <= n2)
    {
        cout << n1;
    }
    else
    {
        cout << n2;
    }

    return 0;
}