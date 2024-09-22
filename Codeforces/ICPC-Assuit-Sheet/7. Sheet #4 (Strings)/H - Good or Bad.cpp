
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string n;
        cin >> n;
        if ((n.find("101") != string::npos) || (n.find("010") != string::npos))
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Bad" << endl;
        }
    }

    return 0;
}