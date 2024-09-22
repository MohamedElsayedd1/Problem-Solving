#include <iostream>
using namespace std;

unsigned long long nCr(int n, int r)
{
    if (r > n)
    {
        return 0;
    }
    if (r == 0 || r == n)
    {
        return 1;
    }
    if (r > n - r)
    {
        r = n - r;
    }
    unsigned long long res = 1;
    for (int i = 0; i < r; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

int main()
{
    int N, R;
    cin >> N >> R;

    cout << nCr(N, R) << endl;

    return 0;
}
