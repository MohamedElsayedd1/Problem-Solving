
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    int t;
    long long icecream;
    cin >> t >> icecream;
    int kids = 0;
    while (t--)
    {
        char ch;
        signed int num;
        cin >> ch >> num;
        if (ch == '+')
        {
            icecream += num;
        }
        else
        {
            if (icecream >= num)
            {
                icecream -= num;
            }
            else
            {
                kids++;
            }
        }
    }
    cout << icecream << " " << kids;
    return 0;
}