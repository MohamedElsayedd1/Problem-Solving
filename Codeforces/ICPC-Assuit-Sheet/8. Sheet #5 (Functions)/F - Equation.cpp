#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

long long int helperEqn(int x, int n)
{
    long long int power = 1;
    for (int i = 1; i <= n; i++)
    {
        power *= x;
    }
    return power;
}

long long int Eqn(int x, int n)
{
    long long int s = -1;
    for (int i = 0; i <= n; i += 2)
    {
        s += helperEqn(x, i);
    }
    return s;
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << Eqn(x, n);
    return 0;
}