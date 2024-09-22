#include <iostream>
using namespace std;
int main()
{
    unsigned int n;
    cin >> n;

    unsigned long int arr[n];
    unsigned int zeros = 0;
    unsigned int start{0};
    unsigned int end{0};

    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] == 0 && i != 0)
        {
            unsigned int start{0};
            unsigned int end{i - 1};
            while (start < end)
            {
                unsigned long long temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
                start++;
                end--;
            }
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}