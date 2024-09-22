#include <iostream>
using namespace std;

int main()
{
    
    int t = 0;
    signed long long x[3];
    signed long long y[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> x[i];
        cin >> y[i];
    }
    if (((y[1] - y[0]) * (x[2] - x[1])) == ((y[2] - y[1]) * (x[1] - x[0])))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}