#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    string last;
    cin >> last;

    int count = 1;

    string neww;
    while (--n)
    {
        cin >> neww;
        if (neww != last)
        {
            count++;
        }
        last = neww;
    }

    cout << count;

    return 0;
}
