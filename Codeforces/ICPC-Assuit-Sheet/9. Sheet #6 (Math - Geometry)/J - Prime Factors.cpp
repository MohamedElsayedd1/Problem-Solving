#include <iostream>
using namespace std;


bool isPrime(long long n)
{
    if (n == 2)
        return true;
    if (n < 2 || n % 2 == 0)
        return false;
    else
    {
        for (int i = 3; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

void printPrimeFactors(long long n)
{
    long long temp = n;
    if (isPrime(n))
    {
        cout << "(" << n << "^" << 1 << ")";
        return;
    }
    bool first = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime(i))
        {
            int counter = 0;
            if (temp % i != 0)
                continue;
            while (temp % i == 0)
            {
                counter++;
                temp = temp / i;
            }
            if (counter == 0)
            {
                break;
            }
            else
            {
                if (!first)
                    cout << "*";
                cout << "(" << i << "^" << counter << ")";
                first = false;
            }
        }
    }
    if (temp > 1)
    {
        if (!first)
            cout << "*";
        cout << "(" << temp << "^" << 1 << ")";
    }
}

int main()
{
    long long n;
    cin >> n;
    printPrimeFactors(n);

    return 0;
}
