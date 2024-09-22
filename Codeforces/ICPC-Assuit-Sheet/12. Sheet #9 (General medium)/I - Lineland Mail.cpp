// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long farest;
    signed long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        farest = arr[i];
    }

    if (n == 2)
    {
        for (int i = 0; i < 2; i++)
        {
            cout << arr[1] - arr[0] << " " << arr[1] - arr[0] << endl;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                cout << abs(arr[1] - arr[0]) << " " << abs(arr[n - 1] - arr[0]);
            }
            else if (i == n - 1)
            {
                cout << abs(arr[n - 1] - arr[n - 2]) << " " << abs(arr[n - 1] - arr[0]);
            }
            else
            {
                int minimum = abs(arr[i] - arr[i - 1]) < abs(arr[i + 1] - arr[i]) ? abs(arr[i] - arr[i - 1]) : abs(arr[i + 1] - arr[i]);
                int maximum = abs(arr[n - 1] - arr[i]) > abs(arr[i] - arr[0]) ? abs(arr[n - 1] - arr[i]) : abs(arr[i] - arr[0]);
                cout << minimum << " " << maximum;
            }
            cout << endl;
        }
    }

    return 0;
}