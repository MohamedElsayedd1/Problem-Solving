// Online C++ compiler to run C++ program online
// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <climits>
using namespace std;

void Get_Matrix_Sum(signed long long arr1[][100], signed long long arr2[][100], int col, int row, int i = 0, int j = 0)
{

    if (i >= row)
    {
        return;
    }
    else if (j >= col)
    {
        cout << endl;
        Get_Matrix_Sum(arr1, arr2, col, row, i + 1, 0);
    }

    else
    {
        cout << arr1[i][j] + arr2[i][j] << " ";
        Get_Matrix_Sum(arr1, arr2, col, row, i, j + 1);
    }
}

int main()
{
    // Write C++ code here
    int r, c;
    cin >> r >> c;

    signed long long arrA[100][100];
    signed long long arrB[100][100];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arrA[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arrB[i][j];
        }
    }

    Get_Matrix_Sum(arrA, arrB, c, r);

    return 0;
}