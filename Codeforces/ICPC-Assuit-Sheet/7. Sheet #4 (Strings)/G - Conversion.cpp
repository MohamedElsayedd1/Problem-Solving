
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    getline(cin, n);

    for (char &x : n)
    {
        if (x == ',')
        {
            x = ' ';
        }
        else if (isupper(x))
        {
            x = tolower(x);
        }
        else
        {
            x = toupper(x);
        }
    }

    cout << n;

    return 0;
}