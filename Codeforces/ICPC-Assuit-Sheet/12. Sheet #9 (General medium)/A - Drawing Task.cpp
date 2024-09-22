
#include <iostream>
#include <cmath>
#include <climits>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int q;
    cin >> q;
    char arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = '.';
        }
    }
    while (q--)
    {
        int r1, c1, r2, c2;
        int r_min, r_max, c_min, c_max;
        char ch;
        cin >> r1 >> c1 >> r2 >> c2;
        cin >> ch;
        r_min = min(r1, r2);
        r_max = max(r1, r2);
        c_min = min(c1, c2);
        c_max = max(c1, c2);
        for (int i = r_min - 1; i < r_max; i++)
        {
            for (int j = c_min - 1; j < c_max; j++)
            {
                arr[i][j] = ch;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}