#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int lucky[12] = {4, 7, 44, 47, 47, 444, 447, 474, 477, 777, 774, 744};

    bool isLucky = false;
    for (int i = 0; i < 12; i++)
    {
        if (n % lucky[i] == 0)
        {
            isLucky = true;
            break;
        }
    }

    if (isLucky)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}