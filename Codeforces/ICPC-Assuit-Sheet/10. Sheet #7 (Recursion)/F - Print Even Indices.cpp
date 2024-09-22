
#include <iostream>
using namespace std;

void Print_Even_Indices(int *arr, int size, int index)
{
    if (index >= 0)
    {
        if (index % 2 == 0)
        {
            cout << arr[index] << " ";
        }
        Print_Even_Indices(arr, size, index - 1);
    }
    else
    {
        return;
    }
}

int main()
{
    // Write C++ code here
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Print_Even_Indices(arr, n, n - 1);

    return 0;
}