#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int biggest_sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        biggest_sum += arr[i];
        count++;
        if (biggest_sum > sum - biggest_sum)
        {
            break;
        }
    }
    cout << count;

    return 0;
}
