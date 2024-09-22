#include <iostream>
#include <string>
#include <climits>
using namespace std;

bool Is_Palindrome(long long int *arr, int left, int right)
{
    if (left >= right)
    {
        return 1;
    }
    if (arr[left] != arr[right])
    {
        return 0;
    }
    else
    {
        return Is_Palindrome(arr, ++left, --right);
    }
}

int main()
{
    // Write C++ code here
    int n;
    cin >> n;

    long long int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        cout << "YES";
    }
    else
    {
        if (Is_Palindrome(arr, 0, n - 1))
            cout << "YES";
        else
            cout << "NO";
    }

    return 0;
}