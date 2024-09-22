
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int crimes = 0;
    int officers = 0;
    int untreated = 0;

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        if (input >= 1)
        {
            officers += input;
        }

        if (input == -1 && officers == 0)
        {
            untreated++;
        }
        else if (input == -1 && officers >= 1)
        {
            officers--;
        }
    }

    cout << untreated;
    return 0;
}