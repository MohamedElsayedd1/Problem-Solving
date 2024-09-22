#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int minDistance = min({x1, x2, x3});
    int maxDistance = max({x1, x2, x3});

    int minimum = INT_MAX;

    for (int i = minDistance; i <= maxDistance; i++)
    {
        int sum = abs(i - x1) + abs(i - x2) + abs(i - x3);
        if (sum < minimum)
        {
            minimum = sum;
        }
    }

    cout << minimum;
    return 0;
}