#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;

    getline(cin, s);
    int count = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if ((!isalpha(s[i])) && (isalpha(s[i + 1])))
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    cout << count;

    return 0;
}
