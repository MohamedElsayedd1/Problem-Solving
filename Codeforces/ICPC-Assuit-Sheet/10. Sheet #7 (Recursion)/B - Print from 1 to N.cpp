
#include <iostream>
#include <cmath>
using namespace std;

void Print(int n)
{
    if (n <= 1)
        return;
    else
    {
        Print(--n);
        cout << n << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    Print(n);
    cout << n;

    return 0;
}