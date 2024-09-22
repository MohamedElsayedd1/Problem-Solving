#include <iostream>
using namespace std;

void Print_Stars(int n)
{
    if (n <= 0)
        return;

    Print_Stars(n - 1);
    cout << "*";
}

void Print_Spaces(int n)
{
    if (n <= 0)
    {
        return;
    }
    else
    {
        cout << " ";
        Print_Spaces(--n);
    }
}

int main()
{
    // Write C++ code here
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        Print_Spaces(n - i - 1);
        Print_Stars(2 * i + 1);
        cout << endl;
    }

    return 0;
}