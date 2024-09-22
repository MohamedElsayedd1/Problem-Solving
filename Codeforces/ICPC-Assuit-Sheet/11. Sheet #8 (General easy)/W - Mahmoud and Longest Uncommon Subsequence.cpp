
#include <iostream>
#include <cmath>
#include <climits>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    if (s1 == s2)
    {
        cout << -1;
    }
    else
    {
        int size = (s1.size() > s2.size()) ? s1.size() : s2.size();
        cout << size;
    }

    return 0;
}