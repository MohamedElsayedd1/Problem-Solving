#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    string s;
    cin >> s;

    string temp = s;
    string min_str = s;

    for (int i = 0; i < s.size() - 1; i++)
    {
        sort(s.begin(), s.begin() + i + 1);
        sort(s.begin() + i + 1, s.end());
        if (s < min_str)
        {
            min_str = s;
        }
        s = temp;
    }

    cout << min_str;

    return 0;
}