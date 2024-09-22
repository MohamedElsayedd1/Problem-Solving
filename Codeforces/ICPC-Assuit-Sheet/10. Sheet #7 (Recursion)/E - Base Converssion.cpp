// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void Convert_binary(long long n)
{
    if (n == 0)
        return;
    else
    {
        Convert_binary(n / 2);
        cout << n % 2;
    }
}

int main()
{
    // Write C++ code here
    long long t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        Convert_binary(n);
        cout << endl;
    }

    return 0;
}