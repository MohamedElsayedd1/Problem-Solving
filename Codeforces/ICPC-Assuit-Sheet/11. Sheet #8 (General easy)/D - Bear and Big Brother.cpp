#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    const int yearA = 3;
    const int yearB = 2;

    int count = 0;

    while (a <= b)
    {
        a *= yearA;
        b *= yearB;
        count++;
    }

    cout << count;

    return 0;
}