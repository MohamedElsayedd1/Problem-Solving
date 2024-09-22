
#include <iostream>
#include <string>
#include <climits>
using namespace std;

signed long long Get_Sum(signed long long *arr, int size)
{
    if (size < 0)
        return 0;
    return arr[size] + Get_Sum(arr, --size);
}

int main()
{
    // Write C++ code here
    int n;
    cin >> n;

    signed long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << Get_Sum(arr, n - 1);

    return 0;
}