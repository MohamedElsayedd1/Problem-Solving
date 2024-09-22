#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned long long int r, s;

    cin >> r >> s;

    if (2 * r <= s)
    {
        cout << "Square";
    }
    else if (s * sqrt(2) / 2 <= r)
    {
        cout << "Circle";
    }
    else
    {
        cout << "Complex";
    }

    return 0;
}