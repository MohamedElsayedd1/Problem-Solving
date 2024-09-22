
#include <iostream>
#include <string>
#include <climits>
using namespace std;

signed long long Get_Sum(signed long long *arr, int size, int counter)
{
    if (counter <= 0)
        return 0;
    return arr[size] + Get_Sum(arr, --size, --counter);
}

int main()
{
    // Write C++ code here
    int n, m;
    cin >> n >> m;

    signed long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << Get_Sum(arr, n - 1, m);

    return 0;
}