#include <iostream>
#include <string>
#include <climits>
using namespace std;

unsigned long long int Count_Sequence(int n, int count = 0)
{
    if (n == 1)
    {
        return count + 1;
    }
    if (n % 2 == 0)
    {

        return Count_Sequence(n / 2, ++count);
    }
    else
    {
        return Count_Sequence(3 * n + 1, ++count);
    }
}

int main()
{
    // Write C++ code here
    unsigned long long int n;
    cin >> n;

    cout << Count_Sequence(n);

    return 0;
}