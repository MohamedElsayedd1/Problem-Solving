// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
#include <climits>
#include <string>
using namespace std;

#define TO_STRING(s) #s

string arr[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

int main()
{
    int t;
    cin >> t;

    int k;
    cin >> k;

    int count = 0;

    while (t--)
    {
        string s;
        cin >> s;
        bool isExist = true;
        for (int i = 0; i <= k; i++)
        {
            int found = s.find(arr[i]);
            if (found == string::npos)
            {
                isExist = false;
                break;
            }
        }
        if (isExist)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}