// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

void SwapRows(int arr[][1000], int size, int xRows, int yRows)
{
    for (int i = 0; i < size; i++)
    {
        int temp = arr[xRows - 1][i];
        arr[xRows - 1][i] = arr[yRows - 1][i];
        arr[yRows - 1][i] = temp;
    }
}

void SwapColumns(int arr[][1000], int size, int xCols, int yCols)
{
    for (int i = 0; i < size; i++)
    {
        int temp = arr[i][xCols - 1];
        arr[i][xCols - 1] = arr[i][yCols - 1];
        arr[i][yCols - 1] = temp;
    }
}

int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    int arr[1000][1000];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    SwapRows(arr, n, x, y);
    SwapColumns(arr, n, x, y);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}