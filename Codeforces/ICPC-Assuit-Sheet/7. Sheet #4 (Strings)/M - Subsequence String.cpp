#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string target{"hello"};
    int counter = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == target[counter])
        {
            counter++;
        }
    }

    if (counter == target.size())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
