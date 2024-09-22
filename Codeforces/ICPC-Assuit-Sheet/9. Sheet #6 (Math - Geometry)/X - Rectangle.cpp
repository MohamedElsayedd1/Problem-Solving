#include <bits/stdc++.h>
using namespace std;

int main()
{
    signed long long int x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    int t;
    cin >> t;
    signed long long int minX, maxX;
    signed long long int minY, maxY;

    minX = min({x1, x2, x3, x4});
    maxX = max({x1, x2, x3, x4});

    minY = min({y1, y2, y3, y4});
    maxY = max({y1, y2, y3, y4});

    while (t--)
    {
        signed long long int x, y;
        cin >> x >> y;
        if (x >= minX && x <= maxX && y >= minY && y <= maxY)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
