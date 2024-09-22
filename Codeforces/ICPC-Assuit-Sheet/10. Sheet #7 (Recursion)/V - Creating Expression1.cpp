#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

bool Is_Exp(int index, int current_sum, long long int *arr, int target, int n)
{
    if (index == n)
    {
        return current_sum == target;
    }

    bool Plus = Is_Exp(index + 1, current_sum + arr[index], arr, target, n);

    bool Minus = Is_Exp(index + 1, current_sum - arr[index], arr, target, n);

    return Plus || Minus;
}

int main()
{

    int n;
    cin >> n;
    long long int x;
    cin >> x;

    long long int arr[21];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (Is_Exp(0, 0, arr, x, n))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}