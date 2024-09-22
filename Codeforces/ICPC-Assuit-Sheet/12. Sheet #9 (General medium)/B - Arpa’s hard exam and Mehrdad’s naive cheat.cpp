// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
#include <climits>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    long long int power;
    cin >> power;
    int num{1378};
    // 1 % 4 = 1
    // 2 % 4 = 2
    // 3 % 4 = 3
    // 4 % 4 = 0
    if (power == 0)
    {
        cout << 1;
    }
    else if (power % 4 == 0)
    {
        cout << 6;
    }
    else if (power % 4 == 3)
    {
        cout << 2;
    }
    else if (power % 4 == 2)
    {
        cout << 4;
    }
    else
    {
        cout << 8;
    }
}