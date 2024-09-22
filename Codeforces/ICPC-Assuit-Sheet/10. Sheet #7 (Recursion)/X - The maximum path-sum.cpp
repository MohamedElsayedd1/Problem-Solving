
#include <iostream>
#include <climits>
using namespace std;

long long MaxSum(long long arr[][11], int n, int m, int i = 0, int j = 0)
{
    if (n - 1 == i && m - 1 == j)
    {
        return arr[i][j];
    }
    else if (i >= n || j >= m)
    {
        return INT_MIN;
    }
    long long rightSum = MaxSum(arr, n, m, i, j + 1);
    long long downSum = MaxSum(arr, n, m, i + 1, j);
    return arr[i][j] + max(rightSum, downSum);
}

int main()
{
    // Write C code here
    long long arr[11][11];
    int row, col;
    cin >> row >> col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << MaxSum(arr, row, col);

    return 0;
}