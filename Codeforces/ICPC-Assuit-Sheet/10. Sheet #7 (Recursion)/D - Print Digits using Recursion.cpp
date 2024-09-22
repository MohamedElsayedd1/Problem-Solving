#include <iostream>
#include <cmath>
using namespace std;

void Print(int n)
{
    if (n < 10)
    {
        cout << n << " ";
    }
    else
    {
        int d = n % 10;
        n /= 10;
        Print(n);
        cout << d << " ";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long int n;
        cin >> n;

        if (n == 0)
        {
            cout << "0";
        }
        else
        {
            Print(n);
        }

        cout << endl;
    }

    return 0;
}