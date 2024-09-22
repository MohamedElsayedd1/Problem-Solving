#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int getMax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}

int getMin(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    return min;
}

int countDivisors(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    return count;
}

int MaxDivisor(int arr[], int n)
{
    int maxDivisorCount = 0;            // Track the maximum number of divisors found
    int numberWithMaxDivisors = arr[0]; // Store the number with the maximum divisors

    for (int i = 0; i < n; i++)
    {
        int divisors = countDivisors(arr[i]);
        if (divisors > maxDivisorCount)
        {
            maxDivisorCount = divisors;
            numberWithMaxDivisors = arr[i];
        }
        else if (divisors == maxDivisorCount && arr[i] > numberWithMaxDivisors)
        {
            numberWithMaxDivisors = arr[i];
        }
    }

    return numberWithMaxDivisors;
}

bool isPrime(long long int n)
{
    if (n == 2)
        return true;
    else if (n < 2)
        return false;
    else if (n % 2 == 0)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}

int CountPrime(int arr[], int size)
{
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        bool is_Prime = isPrime(arr[i]);
        if (is_Prime)
            counter++;
    }

    return counter;
}

bool isPalindrome(int n)
{
    string binary{};
    while (n != 0)
    {
        int temp = n % 10;
        binary += temp + 48;
        n /= 10;
    }
    reverse(binary.begin(), binary.end());
    int left = 0;
    int right = binary.size() - 1;
    while (left < right)
    {
        if (binary[left] != binary[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int CountPalindrome(int arr[], int size)
{
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        bool is_Palin = isPalindrome(arr[i]);
        if (is_Palin)
            counter++;
    }

    return counter;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxNumber = getMax(arr, n);
    int minNumber = getMin(arr, n);
    int primeCount = CountPrime(arr, n);
    int palindromeCount = CountPalindrome(arr, n);
    int maxDivisorNumber = MaxDivisor(arr, n);

    cout << "The maximum number : " << maxNumber << endl;
    cout << "The minimum number : " << minNumber << endl;
    cout << "The number of prime numbers : " << primeCount << endl;
    cout << "The number of palindrome numbers : " << palindromeCount << endl;
    cout << "The number that has the maximum number of divisors : " << maxDivisorNumber << endl;

    return 0;
}