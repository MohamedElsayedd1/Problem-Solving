#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void ShiftZeros(void)
{
    int size;
    cin >> size;
    int arr[size];
    int zeros = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int counter = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            arr[counter++] = arr[i];
        }
    }

    while (counter < size)
    {
        arr[counter++] = 0;
    }

    printArray(arr, size);
}

int main()
{
    ShiftZeros();

    return 0;
}