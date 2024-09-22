// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

long long Get_fact(int n)
{
    if (n == 0)
        return 1;
    return n * Get_fact(--n);
}

int main()
{
    // Write C++ code here
    int n;
    cin >> n;

    cout << Get_fact(n);

    return 0;
}