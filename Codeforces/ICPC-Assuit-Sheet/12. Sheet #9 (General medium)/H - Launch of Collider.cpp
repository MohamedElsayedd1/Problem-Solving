
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    long int n;
    cin >> n;

    string s;
    cin >> s;

    long long arr[n];
    int smallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'R' && s[i + 1] == 'L')
        {
            count++;
            int current = (arr[i + 1] - arr[i]) / 2;
            if (current < smallest)
            {
                smallest = current;
            }
        }
    }
    if (count)
    {
        cout << smallest;
    }
    else
    {
        cout << -1;
    }

    return 0;
}