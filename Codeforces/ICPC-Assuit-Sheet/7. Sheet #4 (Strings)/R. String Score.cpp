// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int score = 0;

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'V')
        {
            score += 5;
        }
        else if (s[i] == 'W')
        {
            score += 2;
        }
        else if (s[i] == 'X')
        {
            i++;
        }
        else if (s[i] == 'Y')
        {
            s += s[i + 1];
            i++;
        }
        else if (s[i] == 'Z')
        {
            if (s[i + 1] == 'V')
            {
                score /= 5;
                i++;
            }
            else if (s[i + 1] == 'W')
            {
                score /= 2;
                i++;
            }
        }
    }

    cout << score;

    return 0;
}