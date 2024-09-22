#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;

    vector<int> dragons(n);
    vector<int> bonus(n);

    for (int i = 0; i < n; i++)
    {
        cin >> dragons[i] >> bonus[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (dragons[j] < dragons[i])
            {
                int temp_dragon = dragons[i];
                dragons[i] = dragons[j];
                dragons[j] = temp_dragon;
                int temp_bonus = bonus[i];
                bonus[i] = bonus[j];
                bonus[j] = temp_bonus;
            }
        }
    }

    int counter = 0;
    while (counter < n)
    {
        if (s > dragons[counter])
        {
            s += bonus[counter];
            counter++;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}