// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

void Print_N_Times(int n, char ch)
{
    for (int i = 0; i < n; i++)
    {
        cout << ch << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int num;
        char c;
        cin >> num >> c;
        Print_N_Times(num, c);
    }
    return 0;
}