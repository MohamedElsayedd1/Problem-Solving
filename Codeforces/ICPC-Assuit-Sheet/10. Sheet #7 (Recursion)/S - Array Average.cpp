
#include <iostream>
#include <string>
#include <climits>
#include <iomanip>
using namespace std;

double Get_Sum(double *arr, int size)
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

    double arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << fixed << setprecision(6);

    double avg = Get_Sum(arr, n - 1) / (double)n;

    cout << avg;

    return 0;
}