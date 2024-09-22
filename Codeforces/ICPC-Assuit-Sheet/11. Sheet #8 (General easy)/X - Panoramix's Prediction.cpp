#include <iostream>
#include <cmath>
#include <climits>
#include <string>
using namespace std;

int arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    int index1 = 0;
    for (int i = 0; i < 15; i++)
    {
        if (arr[i] == n1)
        {
            index1 = i;
            break;
        }
    }

    if (n2 == arr[index1 + 1])
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}