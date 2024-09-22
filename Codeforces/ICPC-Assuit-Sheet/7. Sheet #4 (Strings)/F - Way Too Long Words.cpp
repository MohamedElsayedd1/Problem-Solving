
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

        if (n.size() <= 10)
        {
            cout << n << endl;
            continue;
        }

        cout << n[0] << n.size() - 2 << n[n.size() - 1] << endl;
    }

    return 0;
}