#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void ConcatenateArrays(int arrA[], int size, int arrB[])
{
    int arrC[2 * size];
    for (int i = 0; i < size; i++)
    {
        arrC[i] = arrB[i];
    }
    for (int i = 0; i < size; i++)
    {
        arrC[i + size] = arrA[i];
    }
    printArray(arrC, 2 * size);
}

int main()
{
    int size;
    cin >> size;
    int arr1[size];
    int arr2[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < size; i++)
    {
        cin >> arr2[i];
    }

    ConcatenateArrays(arr1, size, arr2);

    return 0;
}
