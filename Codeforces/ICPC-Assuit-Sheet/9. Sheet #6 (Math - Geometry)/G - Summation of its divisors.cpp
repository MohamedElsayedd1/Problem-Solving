#include <iostream>

using namespace std;

bool isDivisor(unsigned long long int n, unsigned long long int dividor)
{
    if (n % dividor == 0)
        return 1;
    else
        return 0;
}

int main()
{
    unsigned long long int n;
    cin >> n;

    unsigned long long int sum = 0;

    for (unsigned long long int i = 1; i*i <= n; i++)
    {
        if (isDivisor(n, i)){
            sum += i;
            if(i != (n / i)){
                sum += (n / i);
            }
        }
    }
    cout << sum;

    return 0;
}