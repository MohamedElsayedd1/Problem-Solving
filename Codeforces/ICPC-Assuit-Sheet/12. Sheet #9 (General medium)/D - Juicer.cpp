#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int n, b, d;
    cin >> n >> b >> d;

    int arr[n];
    int wasted = 0;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= b)
        {
            sum += arr[i];
        }
        if (sum > d)
        {
            wasted++;
            sum = 0;
        }
    }

    cout << wasted;
    return 0;
}