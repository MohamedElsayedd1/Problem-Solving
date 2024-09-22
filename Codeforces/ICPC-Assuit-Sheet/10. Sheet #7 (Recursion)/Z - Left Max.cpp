
#include <iostream>
#include <climits>
using namespace std;

int n;

void LeftMax(long long *arr, int index = 0, long long Max = INT_MIN)
{
    if (index >= n)
    {
        return;
    }

    if (arr[index] >= Max)
    {
        Max = arr[index];
    }
    cout << Max << " ";

    LeftMax(arr, index + 1, Max);
}

int main()
{
    // Write C code here
    cin >> n;

    long long arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    LeftMax(arr);

    return 0;
}