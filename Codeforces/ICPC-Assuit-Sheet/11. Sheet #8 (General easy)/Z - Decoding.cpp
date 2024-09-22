
#include <iostream>
#include <cmath>
#include <climits>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (s.size() <= 2)
    {
        cout << s;
        return 0;
    }

    string result(n, ' ');
    int mid = (n - 1) / 2;

    int left = mid, right = mid + 1;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            result[left--] = s[i];
        }
        else
        {
            result[right++] = s[i];
        }
    }
    if (s.size() % 2)
    {
        reverse(result.begin(), result.end());
    }
    cout << result;
    return 0;
}