#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int rowA, colA;
    cin >> rowA >> colA;

    int arrA[rowA][colA];

    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < colA; j++)
        {
            cin >> arrA[i][j];
        }
    }

    int rowB, colB;
    cin >> rowB >> colB;

    int arrB[rowB][colB];

    for (int i = 0; i < rowB; i++)
    {
        for (int j = 0; j < colB; j++)
        {
            cin >> arrB[i][j];
        }
    }

    int arrC[rowA][colB];

    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < colB; j++)
        {
            arrC[i][j] = 0;
        }
    }

    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < colB; j++)
        {
            for (int k = 0; k < colA; k++)
            {
                arrC[i][j] += arrA[i][k] * arrB[k][j];
            }
            cout << arrC[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}