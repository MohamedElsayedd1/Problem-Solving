// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
#include <climits>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    bool isRated = false;
    bool isDecreasing = true;
    int temp = INT_MAX;
    while (t--)
    {
        int r1, r2;
        cin >> r1 >> r2;
        if (r1 != r2)
        {
            isRated = true;
        }
        if (temp >= r1)
        {
            temp = r1;
        }
        else
        {
            isDecreasing = false;
        }
    }
    if (isRated)
    {
        cout << "rated";
    }
    else if (!isRated && !isDecreasing)
    {
        cout << "unrated";
    }
    else
    {
        cout << "maybe";
    }
    return 0;
}