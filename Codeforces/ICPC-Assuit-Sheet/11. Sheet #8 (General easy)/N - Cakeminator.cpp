
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    char cake[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> cake[i][j];
        }
    }

    vector<int> rowsEmpty(r, true);
    vector<int> colsEmpty(c, true);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (cake[i][j] == 'S')
            {
                rowsEmpty[i] = false;
                colsEmpty[j] = false;
            }
        }
    }

    int CakesEaten = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (colsEmpty[j] || rowsEmpty[i])
            {
                CakesEaten += 1;
            }
        }
    }

    cout << CakesEaten;

    return 0;
}