
#include <iostream>
using namespace std;

int main()
{
    string keyboard{"qwertyuiopasdfghjkl;zxcvbnm,./"};
    string input;
    char rightLeft;
    string result;

    cin >> rightLeft;
    cin >> input;

    for (auto ch : input)
    {
        int found = keyboard.find(ch);
        if (rightLeft == 'R')
        {
            if (found != string::npos)
            {
                result += keyboard[found - 1];
            }
        }
        else
        {
            if (found != string::npos)
            {
                result += keyboard[found + 1];
            }
        }
    }

    cout << result;

    return 0;
}