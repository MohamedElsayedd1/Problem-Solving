#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int recieved_gifts[n];

    for (int i = 0; i < n; i++)
    {
        recieved_gifts[arr[i] - 1] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << recieved_gifts[i] << " ";
    }

    return 0;
}