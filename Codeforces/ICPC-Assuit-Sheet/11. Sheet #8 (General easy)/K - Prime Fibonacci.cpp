
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Write C++ code here
    int t;
    cin >> t;
    int n;
    long long fib[50] = {0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 
                        0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0};

    while (t--)
    {
        cin >> n;
        if (fib[n - 1])
        {
            cout << "prime\n";
        }
        else
        {
            cout << "not prime\n";
        }
    }

    return 0;
}