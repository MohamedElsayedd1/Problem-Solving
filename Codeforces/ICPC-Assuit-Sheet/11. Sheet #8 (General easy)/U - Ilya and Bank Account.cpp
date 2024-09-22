#include <iostream>
#include <cmath>
#include <climits>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s[0] != '-')
    {
        cout << s;
    }
    else
    {
        string s1 = s;
        string s2 = s;
        s1.erase(s.size() - 1, 1);
        s2.erase(s.size() - 2, 1);

        if (s1 < s2)
        {
            if (s1 == "-0")
            {
                s1 = "0";
            }
            cout << s1;
        }
        else
        {
            if (s2 == "-0")
            {
                s2 = "0";
            }
            cout << s2;
        }
    }
    return 0;
}