
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    long Sereja = 0;
    long Dima = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool isSereja = true;
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (isSereja)
        {
            if (arr[s] > arr[e])
            {
                Sereja += arr[s];
                s++;
            }
            else
            {
                Sereja += arr[e];
                e--;
            }
            isSereja = false;
        }
        else
        {
            if (arr[s] > arr[e])
            {
                Dima += arr[s];
                s++;
            }
            else
            {
                Dima += arr[e];
                e--;
            }
            isSereja = true;
        }
    }

    cout << Sereja << " " << Dima;

    return 0;
}