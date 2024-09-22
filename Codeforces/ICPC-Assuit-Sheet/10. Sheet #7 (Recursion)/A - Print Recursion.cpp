#include <iostream>
#include <cmath>
using namespace std;

void Print(int n)
{
    if (n == 0)
        return;
    else
    {
        cout << "I love Recursion" << endl;
        Print(--n); // must be --n not n--
    }
}

int main()
{
    int n;
    cin >> n;

    Print(n);

    return 0;
}