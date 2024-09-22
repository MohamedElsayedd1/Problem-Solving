// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int count = 0;
    int min_height = INT_MAX;
    int max_height = INT_MIN;
    int min_index = INT_MAX;
    int max_index = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > max_height)
        {
            max_height = arr[i];
            max_index = i;
        }
        if (arr[i] <= min_height)
        {
            min_height = arr[i];
            min_index = i;
        }
    }
    int swaps = max_index + (n - min_index - 1);
    if (max_index > min_index)
    {
        swaps--;
    }

    cout << swaps << endl;

    return 0;
}