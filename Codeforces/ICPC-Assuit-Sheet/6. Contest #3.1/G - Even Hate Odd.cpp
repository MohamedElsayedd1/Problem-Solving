#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        int nEven = 0, nOdd = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                nEven++;
            }
            else
            {
                nOdd++;
            }
        }

        if (n % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << abs(nEven - nOdd) / 2 << endl;
        }
    }

    return 0;
}
